#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CommonStageClassInit__Fv
// Address: 0x1ce2e0 - 0x1ce728
void CommonStageClassInit__Fv_0x1ce2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CommonStageClassInit__Fv_0x1ce2e0");
#endif

    switch (ctx->pc) {
        case 0x1ce2fcu: goto label_1ce2fc;
        case 0x1ce308u: goto label_1ce308;
        case 0x1ce318u: goto label_1ce318;
        case 0x1ce5f8u: goto label_1ce5f8;
        case 0x1ce608u: goto label_1ce608;
        case 0x1ce644u: goto label_1ce644;
        case 0x1ce68cu: goto label_1ce68c;
        case 0x1ce6f0u: goto label_1ce6f0;
        case 0x1ce700u: goto label_1ce700;
        default: break;
    }

    ctx->pc = 0x1ce2e0u;

    // 0x1ce2e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ce2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ce2e4: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1ce2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1ce2e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ce2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ce2ec: 0x24845c10  addiu       $a0, $a0, 0x5C10
    ctx->pc = 0x1ce2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23568));
    // 0x1ce2f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ce2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ce2f4: 0xc070650  jal         func_1C1940
    ctx->pc = 0x1CE2F4u;
    SET_GPR_U32(ctx, 31, 0x1CE2FCu);
    ctx->pc = 0x1CE2F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE2F4u;
            // 0x1ce2f8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1940u;
    if (runtime->hasFunction(0x1C1940u)) {
        auto targetFn = runtime->lookupFunction(0x1C1940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE2FCu; }
        if (ctx->pc != 0x1CE2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__17CHealingEffectManFv_0x1c1940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE2FCu; }
        if (ctx->pc != 0x1CE2FCu) { return; }
    }
    ctx->pc = 0x1CE2FCu;
label_1ce2fc:
    // 0x1ce2fc: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1ce2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1ce300: 0xc070470  jal         func_1C11C0
    ctx->pc = 0x1CE300u;
    SET_GPR_U32(ctx, 31, 0x1CE308u);
    ctx->pc = 0x1CE304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE300u;
            // 0x1ce304: 0x24845f40  addiu       $a0, $a0, 0x5F40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C11C0u;
    if (runtime->hasFunction(0x1C11C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C11C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE308u; }
        if (ctx->pc != 0x1CE308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__15CMiniEffPrimManFv_0x1c11c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE308u; }
        if (ctx->pc != 0x1CE308u) { return; }
    }
    ctx->pc = 0x1CE308u;
label_1ce308:
    // 0x1ce308: 0x8f858dac  lw          $a1, -0x7254($gp)
    ctx->pc = 0x1ce308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x1ce30c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1ce30cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1ce310: 0xc06ea70  jal         func_1BA9C0
    ctx->pc = 0x1CE310u;
    SET_GPR_U32(ctx, 31, 0x1CE318u);
    ctx->pc = 0x1CE314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE310u;
            // 0x1ce314: 0x24840710  addiu       $a0, $a0, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA9C0u;
    if (runtime->hasFunction(0x1BA9C0u)) {
        auto targetFn = runtime->lookupFunction(0x1BA9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE318u; }
        if (ctx->pc != 0x1CE318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CColPrimManFP6CScene_0x1ba9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE318u; }
        if (ctx->pc != 0x1CE318u) { return; }
    }
    ctx->pc = 0x1CE318u;
label_1ce318:
    // 0x1ce318: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce31c: 0x8f858db0  lw          $a1, -0x7250($gp)
    ctx->pc = 0x1ce31cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
    // 0x1ce320: 0xac200394  sw          $zero, 0x394($at)
    ctx->pc = 0x1ce320u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 916), GPR_U32(ctx, 0));
    // 0x1ce324: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1ce324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ce328: 0x3c0101eb  lui         $at, 0x1EB
    ctx->pc = 0x1ce328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)491 << 16));
    // 0x1ce32c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1ce32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ce330: 0xac207968  sw          $zero, 0x7968($at)
    ctx->pc = 0x1ce330u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31080), GPR_U32(ctx, 0));
    // 0x1ce334: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x1ce334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1ce338: 0x3c0101eb  lui         $at, 0x1EB
    ctx->pc = 0x1ce338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)491 << 16));
    // 0x1ce33c: 0x240200ca  addiu       $v0, $zero, 0xCA
    ctx->pc = 0x1ce33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    // 0x1ce340: 0xac207964  sw          $zero, 0x7964($at)
    ctx->pc = 0x1ce340u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31076), GPR_U32(ctx, 0));
    // 0x1ce344: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ce344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce348: 0x3c0101eb  lui         $at, 0x1EB
    ctx->pc = 0x1ce348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)491 << 16));
    // 0x1ce34c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ce34cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce350: 0xa0207960  sb          $zero, 0x7960($at)
    ctx->pc = 0x1ce350u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 31072), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce354: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce358: 0xac20f700  sw          $zero, -0x900($at)
    ctx->pc = 0x1ce358u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964992), GPR_U32(ctx, 0));
    // 0x1ce35c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce35cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce360: 0xac20f704  sw          $zero, -0x8FC($at)
    ctx->pc = 0x1ce360u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964996), GPR_U32(ctx, 0));
    // 0x1ce364: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce368: 0xac20f708  sw          $zero, -0x8F8($at)
    ctx->pc = 0x1ce368u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965000), GPR_U32(ctx, 0));
    // 0x1ce36c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce36cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce370: 0xac20f70c  sw          $zero, -0x8F4($at)
    ctx->pc = 0x1ce370u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965004), GPR_U32(ctx, 0));
    // 0x1ce374: 0xa0a6009c  sb          $a2, 0x9C($a1)
    ctx->pc = 0x1ce374u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 156), (uint8_t)GPR_U32(ctx, 6));
    // 0x1ce378: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce37c: 0xac20fad8  sw          $zero, -0x528($at)
    ctx->pc = 0x1ce37cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965976), GPR_U32(ctx, 0));
    // 0x1ce380: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce384: 0xac20fa50  sw          $zero, -0x5B0($at)
    ctx->pc = 0x1ce384u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965840), GPR_U32(ctx, 0));
    // 0x1ce388: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce38c: 0xac20faa4  sw          $zero, -0x55C($at)
    ctx->pc = 0x1ce38cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965924), GPR_U32(ctx, 0));
    // 0x1ce390: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce394: 0xac20faa8  sw          $zero, -0x558($at)
    ctx->pc = 0x1ce394u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965928), GPR_U32(ctx, 0));
    // 0x1ce398: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce39c: 0xac24faac  sw          $a0, -0x554($at)
    ctx->pc = 0x1ce39cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965932), GPR_U32(ctx, 4));
    // 0x1ce3a0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce3a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce3a4: 0xac23fab0  sw          $v1, -0x550($at)
    ctx->pc = 0x1ce3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965936), GPR_U32(ctx, 3));
    // 0x1ce3a8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce3a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce3ac: 0xac20fab4  sw          $zero, -0x54C($at)
    ctx->pc = 0x1ce3acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965940), GPR_U32(ctx, 0));
    // 0x1ce3b0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce3b4: 0xac22fab8  sw          $v0, -0x548($at)
    ctx->pc = 0x1ce3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965944), GPR_U32(ctx, 2));
    // 0x1ce3b8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce3bc: 0xac20ff7c  sw          $zero, -0x84($at)
    ctx->pc = 0x1ce3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294967164), GPR_U32(ctx, 0));
    // 0x1ce3c0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce3c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce3c4: 0xac20fb68  sw          $zero, -0x498($at)
    ctx->pc = 0x1ce3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966120), GPR_U32(ctx, 0));
    // 0x1ce3c8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce3c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce3cc: 0xac20fae0  sw          $zero, -0x520($at)
    ctx->pc = 0x1ce3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965984), GPR_U32(ctx, 0));
    // 0x1ce3d0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce3d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce3d4: 0xac20fb34  sw          $zero, -0x4CC($at)
    ctx->pc = 0x1ce3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966068), GPR_U32(ctx, 0));
    // 0x1ce3d8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce3d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce3dc: 0xac20fb38  sw          $zero, -0x4C8($at)
    ctx->pc = 0x1ce3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966072), GPR_U32(ctx, 0));
    // 0x1ce3e0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce3e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce3e4: 0xac24fb3c  sw          $a0, -0x4C4($at)
    ctx->pc = 0x1ce3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966076), GPR_U32(ctx, 4));
    // 0x1ce3e8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce3ec: 0xac23fb40  sw          $v1, -0x4C0($at)
    ctx->pc = 0x1ce3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966080), GPR_U32(ctx, 3));
    // 0x1ce3f0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce3f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce3f4: 0xac20fb44  sw          $zero, -0x4BC($at)
    ctx->pc = 0x1ce3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966084), GPR_U32(ctx, 0));
    // 0x1ce3f8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce3fc: 0xac22fb48  sw          $v0, -0x4B8($at)
    ctx->pc = 0x1ce3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966088), GPR_U32(ctx, 2));
    // 0x1ce400: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce404: 0xac20fbf8  sw          $zero, -0x408($at)
    ctx->pc = 0x1ce404u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966264), GPR_U32(ctx, 0));
    // 0x1ce408: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce40c: 0xac20fb70  sw          $zero, -0x490($at)
    ctx->pc = 0x1ce40cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966128), GPR_U32(ctx, 0));
    // 0x1ce410: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce414: 0xac20fbc4  sw          $zero, -0x43C($at)
    ctx->pc = 0x1ce414u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966212), GPR_U32(ctx, 0));
    // 0x1ce418: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce41c: 0xac20fbc8  sw          $zero, -0x438($at)
    ctx->pc = 0x1ce41cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966216), GPR_U32(ctx, 0));
    // 0x1ce420: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce424: 0xac24fbcc  sw          $a0, -0x434($at)
    ctx->pc = 0x1ce424u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966220), GPR_U32(ctx, 4));
    // 0x1ce428: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce42c: 0xac23fbd0  sw          $v1, -0x430($at)
    ctx->pc = 0x1ce42cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966224), GPR_U32(ctx, 3));
    // 0x1ce430: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce434: 0xac20fbd4  sw          $zero, -0x42C($at)
    ctx->pc = 0x1ce434u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966228), GPR_U32(ctx, 0));
    // 0x1ce438: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce43c: 0xac22fbd8  sw          $v0, -0x428($at)
    ctx->pc = 0x1ce43cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966232), GPR_U32(ctx, 2));
    // 0x1ce440: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce444: 0xac20fc88  sw          $zero, -0x378($at)
    ctx->pc = 0x1ce444u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966408), GPR_U32(ctx, 0));
    // 0x1ce448: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce44c: 0xac20fc00  sw          $zero, -0x400($at)
    ctx->pc = 0x1ce44cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966272), GPR_U32(ctx, 0));
    // 0x1ce450: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce454: 0xac20fc54  sw          $zero, -0x3AC($at)
    ctx->pc = 0x1ce454u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966356), GPR_U32(ctx, 0));
    // 0x1ce458: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce45c: 0xac20fc58  sw          $zero, -0x3A8($at)
    ctx->pc = 0x1ce45cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966360), GPR_U32(ctx, 0));
    // 0x1ce460: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce464: 0xac24fc5c  sw          $a0, -0x3A4($at)
    ctx->pc = 0x1ce464u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966364), GPR_U32(ctx, 4));
    // 0x1ce468: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce46c: 0xac23fc60  sw          $v1, -0x3A0($at)
    ctx->pc = 0x1ce46cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966368), GPR_U32(ctx, 3));
    // 0x1ce470: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce474: 0xac20fc64  sw          $zero, -0x39C($at)
    ctx->pc = 0x1ce474u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966372), GPR_U32(ctx, 0));
    // 0x1ce478: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce47c: 0xac22fc68  sw          $v0, -0x398($at)
    ctx->pc = 0x1ce47cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966376), GPR_U32(ctx, 2));
    // 0x1ce480: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce484: 0xac20fd18  sw          $zero, -0x2E8($at)
    ctx->pc = 0x1ce484u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966552), GPR_U32(ctx, 0));
    // 0x1ce488: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce48c: 0xac20fc90  sw          $zero, -0x370($at)
    ctx->pc = 0x1ce48cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 0));
    // 0x1ce490: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce494: 0xac20fce4  sw          $zero, -0x31C($at)
    ctx->pc = 0x1ce494u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966500), GPR_U32(ctx, 0));
    // 0x1ce498: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce49c: 0xac20fce8  sw          $zero, -0x318($at)
    ctx->pc = 0x1ce49cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966504), GPR_U32(ctx, 0));
    // 0x1ce4a0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce4a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce4a4: 0xac24fcec  sw          $a0, -0x314($at)
    ctx->pc = 0x1ce4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966508), GPR_U32(ctx, 4));
    // 0x1ce4a8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce4ac: 0xac23fcf0  sw          $v1, -0x310($at)
    ctx->pc = 0x1ce4acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966512), GPR_U32(ctx, 3));
    // 0x1ce4b0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce4b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce4b4: 0xac20fcf4  sw          $zero, -0x30C($at)
    ctx->pc = 0x1ce4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966516), GPR_U32(ctx, 0));
    // 0x1ce4b8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce4b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce4bc: 0xac22fcf8  sw          $v0, -0x308($at)
    ctx->pc = 0x1ce4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966520), GPR_U32(ctx, 2));
    // 0x1ce4c0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce4c4: 0xac20fda8  sw          $zero, -0x258($at)
    ctx->pc = 0x1ce4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966696), GPR_U32(ctx, 0));
    // 0x1ce4c8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce4cc: 0xac20fd20  sw          $zero, -0x2E0($at)
    ctx->pc = 0x1ce4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966560), GPR_U32(ctx, 0));
    // 0x1ce4d0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce4d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce4d4: 0xac20fd74  sw          $zero, -0x28C($at)
    ctx->pc = 0x1ce4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966644), GPR_U32(ctx, 0));
    // 0x1ce4d8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce4d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce4dc: 0xac20fd78  sw          $zero, -0x288($at)
    ctx->pc = 0x1ce4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966648), GPR_U32(ctx, 0));
    // 0x1ce4e0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce4e4: 0xac24fd7c  sw          $a0, -0x284($at)
    ctx->pc = 0x1ce4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966652), GPR_U32(ctx, 4));
    // 0x1ce4e8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce4e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce4ec: 0xac23fd80  sw          $v1, -0x280($at)
    ctx->pc = 0x1ce4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966656), GPR_U32(ctx, 3));
    // 0x1ce4f0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce4f4: 0xac20fd84  sw          $zero, -0x27C($at)
    ctx->pc = 0x1ce4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966660), GPR_U32(ctx, 0));
    // 0x1ce4f8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce4fc: 0xac22fd88  sw          $v0, -0x278($at)
    ctx->pc = 0x1ce4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966664), GPR_U32(ctx, 2));
    // 0x1ce500: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce504: 0xac20fe38  sw          $zero, -0x1C8($at)
    ctx->pc = 0x1ce504u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966840), GPR_U32(ctx, 0));
    // 0x1ce508: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce50c: 0xac20fdb0  sw          $zero, -0x250($at)
    ctx->pc = 0x1ce50cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966704), GPR_U32(ctx, 0));
    // 0x1ce510: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce514: 0xac20fe04  sw          $zero, -0x1FC($at)
    ctx->pc = 0x1ce514u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966788), GPR_U32(ctx, 0));
    // 0x1ce518: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce51c: 0xac20fe08  sw          $zero, -0x1F8($at)
    ctx->pc = 0x1ce51cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966792), GPR_U32(ctx, 0));
    // 0x1ce520: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce524: 0xac24fe0c  sw          $a0, -0x1F4($at)
    ctx->pc = 0x1ce524u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966796), GPR_U32(ctx, 4));
    // 0x1ce528: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce52c: 0xac23fe10  sw          $v1, -0x1F0($at)
    ctx->pc = 0x1ce52cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966800), GPR_U32(ctx, 3));
    // 0x1ce530: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce534: 0xac20fe14  sw          $zero, -0x1EC($at)
    ctx->pc = 0x1ce534u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966804), GPR_U32(ctx, 0));
    // 0x1ce538: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce53c: 0xac22fe18  sw          $v0, -0x1E8($at)
    ctx->pc = 0x1ce53cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966808), GPR_U32(ctx, 2));
    // 0x1ce540: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce544: 0xac20fec8  sw          $zero, -0x138($at)
    ctx->pc = 0x1ce544u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966984), GPR_U32(ctx, 0));
    // 0x1ce548: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce54c: 0xac20fe40  sw          $zero, -0x1C0($at)
    ctx->pc = 0x1ce54cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966848), GPR_U32(ctx, 0));
    // 0x1ce550: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce554: 0xac20fe94  sw          $zero, -0x16C($at)
    ctx->pc = 0x1ce554u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966932), GPR_U32(ctx, 0));
    // 0x1ce558: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce55c: 0xac20fe98  sw          $zero, -0x168($at)
    ctx->pc = 0x1ce55cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966936), GPR_U32(ctx, 0));
    // 0x1ce560: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce564: 0xac24fe9c  sw          $a0, -0x164($at)
    ctx->pc = 0x1ce564u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966940), GPR_U32(ctx, 4));
    // 0x1ce568: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce56c: 0xac24ff2c  sw          $a0, -0xD4($at)
    ctx->pc = 0x1ce56cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294967084), GPR_U32(ctx, 4));
    // 0x1ce570: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce574: 0xac23fea0  sw          $v1, -0x160($at)
    ctx->pc = 0x1ce574u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966944), GPR_U32(ctx, 3));
    // 0x1ce578: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce57c: 0xac23ff30  sw          $v1, -0xD0($at)
    ctx->pc = 0x1ce57cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294967088), GPR_U32(ctx, 3));
    // 0x1ce580: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce584: 0xac20fea4  sw          $zero, -0x15C($at)
    ctx->pc = 0x1ce584u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966948), GPR_U32(ctx, 0));
    // 0x1ce588: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce58c: 0xac22fea8  sw          $v0, -0x158($at)
    ctx->pc = 0x1ce58cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966952), GPR_U32(ctx, 2));
    // 0x1ce590: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce594: 0xac22ff38  sw          $v0, -0xC8($at)
    ctx->pc = 0x1ce594u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294967096), GPR_U32(ctx, 2));
    // 0x1ce598: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce59c: 0xac20ff58  sw          $zero, -0xA8($at)
    ctx->pc = 0x1ce59cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294967128), GPR_U32(ctx, 0));
    // 0x1ce5a0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce5a4: 0xac20fed0  sw          $zero, -0x130($at)
    ctx->pc = 0x1ce5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966992), GPR_U32(ctx, 0));
    // 0x1ce5a8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce5a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce5ac: 0xac20ff24  sw          $zero, -0xDC($at)
    ctx->pc = 0x1ce5acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294967076), GPR_U32(ctx, 0));
    // 0x1ce5b0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce5b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce5b4: 0xac20ff28  sw          $zero, -0xD8($at)
    ctx->pc = 0x1ce5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294967080), GPR_U32(ctx, 0));
    // 0x1ce5b8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce5b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce5bc: 0xac20ff34  sw          $zero, -0xCC($at)
    ctx->pc = 0x1ce5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294967092), GPR_U32(ctx, 0));
    // 0x1ce5c0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce5c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce5c4: 0xac20f720  sw          $zero, -0x8E0($at)
    ctx->pc = 0x1ce5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965024), GPR_U32(ctx, 0));
    // 0x1ce5c8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce5c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce5cc: 0xac20fa40  sw          $zero, -0x5C0($at)
    ctx->pc = 0x1ce5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965824), GPR_U32(ctx, 0));
    // 0x1ce5d0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce5d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce5d4: 0xac20fa30  sw          $zero, -0x5D0($at)
    ctx->pc = 0x1ce5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965808), GPR_U32(ctx, 0));
    // 0x1ce5d8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce5dc: 0xac200460  sw          $zero, 0x460($at)
    ctx->pc = 0x1ce5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1120), GPR_U32(ctx, 0));
    // 0x1ce5e0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce5e4: 0xac200464  sw          $zero, 0x464($at)
    ctx->pc = 0x1ce5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1124), GPR_U32(ctx, 0));
    // 0x1ce5e8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce5ec: 0xac200468  sw          $zero, 0x468($at)
    ctx->pc = 0x1ce5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1128), GPR_U32(ctx, 0));
    // 0x1ce5f0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce5f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce5f4: 0xac20046c  sw          $zero, 0x46C($at)
    ctx->pc = 0x1ce5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1132), GPR_U32(ctx, 0));
label_1ce5f8:
    // 0x1ce5f8: 0x3c0201eb  lui         $v0, 0x1EB
    ctx->pc = 0x1ce5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)491 << 16));
    // 0x1ce5fc: 0x244242f0  addiu       $v0, $v0, 0x42F0
    ctx->pc = 0x1ce5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17136));
    // 0x1ce600: 0xc06e568  jal         func_1B95A0
    ctx->pc = 0x1CE600u;
    SET_GPR_U32(ctx, 31, 0x1CE608u);
    ctx->pc = 0x1CE604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE600u;
            // 0x1ce604: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B95A0u;
    if (runtime->hasFunction(0x1B95A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B95A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE608u; }
        if (ctx->pc != 0x1CE608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__9CPullItemFv_0x1b95a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE608u; }
        if (ctx->pc != 0x1CE608u) { return; }
    }
    ctx->pc = 0x1CE608u;
label_1ce608:
    // 0x1ce608: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ce608u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ce60c: 0x2a020048  slti        $v0, $s0, 0x48
    ctx->pc = 0x1ce60cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)72) ? 1 : 0);
    // 0x1ce610: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1CE610u;
    {
        const bool branch_taken_0x1ce610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE610u;
            // 0x1ce614: 0x26310080  addiu       $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce610) {
            ctx->pc = 0x1CE5F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ce5f8;
        }
    }
    ctx->pc = 0x1CE618u;
    // 0x1ce618: 0xaf808de8  sw          $zero, -0x7218($gp)
    ctx->pc = 0x1ce618u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938088), GPR_U32(ctx, 0));
    // 0x1ce61c: 0x3c0301eb  lui         $v1, 0x1EB
    ctx->pc = 0x1ce61cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)491 << 16));
    // 0x1ce620: 0x246342f0  addiu       $v1, $v1, 0x42F0
    ctx->pc = 0x1ce620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17136));
    // 0x1ce624: 0xaf808dec  sw          $zero, -0x7214($gp)
    ctx->pc = 0x1ce624u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938092), GPR_U32(ctx, 0));
    // 0x1ce628: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x1ce628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1ce62c: 0xaf838de8  sw          $v1, -0x7218($gp)
    ctx->pc = 0x1ce62cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938088), GPR_U32(ctx, 3));
    // 0x1ce630: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ce630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce634: 0xaf828dec  sw          $v0, -0x7214($gp)
    ctx->pc = 0x1ce634u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938092), GPR_U32(ctx, 2));
    // 0x1ce638: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ce638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce63c: 0x3c0301eb  lui         $v1, 0x1EB
    ctx->pc = 0x1ce63cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)491 << 16));
    // 0x1ce640: 0x2463e190  addiu       $v1, $v1, -0x1E70
    ctx->pc = 0x1ce640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959504));
label_1ce644:
    // 0x1ce644: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x1ce644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ce648: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1ce648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1ce64c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1ce64cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1ce650: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x1ce650u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1ce654: 0xacc00120  sw          $zero, 0x120($a2)
    ctx->pc = 0x1ce654u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 288), GPR_U32(ctx, 0));
    // 0x1ce658: 0x24a50900  addiu       $a1, $a1, 0x900
    ctx->pc = 0x1ce658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2304));
    // 0x1ce65c: 0xacc00240  sw          $zero, 0x240($a2)
    ctx->pc = 0x1ce65cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 576), GPR_U32(ctx, 0));
    // 0x1ce660: 0xacc00360  sw          $zero, 0x360($a2)
    ctx->pc = 0x1ce660u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 864), GPR_U32(ctx, 0));
    // 0x1ce664: 0xacc00480  sw          $zero, 0x480($a2)
    ctx->pc = 0x1ce664u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1152), GPR_U32(ctx, 0));
    // 0x1ce668: 0xacc005a0  sw          $zero, 0x5A0($a2)
    ctx->pc = 0x1ce668u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1440), GPR_U32(ctx, 0));
    // 0x1ce66c: 0xacc006c0  sw          $zero, 0x6C0($a2)
    ctx->pc = 0x1ce66cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1728), GPR_U32(ctx, 0));
    // 0x1ce670: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1CE670u;
    {
        const bool branch_taken_0x1ce670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE670u;
            // 0x1ce674: 0xacc007e0  sw          $zero, 0x7E0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 2016), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce670) {
            ctx->pc = 0x1CE644u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ce644;
        }
    }
    ctx->pc = 0x1CE678u;
    // 0x1ce678: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ce678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce67c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ce67cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce680: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x1ce680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
    // 0x1ce684: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ce684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ce688: 0x24842600  addiu       $a0, $a0, 0x2600
    ctx->pc = 0x1ce688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9728));
label_1ce68c:
    // 0x1ce68c: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x1ce68cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1ce690: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1ce690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1ce694: 0xa4e00300  sh          $zero, 0x300($a3)
    ctx->pc = 0x1ce694u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 768), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ce698: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x1ce698u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1ce69c: 0xa4e30320  sh          $v1, 0x320($a3)
    ctx->pc = 0x1ce69cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 800), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ce6a0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1ce6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1ce6a4: 0xa4e00302  sh          $zero, 0x302($a3)
    ctx->pc = 0x1ce6a4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 770), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ce6a8: 0xa4e30322  sh          $v1, 0x322($a3)
    ctx->pc = 0x1ce6a8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 802), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ce6ac: 0xa4e00304  sh          $zero, 0x304($a3)
    ctx->pc = 0x1ce6acu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 772), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ce6b0: 0xa4e30324  sh          $v1, 0x324($a3)
    ctx->pc = 0x1ce6b0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 804), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ce6b4: 0xa4e00306  sh          $zero, 0x306($a3)
    ctx->pc = 0x1ce6b4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 774), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ce6b8: 0xa4e30326  sh          $v1, 0x326($a3)
    ctx->pc = 0x1ce6b8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 806), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ce6bc: 0xa4e00308  sh          $zero, 0x308($a3)
    ctx->pc = 0x1ce6bcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 776), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ce6c0: 0xa4e30328  sh          $v1, 0x328($a3)
    ctx->pc = 0x1ce6c0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 808), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ce6c4: 0xa4e0030a  sh          $zero, 0x30A($a3)
    ctx->pc = 0x1ce6c4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 778), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ce6c8: 0xa4e3032a  sh          $v1, 0x32A($a3)
    ctx->pc = 0x1ce6c8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 810), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ce6cc: 0xa4e0030c  sh          $zero, 0x30C($a3)
    ctx->pc = 0x1ce6ccu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 780), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ce6d0: 0xa4e3032c  sh          $v1, 0x32C($a3)
    ctx->pc = 0x1ce6d0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 812), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ce6d4: 0xa4e0030e  sh          $zero, 0x30E($a3)
    ctx->pc = 0x1ce6d4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 782), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ce6d8: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1CE6D8u;
    {
        const bool branch_taken_0x1ce6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE6D8u;
            // 0x1ce6dc: 0xa4e3032e  sh          $v1, 0x32E($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 814), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce6d8) {
            ctx->pc = 0x1CE68Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ce68c;
        }
    }
    ctx->pc = 0x1CE6E0u;
    // 0x1ce6e0: 0x3c0101eb  lui         $at, 0x1EB
    ctx->pc = 0x1ce6e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)491 << 16));
    // 0x1ce6e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ce6e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce6e8: 0xa4202980  sh          $zero, 0x2980($at)
    ctx->pc = 0x1ce6e8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10624), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ce6ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ce6ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ce6f0:
    // 0x1ce6f0: 0x3c0201eb  lui         $v0, 0x1EB
    ctx->pc = 0x1ce6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)491 << 16));
    // 0x1ce6f4: 0x24427980  addiu       $v0, $v0, 0x7980
    ctx->pc = 0x1ce6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31104));
    // 0x1ce6f8: 0xc0716fc  jal         func_1C5BF0
    ctx->pc = 0x1CE6F8u;
    SET_GPR_U32(ctx, 31, 0x1CE700u);
    ctx->pc = 0x1CE6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE6F8u;
            // 0x1ce6fc: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5BF0u;
    if (runtime->hasFunction(0x1C5BF0u)) {
        auto targetFn = runtime->lookupFunction(0x1C5BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE700u; }
        if (ctx->pc != 0x1CE700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__14CWeaponElementFv_0x1c5bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE700u; }
        if (ctx->pc != 0x1CE700u) { return; }
    }
    ctx->pc = 0x1CE700u;
label_1ce700:
    // 0x1ce700: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ce700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ce704: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x1ce704u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ce708: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1CE708u;
    {
        const bool branch_taken_0x1ce708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE708u;
            // 0x1ce70c: 0x263107c0  addiu       $s1, $s1, 0x7C0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce708) {
            ctx->pc = 0x1CE6F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ce6f0;
        }
    }
    ctx->pc = 0x1CE710u;
    // 0x1ce710: 0xaf808df4  sw          $zero, -0x720C($gp)
    ctx->pc = 0x1ce710u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938100), GPR_U32(ctx, 0));
    // 0x1ce714: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ce714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce718: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ce718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce71c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ce71cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce720: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE720u;
            // 0x1ce724: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CE728u;
}
