#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CommonClassInit__Fv
// Address: 0x1ce730 - 0x1ce84c
void CommonClassInit__Fv_0x1ce730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CommonClassInit__Fv_0x1ce730");
#endif

    switch (ctx->pc) {
        case 0x1ce740u: goto label_1ce740;
        case 0x1ce7e0u: goto label_1ce7e0;
        case 0x1ce7f8u: goto label_1ce7f8;
        case 0x1ce810u: goto label_1ce810;
        case 0x1ce828u: goto label_1ce828;
        case 0x1ce840u: goto label_1ce840;
        default: break;
    }

    ctx->pc = 0x1ce730u;

    // 0x1ce730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ce730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ce734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ce734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ce738: 0xc0738b8  jal         func_1CE2E0
    ctx->pc = 0x1CE738u;
    SET_GPR_U32(ctx, 31, 0x1CE740u);
    ctx->pc = 0x1CE2E0u;
    if (runtime->hasFunction(0x1CE2E0u)) {
        auto targetFn = runtime->lookupFunction(0x1CE2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE740u; }
        if (ctx->pc != 0x1CE740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CommonStageClassInit__Fv_0x1ce2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE740u; }
        if (ctx->pc != 0x1CE740u) { return; }
    }
    ctx->pc = 0x1CE740u;
label_1ce740:
    // 0x1ce740: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce744: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1ce744u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1ce748: 0xac200320  sw          $zero, 0x320($at)
    ctx->pc = 0x1ce748u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 800), GPR_U32(ctx, 0));
    // 0x1ce74c: 0x24840320  addiu       $a0, $a0, 0x320
    ctx->pc = 0x1ce74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 800));
    // 0x1ce750: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce754: 0x8f868d70  lw          $a2, -0x7290($gp)
    ctx->pc = 0x1ce754u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
    // 0x1ce758: 0xac200324  sw          $zero, 0x324($at)
    ctx->pc = 0x1ce758u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 804), GPR_U32(ctx, 0));
    // 0x1ce75c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ce75cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce760: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce764: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1ce764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ce768: 0xac200328  sw          $zero, 0x328($at)
    ctx->pc = 0x1ce768u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 808), GPR_U32(ctx, 0));
    // 0x1ce76c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce76cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce770: 0xac20032c  sw          $zero, 0x32C($at)
    ctx->pc = 0x1ce770u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 812), GPR_U32(ctx, 0));
    // 0x1ce774: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce778: 0xac200330  sw          $zero, 0x330($at)
    ctx->pc = 0x1ce778u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 816), GPR_U32(ctx, 0));
    // 0x1ce77c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce77cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce780: 0xac200334  sw          $zero, 0x334($at)
    ctx->pc = 0x1ce780u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 820), GPR_U32(ctx, 0));
    // 0x1ce784: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce788: 0xac200338  sw          $zero, 0x338($at)
    ctx->pc = 0x1ce788u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 824), GPR_U32(ctx, 0));
    // 0x1ce78c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce78cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce790: 0xac20033c  sw          $zero, 0x33C($at)
    ctx->pc = 0x1ce790u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 828), GPR_U32(ctx, 0));
    // 0x1ce794: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce798: 0xac200340  sw          $zero, 0x340($at)
    ctx->pc = 0x1ce798u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 832), GPR_U32(ctx, 0));
    // 0x1ce79c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce79cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce7a0: 0xac200344  sw          $zero, 0x344($at)
    ctx->pc = 0x1ce7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 836), GPR_U32(ctx, 0));
    // 0x1ce7a4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce7a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce7a8: 0xac200348  sw          $zero, 0x348($at)
    ctx->pc = 0x1ce7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 840), GPR_U32(ctx, 0));
    // 0x1ce7ac: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce7acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce7b0: 0xac20034c  sw          $zero, 0x34C($at)
    ctx->pc = 0x1ce7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 844), GPR_U32(ctx, 0));
    // 0x1ce7b4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce7b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce7b8: 0xac200350  sw          $zero, 0x350($at)
    ctx->pc = 0x1ce7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 848), GPR_U32(ctx, 0));
    // 0x1ce7bc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce7bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce7c0: 0xac200354  sw          $zero, 0x354($at)
    ctx->pc = 0x1ce7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 852), GPR_U32(ctx, 0));
    // 0x1ce7c4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce7c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce7c8: 0xac200358  sw          $zero, 0x358($at)
    ctx->pc = 0x1ce7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 856), GPR_U32(ctx, 0));
    // 0x1ce7cc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce7ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce7d0: 0xac200360  sw          $zero, 0x360($at)
    ctx->pc = 0x1ce7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 864), GPR_U32(ctx, 0));
    // 0x1ce7d4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce7d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce7d8: 0xc07137c  jal         func_1C4DF0
    ctx->pc = 0x1CE7D8u;
    SET_GPR_U32(ctx, 31, 0x1CE7E0u);
    ctx->pc = 0x1CE7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE7D8u;
            // 0x1ce7dc: 0xac200364  sw          $zero, 0x364($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 868), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4DF0u;
    if (runtime->hasFunction(0x1C4DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1C4DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE7E0u; }
        if (ctx->pc != 0x1CE7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AllocEffect__15BattleEffectManFiP9mgCMemoryi_0x1c4df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE7E0u; }
        if (ctx->pc != 0x1CE7E0u) { return; }
    }
    ctx->pc = 0x1CE7E0u;
label_1ce7e0:
    // 0x1ce7e0: 0x8f868d70  lw          $a2, -0x7290($gp)
    ctx->pc = 0x1ce7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
    // 0x1ce7e4: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1ce7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1ce7e8: 0x24840320  addiu       $a0, $a0, 0x320
    ctx->pc = 0x1ce7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 800));
    // 0x1ce7ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ce7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce7f0: 0xc07137c  jal         func_1C4DF0
    ctx->pc = 0x1CE7F0u;
    SET_GPR_U32(ctx, 31, 0x1CE7F8u);
    ctx->pc = 0x1CE7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE7F0u;
            // 0x1ce7f4: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4DF0u;
    if (runtime->hasFunction(0x1C4DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1C4DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE7F8u; }
        if (ctx->pc != 0x1CE7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AllocEffect__15BattleEffectManFiP9mgCMemoryi_0x1c4df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE7F8u; }
        if (ctx->pc != 0x1CE7F8u) { return; }
    }
    ctx->pc = 0x1CE7F8u;
label_1ce7f8:
    // 0x1ce7f8: 0x8f868d70  lw          $a2, -0x7290($gp)
    ctx->pc = 0x1ce7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
    // 0x1ce7fc: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1ce7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1ce800: 0x24840320  addiu       $a0, $a0, 0x320
    ctx->pc = 0x1ce800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 800));
    // 0x1ce804: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ce804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ce808: 0xc07137c  jal         func_1C4DF0
    ctx->pc = 0x1CE808u;
    SET_GPR_U32(ctx, 31, 0x1CE810u);
    ctx->pc = 0x1CE80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE808u;
            // 0x1ce80c: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4DF0u;
    if (runtime->hasFunction(0x1C4DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1C4DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE810u; }
        if (ctx->pc != 0x1CE810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AllocEffect__15BattleEffectManFiP9mgCMemoryi_0x1c4df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE810u; }
        if (ctx->pc != 0x1CE810u) { return; }
    }
    ctx->pc = 0x1CE810u;
label_1ce810:
    // 0x1ce810: 0x8f868d70  lw          $a2, -0x7290($gp)
    ctx->pc = 0x1ce810u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
    // 0x1ce814: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1ce814u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1ce818: 0x24840320  addiu       $a0, $a0, 0x320
    ctx->pc = 0x1ce818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 800));
    // 0x1ce81c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ce81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ce820: 0xc07137c  jal         func_1C4DF0
    ctx->pc = 0x1CE820u;
    SET_GPR_U32(ctx, 31, 0x1CE828u);
    ctx->pc = 0x1CE824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE820u;
            // 0x1ce824: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4DF0u;
    if (runtime->hasFunction(0x1C4DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1C4DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE828u; }
        if (ctx->pc != 0x1CE828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AllocEffect__15BattleEffectManFiP9mgCMemoryi_0x1c4df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE828u; }
        if (ctx->pc != 0x1CE828u) { return; }
    }
    ctx->pc = 0x1CE828u;
label_1ce828:
    // 0x1ce828: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1ce828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
    // 0x1ce82c: 0x3c0301ea  lui         $v1, 0x1EA
    ctx->pc = 0x1ce82cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)490 << 16));
    // 0x1ce830: 0x24630320  addiu       $v1, $v1, 0x320
    ctx->pc = 0x1ce830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 800));
    // 0x1ce834: 0x24040069  addiu       $a0, $zero, 0x69
    ctx->pc = 0x1ce834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x1ce838: 0xc0c26f4  jal         func_309BD0
    ctx->pc = 0x1CE838u;
    SET_GPR_U32(ctx, 31, 0x1CE840u);
    ctx->pc = 0x1CE83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE838u;
            // 0x1ce83c: 0xac430080  sw          $v1, 0x80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x309BD0u;
    if (runtime->hasFunction(0x309BD0u)) {
        auto targetFn = runtime->lookupFunction(0x309BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE840u; }
        if (ctx->pc != 0x1CE840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitPause__Fi_0x309bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE840u; }
        if (ctx->pc != 0x1CE840u) { return; }
    }
    ctx->pc = 0x1CE840u;
label_1ce840:
    // 0x1ce840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce844: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE844u;
            // 0x1ce848: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CE84Cu;
}
