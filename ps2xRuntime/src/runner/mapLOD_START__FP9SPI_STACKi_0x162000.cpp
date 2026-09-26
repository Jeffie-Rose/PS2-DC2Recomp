#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapLOD_START__FP9SPI_STACKi
// Address: 0x162000 - 0x16207c
void mapLOD_START__FP9SPI_STACKi_0x162000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapLOD_START__FP9SPI_STACKi_0x162000");
#endif

    switch (ctx->pc) {
        case 0x16202cu: goto label_16202c;
        case 0x162038u: goto label_162038;
        case 0x162068u: goto label_162068;
        default: break;
    }

    ctx->pc = 0x162000u;

    // 0x162000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x162000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x162004: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x162004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x162008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x162008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16200c: 0x8f828918  lw          $v0, -0x76E8($gp)
    ctx->pc = 0x16200cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936856)));
    // 0x162010: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x162010u;
    {
        const bool branch_taken_0x162010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162010u;
            // 0x162014: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162010) {
            ctx->pc = 0x162020u;
            goto label_162020;
        }
    }
    ctx->pc = 0x162018u;
    // 0x162018: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x162018u;
    {
        const bool branch_taken_0x162018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16201Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162018u;
            // 0x16201c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162018) {
            ctx->pc = 0x162070u;
            goto label_162070;
        }
    }
    ctx->pc = 0x162020u;
label_162020:
    // 0x162020: 0x8f848920  lw          $a0, -0x76E0($gp)
    ctx->pc = 0x162020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
    // 0x162024: 0xc04e748  jal         func_139D20
    ctx->pc = 0x162024u;
    SET_GPR_U32(ctx, 31, 0x16202Cu);
    ctx->pc = 0x162028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162024u;
            // 0x162028: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16202Cu; }
        if (ctx->pc != 0x16202Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16202Cu; }
        if (ctx->pc != 0x16202Cu) { return; }
    }
    ctx->pc = 0x16202Cu;
label_16202c:
    // 0x16202c: 0x8f848918  lw          $a0, -0x76E8($gp)
    ctx->pc = 0x16202cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936856)));
    // 0x162030: 0xc05874c  jal         func_161D30
    ctx->pc = 0x162030u;
    SET_GPR_U32(ctx, 31, 0x162038u);
    ctx->pc = 0x162034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162030u;
            // 0x162034: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161D30u;
    if (runtime->hasFunction(0x161D30u)) {
        auto targetFn = runtime->lookupFunction(0x161D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162038u; }
        if (ctx->pc != 0x162038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pGetData__17CList_9CMapParts_Fv_0x161d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162038u; }
        if (ctx->pc != 0x162038u) { return; }
    }
    ctx->pc = 0x162038u;
label_162038:
    // 0x162038: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x162038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16203c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16203cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162040: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x162040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x162044: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x162044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x162048: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x162048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x16204c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x16204cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x162050: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x162050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x162054: 0x3c0244af  lui         $v0, 0x44AF
    ctx->pc = 0x162054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17583 << 16));
    // 0x162058: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x162058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x16205c: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x16205cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
    // 0x162060: 0xc058820  jal         func_162080
    ctx->pc = 0x162060u;
    SET_GPR_U32(ctx, 31, 0x162068u);
    ctx->pc = 0x162064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162060u;
            // 0x162064: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x162080u;
    if (runtime->hasFunction(0x162080u)) {
        auto targetFn = runtime->lookupFunction(0x162080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162068u; }
        if (ctx->pc != 0x162068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetLODDist__9CMapPartsFPfi_0x162080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162068u; }
        if (ctx->pc != 0x162068u) { return; }
    }
    ctx->pc = 0x162068u;
label_162068:
    // 0x162068: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16206c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16206cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_162070:
    // 0x162070: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x162070u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162074: 0x3e00008  jr          $ra
    ctx->pc = 0x162074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162074u;
            // 0x162078: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16207Cu;
}
