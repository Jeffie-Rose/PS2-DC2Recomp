#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapLOD_BLEND__FP9SPI_STACKi
// Address: 0x162090 - 0x1620e8
void mapLOD_BLEND__FP9SPI_STACKi_0x162090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapLOD_BLEND__FP9SPI_STACKi_0x162090");
#endif

    switch (ctx->pc) {
        case 0x1620bcu: goto label_1620bc;
        case 0x1620c8u: goto label_1620c8;
        case 0x1620d4u: goto label_1620d4;
        default: break;
    }

    ctx->pc = 0x162090u;

    // 0x162090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x162090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x162094: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x162094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x162098: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x162098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16209c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16209cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1620a0: 0x8f848918  lw          $a0, -0x76E8($gp)
    ctx->pc = 0x1620a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936856)));
    // 0x1620a4: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1620A4u;
    {
        const bool branch_taken_0x1620a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1620A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1620A4u;
            // 0x1620a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1620a4) {
            ctx->pc = 0x1620B4u;
            goto label_1620b4;
        }
    }
    ctx->pc = 0x1620ACu;
    // 0x1620ac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1620ACu;
    {
        const bool branch_taken_0x1620ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1620B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1620ACu;
            // 0x1620b0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1620ac) {
            ctx->pc = 0x1620DCu;
            goto label_1620dc;
        }
    }
    ctx->pc = 0x1620B4u;
label_1620b4:
    // 0x1620b4: 0xc05874c  jal         func_161D30
    ctx->pc = 0x1620B4u;
    SET_GPR_U32(ctx, 31, 0x1620BCu);
    ctx->pc = 0x161D30u;
    if (runtime->hasFunction(0x161D30u)) {
        auto targetFn = runtime->lookupFunction(0x161D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1620BCu; }
        if (ctx->pc != 0x1620BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pGetData__17CList_9CMapParts_Fv_0x161d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1620BCu; }
        if (ctx->pc != 0x1620BCu) { return; }
    }
    ctx->pc = 0x1620BCu;
label_1620bc:
    // 0x1620bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1620bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1620c0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1620C0u;
    SET_GPR_U32(ctx, 31, 0x1620C8u);
    ctx->pc = 0x1620C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1620C0u;
            // 0x1620c4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1620C8u; }
        if (ctx->pc != 0x1620C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1620C8u; }
        if (ctx->pc != 0x1620C8u) { return; }
    }
    ctx->pc = 0x1620C8u;
label_1620c8:
    // 0x1620c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1620c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1620cc: 0xc05883c  jal         func_1620F0
    ctx->pc = 0x1620CCu;
    SET_GPR_U32(ctx, 31, 0x1620D4u);
    ctx->pc = 0x1620D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1620CCu;
            // 0x1620d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1620F0u;
    if (runtime->hasFunction(0x1620F0u)) {
        auto targetFn = runtime->lookupFunction(0x1620F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1620D4u; }
        if (ctx->pc != 0x1620D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetLODBlend__9CMapPartsFi_0x1620f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1620D4u; }
        if (ctx->pc != 0x1620D4u) { return; }
    }
    ctx->pc = 0x1620D4u;
label_1620d4:
    // 0x1620d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1620d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1620d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1620d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1620dc:
    // 0x1620dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1620dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1620e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1620E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1620E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1620E0u;
            // 0x1620e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1620E8u;
}
