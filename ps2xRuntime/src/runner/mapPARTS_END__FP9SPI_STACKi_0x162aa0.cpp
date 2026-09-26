#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapPARTS_END__FP9SPI_STACKi
// Address: 0x162aa0 - 0x162ae8
void mapPARTS_END__FP9SPI_STACKi_0x162aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapPARTS_END__FP9SPI_STACKi_0x162aa0");
#endif

    switch (ctx->pc) {
        case 0x162ac4u: goto label_162ac4;
        case 0x162ad0u: goto label_162ad0;
        case 0x162ad8u: goto label_162ad8;
        default: break;
    }

    ctx->pc = 0x162aa0u;

    // 0x162aa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x162aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x162aa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x162aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162aa8: 0x8f858918  lw          $a1, -0x76E8($gp)
    ctx->pc = 0x162aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936856)));
    // 0x162aac: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x162AACu;
    {
        const bool branch_taken_0x162aac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x162AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162AACu;
            // 0x162ab0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162aac) {
            ctx->pc = 0x162ABCu;
            goto label_162abc;
        }
    }
    ctx->pc = 0x162AB4u;
    // 0x162ab4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x162AB4u;
    {
        const bool branch_taken_0x162ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162AB4u;
            // 0x162ab8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162ab4) {
            ctx->pc = 0x162AE0u;
            goto label_162ae0;
        }
    }
    ctx->pc = 0x162ABCu;
label_162abc:
    // 0x162abc: 0xc057344  jal         func_15CD10
    ctx->pc = 0x162ABCu;
    SET_GPR_U32(ctx, 31, 0x162AC4u);
    ctx->pc = 0x162AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162ABCu;
            // 0x162ac0: 0x8f848914  lw          $a0, -0x76EC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CD10u;
    if (runtime->hasFunction(0x15CD10u)) {
        auto targetFn = runtime->lookupFunction(0x15CD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162AC4u; }
        if (ctx->pc != 0x162AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddParts__4CMapFP17CList_9CMapParts__0x15cd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162AC4u; }
        if (ctx->pc != 0x162AC4u) { return; }
    }
    ctx->pc = 0x162AC4u;
label_162ac4:
    // 0x162ac4: 0x8f848918  lw          $a0, -0x76E8($gp)
    ctx->pc = 0x162ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936856)));
    // 0x162ac8: 0xc05874c  jal         func_161D30
    ctx->pc = 0x162AC8u;
    SET_GPR_U32(ctx, 31, 0x162AD0u);
    ctx->pc = 0x162ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162AC8u;
            // 0x162acc: 0xaf808948  sw          $zero, -0x76B8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936904), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161D30u;
    if (runtime->hasFunction(0x161D30u)) {
        auto targetFn = runtime->lookupFunction(0x161D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162AD0u; }
        if (ctx->pc != 0x162AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pGetData__17CList_9CMapParts_Fv_0x161d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162AD0u; }
        if (ctx->pc != 0x162AD0u) { return; }
    }
    ctx->pc = 0x162AD0u;
label_162ad0:
    // 0x162ad0: 0xc059bb4  jal         func_166ED0
    ctx->pc = 0x162AD0u;
    SET_GPR_U32(ctx, 31, 0x162AD8u);
    ctx->pc = 0x162AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162AD0u;
            // 0x162ad4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166ED0u;
    if (runtime->hasFunction(0x166ED0u)) {
        auto targetFn = runtime->lookupFunction(0x166ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162AD8u; }
        if (ctx->pc != 0x162AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateBoundBox__9CMapPartsFv_0x166ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162AD8u; }
        if (ctx->pc != 0x162AD8u) { return; }
    }
    ctx->pc = 0x162AD8u;
label_162ad8:
    // 0x162ad8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162adc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_162ae0:
    // 0x162ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x162AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162AE0u;
            // 0x162ae4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162AE8u;
}
