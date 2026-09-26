#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawMiniMapSymbol__19CTreasureBoxManagerFP14CMiniMapSymbol
// Address: 0x28c720 - 0x28c7ac
void DrawMiniMapSymbol__19CTreasureBoxManagerFP14CMiniMapSymbol_0x28c720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawMiniMapSymbol__19CTreasureBoxManagerFP14CMiniMapSymbol_0x28c720");
#endif

    switch (ctx->pc) {
        case 0x28c720u: goto label_28c720;
        case 0x28c724u: goto label_28c724;
        case 0x28c728u: goto label_28c728;
        case 0x28c72cu: goto label_28c72c;
        case 0x28c730u: goto label_28c730;
        case 0x28c734u: goto label_28c734;
        case 0x28c738u: goto label_28c738;
        case 0x28c73cu: goto label_28c73c;
        case 0x28c740u: goto label_28c740;
        case 0x28c744u: goto label_28c744;
        case 0x28c748u: goto label_28c748;
        case 0x28c74cu: goto label_28c74c;
        case 0x28c750u: goto label_28c750;
        case 0x28c754u: goto label_28c754;
        case 0x28c758u: goto label_28c758;
        case 0x28c75cu: goto label_28c75c;
        case 0x28c760u: goto label_28c760;
        case 0x28c764u: goto label_28c764;
        case 0x28c768u: goto label_28c768;
        case 0x28c76cu: goto label_28c76c;
        case 0x28c770u: goto label_28c770;
        case 0x28c774u: goto label_28c774;
        case 0x28c778u: goto label_28c778;
        case 0x28c77cu: goto label_28c77c;
        case 0x28c780u: goto label_28c780;
        case 0x28c784u: goto label_28c784;
        case 0x28c788u: goto label_28c788;
        case 0x28c78cu: goto label_28c78c;
        case 0x28c790u: goto label_28c790;
        case 0x28c794u: goto label_28c794;
        case 0x28c798u: goto label_28c798;
        case 0x28c79cu: goto label_28c79c;
        case 0x28c7a0u: goto label_28c7a0;
        case 0x28c7a4u: goto label_28c7a4;
        case 0x28c7a8u: goto label_28c7a8;
        default: break;
    }

    ctx->pc = 0x28c720u;

label_28c720:
    // 0x28c720: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28c720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_28c724:
    // 0x28c724: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x28c724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_28c728:
    // 0x28c728: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28c728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_28c72c:
    // 0x28c72c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28c72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_28c730:
    // 0x28c730: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28c730u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28c734:
    // 0x28c734: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28c734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_28c738:
    // 0x28c738: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x28c738u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28c73c:
    // 0x28c73c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28c73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_28c740:
    // 0x28c740: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28c740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c744:
    // 0x28c744: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28c744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c748:
    // 0x28c748: 0x2712821  addu        $a1, $s3, $s1
    ctx->pc = 0x28c748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_28c74c:
    // 0x28c74c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28c74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28c750:
    // 0x28c750: 0x24a40010  addiu       $a0, $a1, 0x10
    ctx->pc = 0x28c750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_28c754:
    // 0x28c754: 0x80a50064  lb          $a1, 0x64($a1)
    ctx->pc = 0x28c754u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 100)));
label_28c758:
    // 0x28c758: 0x14a30009  bne         $a1, $v1, . + 4 + (0x9 << 2)
label_28c75c:
    if (ctx->pc == 0x28C75Cu) {
        ctx->pc = 0x28C760u;
        goto label_28c760;
    }
    ctx->pc = 0x28C758u;
    {
        const bool branch_taken_0x28c758 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x28c758) {
            ctx->pc = 0x28C780u;
            goto label_28c780;
        }
    }
    ctx->pc = 0x28C760u;
label_28c760:
    // 0x28c760: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x28c760u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28c764:
    // 0x28c764: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x28c764u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_28c768:
    // 0x28c768: 0x320f809  jalr        $t9
label_28c76c:
    if (ctx->pc == 0x28C76Cu) {
        ctx->pc = 0x28C76Cu;
            // 0x28c76c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x28C770u;
        goto label_28c770;
    }
    ctx->pc = 0x28C768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28C770u);
        ctx->pc = 0x28C76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C768u;
            // 0x28c76c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28C770u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28C770u; }
            if (ctx->pc != 0x28C770u) { return; }
        }
        }
    }
    ctx->pc = 0x28C770u;
label_28c770:
    // 0x28c770: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28c770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28c774:
    // 0x28c774: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x28c774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_28c778:
    // 0x28c778: 0xc075310  jal         func_1D4C40
label_28c77c:
    if (ctx->pc == 0x28C77Cu) {
        ctx->pc = 0x28C77Cu;
            // 0x28c77c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x28C780u;
        goto label_28c780;
    }
    ctx->pc = 0x28C778u;
    SET_GPR_U32(ctx, 31, 0x28C780u);
    ctx->pc = 0x28C77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C778u;
            // 0x28c77c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C40u;
    if (runtime->hasFunction(0x1D4C40u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C780u; }
        if (ctx->pc != 0x28C780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSymbol__14CMiniMapSymbolFPfi_0x1d4c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C780u; }
        if (ctx->pc != 0x28C780u) { return; }
    }
    ctx->pc = 0x28C780u;
label_28c780:
    // 0x28c780: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28c780u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28c784:
    // 0x28c784: 0x2a030018  slti        $v1, $s0, 0x18
    ctx->pc = 0x28c784u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
label_28c788:
    // 0x28c788: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_28c78c:
    if (ctx->pc == 0x28C78Cu) {
        ctx->pc = 0x28C78Cu;
            // 0x28c78c: 0x26310070  addiu       $s1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->pc = 0x28C790u;
        goto label_28c790;
    }
    ctx->pc = 0x28C788u;
    {
        const bool branch_taken_0x28c788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C788u;
            // 0x28c78c: 0x26310070  addiu       $s1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c788) {
            ctx->pc = 0x28C748u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28c748;
        }
    }
    ctx->pc = 0x28C790u;
label_28c790:
    // 0x28c790: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x28c790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_28c794:
    // 0x28c794: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28c794u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28c798:
    // 0x28c798: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28c798u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28c79c:
    // 0x28c79c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28c79cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28c7a0:
    // 0x28c7a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28c7a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_28c7a4:
    // 0x28c7a4: 0x3e00008  jr          $ra
label_28c7a8:
    if (ctx->pc == 0x28C7A8u) {
        ctx->pc = 0x28C7A8u;
            // 0x28c7a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x28C7ACu;
        goto label_fallthrough_0x28c7a4;
    }
    ctx->pc = 0x28C7A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C7A4u;
            // 0x28c7a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28c7a4:
    ctx->pc = 0x28C7ACu;
}
