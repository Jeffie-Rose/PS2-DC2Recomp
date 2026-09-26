#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: KeyMainCharaBG__Fv
// Address: 0x2bc150 - 0x2bc238
void KeyMainCharaBG__Fv_0x2bc150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("KeyMainCharaBG__Fv_0x2bc150");
#endif

    switch (ctx->pc) {
        case 0x2bc160u: goto label_2bc160;
        default: break;
    }

    ctx->pc = 0x2bc150u;

    // 0x2bc150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bc150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bc154: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bc154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bc158: 0xc0aef20  jal         func_2BBC80
    ctx->pc = 0x2BC158u;
    SET_GPR_U32(ctx, 31, 0x2BC160u);
    ctx->pc = 0x2BBC80u;
    if (runtime->hasFunction(0x2BBC80u)) {
        auto targetFn = runtime->lookupFunction(0x2BBC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC160u; }
        if (ctx->pc != 0x2BC160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadMainCharaBG__Fv_0x2bbc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC160u; }
        if (ctx->pc != 0x2BC160u) { return; }
    }
    ctx->pc = 0x2BC160u;
label_2bc160:
    // 0x2bc160: 0x83849b71  lb          $a0, -0x648F($gp)
    ctx->pc = 0x2bc160u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941553)));
    // 0x2bc164: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bc164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bc168: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BC168u;
    {
        const bool branch_taken_0x2bc168 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2bc168) {
            ctx->pc = 0x2BC180u;
            goto label_2bc180;
        }
    }
    ctx->pc = 0x2BC170u;
    // 0x2bc170: 0x8f839c0c  lw          $v1, -0x63F4($gp)
    ctx->pc = 0x2bc170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941708)));
    // 0x2bc174: 0x24630012  addiu       $v1, $v1, 0x12
    ctx->pc = 0x2bc174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18));
    // 0x2bc178: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2BC178u;
    {
        const bool branch_taken_0x2bc178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC178u;
            // 0x2bc17c: 0xaf839c0c  sw          $v1, -0x63F4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941708), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc178) {
            ctx->pc = 0x2BC1BCu;
            goto label_2bc1bc;
        }
    }
    ctx->pc = 0x2BC180u;
label_2bc180:
    // 0x2bc180: 0x8f849c0c  lw          $a0, -0x63F4($gp)
    ctx->pc = 0x2bc180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941708)));
    // 0x2bc184: 0x878384ec  lh          $v1, -0x7B14($gp)
    ctx->pc = 0x2bc184u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935788)));
    // 0x2bc188: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x2bc188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x2bc18c: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x2bc18cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2bc190: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BC190u;
    {
        const bool branch_taken_0x2bc190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BC194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC190u;
            // 0x2bc194: 0xaf849c0c  sw          $a0, -0x63F4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941708), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc190) {
            ctx->pc = 0x2BC1A4u;
            goto label_2bc1a4;
        }
    }
    ctx->pc = 0x2BC198u;
    // 0x2bc198: 0x8f839c0c  lw          $v1, -0x63F4($gp)
    ctx->pc = 0x2bc198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941708)));
    // 0x2bc19c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2bc19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2bc1a0: 0xaf839c0c  sw          $v1, -0x63F4($gp)
    ctx->pc = 0x2bc1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941708), GPR_U32(ctx, 3));
label_2bc1a4:
    // 0x2bc1a4: 0x8f839c10  lw          $v1, -0x63F0($gp)
    ctx->pc = 0x2bc1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941712)));
    // 0x2bc1a8: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BC1A8u;
    {
        const bool branch_taken_0x2bc1a8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2bc1a8) {
            ctx->pc = 0x2BC1BCu;
            goto label_2bc1bc;
        }
    }
    ctx->pc = 0x2BC1B0u;
    // 0x2bc1b0: 0x8f839c0c  lw          $v1, -0x63F4($gp)
    ctx->pc = 0x2bc1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941708)));
    // 0x2bc1b4: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x2bc1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x2bc1b8: 0xaf839c0c  sw          $v1, -0x63F4($gp)
    ctx->pc = 0x2bc1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941708), GPR_U32(ctx, 3));
label_2bc1bc:
    // 0x2bc1bc: 0x8f839c0c  lw          $v1, -0x63F4($gp)
    ctx->pc = 0x2bc1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941708)));
    // 0x2bc1c0: 0x28610209  slti        $at, $v1, 0x209
    ctx->pc = 0x2bc1c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)521) ? 1 : 0);
    // 0x2bc1c4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BC1C4u;
    {
        const bool branch_taken_0x2bc1c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BC1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC1C4u;
            // 0x2bc1c8: 0x24030208  addiu       $v1, $zero, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc1c4) {
            ctx->pc = 0x2BC1D0u;
            goto label_2bc1d0;
        }
    }
    ctx->pc = 0x2BC1CCu;
    // 0x2bc1cc: 0xaf839c0c  sw          $v1, -0x63F4($gp)
    ctx->pc = 0x2bc1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941708), GPR_U32(ctx, 3));
label_2bc1d0:
    // 0x2bc1d0: 0x8f839c10  lw          $v1, -0x63F0($gp)
    ctx->pc = 0x2bc1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941712)));
    // 0x2bc1d4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC1D4u;
    {
        const bool branch_taken_0x2bc1d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc1d4) {
            ctx->pc = 0x2BC1E4u;
            goto label_2bc1e4;
        }
    }
    ctx->pc = 0x2BC1DCu;
    // 0x2bc1dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BC1DCu;
    {
        const bool branch_taken_0x2bc1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC1DCu;
            // 0x2bc1e0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc1dc) {
            ctx->pc = 0x2BC1FCu;
            goto label_2bc1fc;
        }
    }
    ctx->pc = 0x2BC1E4u;
label_2bc1e4:
    // 0x2bc1e4: 0x8f839c0c  lw          $v1, -0x63F4($gp)
    ctx->pc = 0x2bc1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941708)));
    // 0x2bc1e8: 0x28610081  slti        $at, $v1, 0x81
    ctx->pc = 0x2bc1e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x2bc1ec: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BC1ECu;
    {
        const bool branch_taken_0x2bc1ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BC1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC1ECu;
            // 0x2bc1f0: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc1ec) {
            ctx->pc = 0x2BC1F8u;
            goto label_2bc1f8;
        }
    }
    ctx->pc = 0x2BC1F4u;
    // 0x2bc1f4: 0xaf839c0c  sw          $v1, -0x63F4($gp)
    ctx->pc = 0x2bc1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941708), GPR_U32(ctx, 3));
label_2bc1f8:
    // 0x2bc1f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2bc1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2bc1fc:
    // 0x2bc1fc: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2BC1FCu;
    {
        const bool branch_taken_0x2bc1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2BC200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC1FCu;
            // 0x2bc200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc1fc) {
            ctx->pc = 0x2BC22Cu;
            goto label_2bc22c;
        }
    }
    ctx->pc = 0x2BC204u;
    // 0x2bc204: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x2bc204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x2bc208: 0x8f829c0c  lw          $v0, -0x63F4($gp)
    ctx->pc = 0x2bc208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941708)));
    // 0x2bc20c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2bc20cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2bc210: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BC210u;
    {
        const bool branch_taken_0x2bc210 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BC214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC210u;
            // 0x2bc214: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc210) {
            ctx->pc = 0x2BC228u;
            goto label_2bc228;
        }
    }
    ctx->pc = 0x2BC218u;
    // 0x2bc218: 0xaf809c08  sw          $zero, -0x63F8($gp)
    ctx->pc = 0x2bc218u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941704), GPR_U32(ctx, 0));
    // 0x2bc21c: 0xa78284ec  sh          $v0, -0x7B14($gp)
    ctx->pc = 0x2bc21cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935788), (uint16_t)GPR_U32(ctx, 2));
    // 0x2bc220: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BC220u;
    {
        const bool branch_taken_0x2bc220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC220u;
            // 0x2bc224: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc220) {
            ctx->pc = 0x2BC22Cu;
            goto label_2bc22c;
        }
    }
    ctx->pc = 0x2BC228u;
label_2bc228:
    // 0x2bc228: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bc228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bc22c:
    // 0x2bc22c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bc22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc230: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC230u;
            // 0x2bc234: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BC238u;
}
