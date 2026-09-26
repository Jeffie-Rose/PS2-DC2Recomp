#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EatMessage__8CAquaMesFiP9CAquaFish
// Address: 0x2116f0 - 0x211788
void EatMessage__8CAquaMesFiP9CAquaFish_0x2116f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EatMessage__8CAquaMesFiP9CAquaFish_0x2116f0");
#endif

    switch (ctx->pc) {
        case 0x21171cu: goto label_21171c;
        case 0x211738u: goto label_211738;
        case 0x211750u: goto label_211750;
        case 0x211764u: goto label_211764;
        case 0x211770u: goto label_211770;
        default: break;
    }

    ctx->pc = 0x2116f0u;

    // 0x2116f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2116f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2116f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2116f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2116f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2116f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2116fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2116fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x211700: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x211700u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211704: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x211704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x211708: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x211708u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21170c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21170cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211710: 0x8cc40938  lw          $a0, 0x938($a2)
    ctx->pc = 0x211710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2360)));
    // 0x211714: 0xc065dc0  jal         func_197700
    ctx->pc = 0x211714u;
    SET_GPR_U32(ctx, 31, 0x21171Cu);
    ctx->pc = 0x211718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211714u;
            // 0x211718: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197700u;
    if (runtime->hasFunction(0x197700u)) {
        auto targetFn = runtime->lookupFunction(0x197700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21171Cu; }
        if (ctx->pc != 0x21171Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetName__13CGameDataUsedFi_0x197700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21171Cu; }
        if (ctx->pc != 0x21171Cu) { return; }
    }
    ctx->pc = 0x21171Cu;
label_21171c:
    // 0x21171c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21171Cu;
    {
        const bool branch_taken_0x21171c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21171c) {
            ctx->pc = 0x211738u;
            goto label_211738;
        }
    }
    ctx->pc = 0x211724u;
    // 0x211724: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x211724u;
    {
        const bool branch_taken_0x211724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211724u;
            // 0x211728: 0x8e030054  lw          $v1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211724) {
            ctx->pc = 0x211738u;
            goto label_211738;
        }
    }
    ctx->pc = 0x21172Cu;
    // 0x21172c: 0x24641801  addiu       $a0, $v1, 0x1801
    ctx->pc = 0x21172cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6145));
    // 0x211730: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x211730u;
    SET_GPR_U32(ctx, 31, 0x211738u);
    ctx->pc = 0x211734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211730u;
            // 0x211734: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211738u; }
        if (ctx->pc != 0x211738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211738u; }
        if (ctx->pc != 0x211738u) { return; }
    }
    ctx->pc = 0x211738u;
label_211738:
    // 0x211738: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x211738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x21173c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x21173cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x211740: 0xac4317e4  sw          $v1, 0x17E4($v0)
    ctx->pc = 0x211740u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6116), GPR_U32(ctx, 3));
    // 0x211744: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x211744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x211748: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x211748u;
    SET_GPR_U32(ctx, 31, 0x211750u);
    ctx->pc = 0x21174Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211748u;
            // 0x21174c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211750u; }
        if (ctx->pc != 0x211750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211750u; }
        if (ctx->pc != 0x211750u) { return; }
    }
    ctx->pc = 0x211750u;
label_211750:
    // 0x211750: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x211750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x211754: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x211754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211758: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x211758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x21175c: 0xc083594  jal         func_20D650
    ctx->pc = 0x21175Cu;
    SET_GPR_U32(ctx, 31, 0x211764u);
    ctx->pc = 0x211760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21175Cu;
            // 0x211760: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D650u;
    if (runtime->hasFunction(0x20D650u)) {
        auto targetFn = runtime->lookupFunction(0x20D650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211764u; }
        if (ctx->pc != 0x211764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPosition2D__9CAquaFishFPi_0x20d650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211764u; }
        if (ctx->pc != 0x211764u) { return; }
    }
    ctx->pc = 0x211764u;
label_211764:
    // 0x211764: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x211764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x211768: 0xc083e8c  jal         func_20FA30
    ctx->pc = 0x211768u;
    SET_GPR_U32(ctx, 31, 0x211770u);
    ctx->pc = 0x21176Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211768u;
            // 0x21176c: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FA30u;
    if (runtime->hasFunction(0x20FA30u)) {
        auto targetFn = runtime->lookupFunction(0x20FA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211770u; }
        if (ctx->pc != 0x211770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AquaMesDispAdjustPos__FP6ClsMesPi_0x20fa30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211770u; }
        if (ctx->pc != 0x211770u) { return; }
    }
    ctx->pc = 0x211770u;
label_211770:
    // 0x211770: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x211770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211774: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x211774u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211778: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x211778u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21177c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21177cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211780: 0x3e00008  jr          $ra
    ctx->pc = 0x211780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211780u;
            // 0x211784: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x211788u;
}
