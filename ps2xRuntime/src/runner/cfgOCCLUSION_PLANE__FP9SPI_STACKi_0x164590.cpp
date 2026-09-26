#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: cfgOCCLUSION_PLANE__FP9SPI_STACKi
// Address: 0x164590 - 0x164610
void cfgOCCLUSION_PLANE__FP9SPI_STACKi_0x164590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cfgOCCLUSION_PLANE__FP9SPI_STACKi_0x164590");
#endif

    switch (ctx->pc) {
        case 0x1645b4u: goto label_1645b4;
        case 0x1645c8u: goto label_1645c8;
        case 0x1645f0u: goto label_1645f0;
        default: break;
    }

    ctx->pc = 0x164590u;

    // 0x164590: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x164590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x164594: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x164594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x164598: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x164598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16459c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16459cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1645a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1645a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1645a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1645a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1645a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1645a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1645ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1645acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1645b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1645b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1645b4:
    // 0x1645b4: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x1645b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x1645b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1645b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1645bc: 0x24530050  addiu       $s3, $v0, 0x50
    ctx->pc = 0x1645bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1645c0: 0xc051928  jal         func_1464A0
    ctx->pc = 0x1645C0u;
    SET_GPR_U32(ctx, 31, 0x1645C8u);
    ctx->pc = 0x1645C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1645C0u;
            // 0x1645c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1645C8u; }
        if (ctx->pc != 0x1645C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1645C8u; }
        if (ctx->pc != 0x1645C8u) { return; }
    }
    ctx->pc = 0x1645C8u;
label_1645c8:
    // 0x1645c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1645c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1645cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1645ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1645d0: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x1645d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x1645d4: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x1645d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x1645d8: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1645d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1645dc: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1645DCu;
    {
        const bool branch_taken_0x1645dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1645E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1645DCu;
            // 0x1645e0: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1645dc) {
            ctx->pc = 0x1645B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1645b4;
        }
    }
    ctx->pc = 0x1645E4u;
    // 0x1645e4: 0x8f848914  lw          $a0, -0x76EC($gp)
    ctx->pc = 0x1645e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
    // 0x1645e8: 0xc0573f4  jal         func_15CFD0
    ctx->pc = 0x1645E8u;
    SET_GPR_U32(ctx, 31, 0x1645F0u);
    ctx->pc = 0x1645ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1645E8u;
            // 0x1645ec: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CFD0u;
    if (runtime->hasFunction(0x15CFD0u)) {
        auto targetFn = runtime->lookupFunction(0x15CFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1645F0u; }
        if (ctx->pc != 0x1645F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateOcclusion__4CMapFPA4_f_0x15cfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1645F0u; }
        if (ctx->pc != 0x1645F0u) { return; }
    }
    ctx->pc = 0x1645F0u;
label_1645f0:
    // 0x1645f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1645f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1645f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1645f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1645f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1645f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1645fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1645fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x164600: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x164600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164604: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x164604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164608: 0x3e00008  jr          $ra
    ctx->pc = 0x164608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16460Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164608u;
            // 0x16460c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164610u;
}
