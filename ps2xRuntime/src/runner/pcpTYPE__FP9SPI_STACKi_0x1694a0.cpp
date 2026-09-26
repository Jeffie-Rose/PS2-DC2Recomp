#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: pcpTYPE__FP9SPI_STACKi
// Address: 0x1694a0 - 0x16952c
void pcpTYPE__FP9SPI_STACKi_0x1694a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pcpTYPE__FP9SPI_STACKi_0x1694a0");
#endif

    switch (ctx->pc) {
        case 0x1694c4u: goto label_1694c4;
        default: break;
    }

    ctx->pc = 0x1694a0u;

    // 0x1694a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1694a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1694a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1694a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1694a8: 0x8f828980  lw          $v0, -0x7680($gp)
    ctx->pc = 0x1694a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936960)));
    // 0x1694ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1694ACu;
    {
        const bool branch_taken_0x1694ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1694B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1694ACu;
            // 0x1694b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1694ac) {
            ctx->pc = 0x1694BCu;
            goto label_1694bc;
        }
    }
    ctx->pc = 0x1694B4u;
    // 0x1694b4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1694B4u;
    {
        const bool branch_taken_0x1694b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1694B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1694B4u;
            // 0x1694b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1694b4) {
            ctx->pc = 0x169524u;
            goto label_169524;
        }
    }
    ctx->pc = 0x1694BCu;
label_1694bc:
    // 0x1694bc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1694BCu;
    SET_GPR_U32(ctx, 31, 0x1694C4u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1694C4u; }
        if (ctx->pc != 0x1694C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1694C4u; }
        if (ctx->pc != 0x1694C4u) { return; }
    }
    ctx->pc = 0x1694C4u;
label_1694c4:
    // 0x1694c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1694c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1694c8: 0x10430011  beq         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1694C8u;
    {
        const bool branch_taken_0x1694c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1694CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1694C8u;
            // 0x1694cc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1694c8) {
            ctx->pc = 0x169510u;
            goto label_169510;
        }
    }
    ctx->pc = 0x1694D0u;
    // 0x1694d0: 0x1044000f  beq         $v0, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1694D0u;
    {
        const bool branch_taken_0x1694d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1694D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1694D0u;
            // 0x1694d4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1694d0) {
            ctx->pc = 0x169510u;
            goto label_169510;
        }
    }
    ctx->pc = 0x1694D8u;
    // 0x1694d8: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1694D8u;
    {
        const bool branch_taken_0x1694d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1694DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1694D8u;
            // 0x1694dc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1694d8) {
            ctx->pc = 0x169508u;
            goto label_169508;
        }
    }
    ctx->pc = 0x1694E0u;
    // 0x1694e0: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1694E0u;
    {
        const bool branch_taken_0x1694e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1694e0) {
            ctx->pc = 0x169500u;
            goto label_169500;
        }
    }
    ctx->pc = 0x1694E8u;
    // 0x1694e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1694E8u;
    {
        const bool branch_taken_0x1694e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1694e8) {
            ctx->pc = 0x1694F8u;
            goto label_1694f8;
        }
    }
    ctx->pc = 0x1694F0u;
    // 0x1694f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1694F0u;
    {
        const bool branch_taken_0x1694f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1694F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1694F0u;
            // 0x1694f4: 0x8f838980  lw          $v1, -0x7680($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1694f0) {
            ctx->pc = 0x169518u;
            goto label_169518;
        }
    }
    ctx->pc = 0x1694F8u;
label_1694f8:
    // 0x1694f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1694F8u;
    {
        const bool branch_taken_0x1694f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1694FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1694F8u;
            // 0x1694fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1694f8) {
            ctx->pc = 0x169514u;
            goto label_169514;
        }
    }
    ctx->pc = 0x169500u;
label_169500:
    // 0x169500: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x169500u;
    {
        const bool branch_taken_0x169500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169500u;
            // 0x169504: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169500) {
            ctx->pc = 0x169514u;
            goto label_169514;
        }
    }
    ctx->pc = 0x169508u;
label_169508:
    // 0x169508: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x169508u;
    {
        const bool branch_taken_0x169508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16950Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169508u;
            // 0x16950c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169508) {
            ctx->pc = 0x169514u;
            goto label_169514;
        }
    }
    ctx->pc = 0x169510u;
label_169510:
    // 0x169510: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x169510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_169514:
    // 0x169514: 0x8f838980  lw          $v1, -0x7680($gp)
    ctx->pc = 0x169514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936960)));
label_169518:
    // 0x169518: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x169518u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x16951c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16951cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_169524:
    // 0x169524: 0x3e00008  jr          $ra
    ctx->pc = 0x169524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169524u;
            // 0x169528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16952Cu;
}
