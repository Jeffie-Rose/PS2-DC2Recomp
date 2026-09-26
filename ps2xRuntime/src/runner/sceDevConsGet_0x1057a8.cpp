#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sceDevConsGet
// Address: 0x1057a8 - 0x10581c
void sceDevConsGet_0x1057a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevConsGet_0x1057a8");
#endif

    switch (ctx->pc) {
        case 0x1057c4u: goto label_1057c4;
        default: break;
    }

    ctx->pc = 0x1057a8u;

    // 0x1057a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1057a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1057ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1057acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1057b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1057b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1057b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1057b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1057b8: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1057b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1057bc: 0xc041854  jal         func_106150
    ctx->pc = 0x1057BCu;
    SET_GPR_U32(ctx, 31, 0x1057C4u);
    ctx->pc = 0x1057C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1057BCu;
            // 0x1057c0: 0x8e060014  lw          $a2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106150u;
    if (runtime->hasFunction(0x106150u)) {
        auto targetFn = runtime->lookupFunction(0x106150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1057C4u; }
        if (ctx->pc != 0x1057C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevConsGetc_0x106150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1057C4u; }
        if (ctx->pc != 0x1057C4u) { return; }
    }
    ctx->pc = 0x1057C4u;
label_1057c4:
    // 0x1057c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1057c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1057c8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1057c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1057cc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1057ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1057d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1057d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1057d4: 0x45182b  sltu        $v1, $v0, $a1
    ctx->pc = 0x1057d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1057d8: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1057D8u;
    {
        const bool branch_taken_0x1057d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1057DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1057D8u;
            // 0x1057dc: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1057d8) {
            ctx->pc = 0x105808u;
            goto label_105808;
        }
    }
    ctx->pc = 0x1057E0u;
    // 0x1057e0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1057e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1057e4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1057e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1057e8: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x1057e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1057ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1057ECu;
    {
        const bool branch_taken_0x1057ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1057F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1057ECu;
            // 0x1057f0: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1057ec) {
            ctx->pc = 0x105800u;
            goto label_105800;
        }
    }
    ctx->pc = 0x1057F4u;
    // 0x1057f4: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1057f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1057f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1057F8u;
    {
        const bool branch_taken_0x1057f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1057FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1057F8u;
            // 0x1057fc: 0xae050010  sw          $a1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1057f8) {
            ctx->pc = 0x105808u;
            goto label_105808;
        }
    }
    ctx->pc = 0x105800u;
label_105800:
    // 0x105800: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x105800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x105804: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x105804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_105808:
    // 0x105808: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x105808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10580c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x10580cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105810: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x105810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105814: 0x3e00008  jr          $ra
    ctx->pc = 0x105814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105814u;
            // 0x105818: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10581Cu;
}
