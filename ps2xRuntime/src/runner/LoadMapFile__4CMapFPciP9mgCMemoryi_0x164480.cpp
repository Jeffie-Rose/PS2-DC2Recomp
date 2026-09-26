#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadMapFile__4CMapFPciP9mgCMemoryi
// Address: 0x164480 - 0x16450c
void LoadMapFile__4CMapFPciP9mgCMemoryi_0x164480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadMapFile__4CMapFPciP9mgCMemoryi_0x164480");
#endif

    switch (ctx->pc) {
        case 0x1644c8u: goto label_1644c8;
        case 0x1644d0u: goto label_1644d0;
        case 0x1644e0u: goto label_1644e0;
        case 0x1644f0u: goto label_1644f0;
        case 0x1644f8u: goto label_1644f8;
        default: break;
    }

    ctx->pc = 0x164480u;

    // 0x164480: 0x27bdf100  addiu       $sp, $sp, -0xF00
    ctx->pc = 0x164480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963456));
    // 0x164484: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x164484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x164488: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x164488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16448c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16448cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x164490: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x164490u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164494: 0xaf878920  sw          $a3, -0x76E0($gp)
    ctx->pc = 0x164494u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936864), GPR_U32(ctx, 7));
    // 0x164498: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x164498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16449c: 0xaf88894c  sw          $t0, -0x76B4($gp)
    ctx->pc = 0x16449cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936908), GPR_U32(ctx, 8));
    // 0x1644a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1644a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1644a4: 0xaf848914  sw          $a0, -0x76EC($gp)
    ctx->pc = 0x1644a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936852), GPR_U32(ctx, 4));
    // 0x1644a8: 0xaf808918  sw          $zero, -0x76E8($gp)
    ctx->pc = 0x1644a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936856), GPR_U32(ctx, 0));
    // 0x1644ac: 0xaf80891c  sw          $zero, -0x76E4($gp)
    ctx->pc = 0x1644acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936860), GPR_U32(ctx, 0));
    // 0x1644b0: 0xaf808934  sw          $zero, -0x76CC($gp)
    ctx->pc = 0x1644b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936884), GPR_U32(ctx, 0));
    // 0x1644b4: 0xaf808938  sw          $zero, -0x76C8($gp)
    ctx->pc = 0x1644b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936888), GPR_U32(ctx, 0));
    // 0x1644b8: 0xaf80893c  sw          $zero, -0x76C4($gp)
    ctx->pc = 0x1644b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936892), GPR_U32(ctx, 0));
    // 0x1644bc: 0xaf808940  sw          $zero, -0x76C0($gp)
    ctx->pc = 0x1644bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936896), GPR_U32(ctx, 0));
    // 0x1644c0: 0xc059144  jal         func_164510
    ctx->pc = 0x1644C0u;
    SET_GPR_U32(ctx, 31, 0x1644C8u);
    ctx->pc = 0x1644C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1644C0u;
            // 0x1644c4: 0xaf808948  sw          $zero, -0x76B8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936904), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164510u;
    if (runtime->hasFunction(0x164510u)) {
        auto targetFn = runtime->lookupFunction(0x164510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1644C8u; }
        if (ctx->pc != 0x1644C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPieceLoadSkip__4CMapFi_0x164510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1644C8u; }
        if (ctx->pc != 0x1644C8u) { return; }
    }
    ctx->pc = 0x1644C8u;
label_1644c8:
    // 0x1644c8: 0xc051a7c  jal         func_1469F0
    ctx->pc = 0x1644C8u;
    SET_GPR_U32(ctx, 31, 0x1644D0u);
    ctx->pc = 0x1644CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1644C8u;
            // 0x1644cc: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1644D0u; }
        if (ctx->pc != 0x1644D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1644D0u; }
        if (ctx->pc != 0x1644D0u) { return; }
    }
    ctx->pc = 0x1644D0u;
label_1644d0:
    // 0x1644d0: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1644d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1644d4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1644d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1644d8: 0xc0519ec  jal         func_1467B0
    ctx->pc = 0x1644D8u;
    SET_GPR_U32(ctx, 31, 0x1644E0u);
    ctx->pc = 0x1644DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1644D8u;
            // 0x1644dc: 0x24a54730  addiu       $a1, $a1, 0x4730 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1644E0u; }
        if (ctx->pc != 0x1644E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1644E0u; }
        if (ctx->pc != 0x1644E0u) { return; }
    }
    ctx->pc = 0x1644E0u;
label_1644e0:
    // 0x1644e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1644e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1644e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1644e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1644e8: 0xc051a60  jal         func_146980
    ctx->pc = 0x1644E8u;
    SET_GPR_U32(ctx, 31, 0x1644F0u);
    ctx->pc = 0x1644ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1644E8u;
            // 0x1644ec: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1644F0u; }
        if (ctx->pc != 0x1644F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1644F0u; }
        if (ctx->pc != 0x1644F0u) { return; }
    }
    ctx->pc = 0x1644F0u;
label_1644f0:
    // 0x1644f0: 0xc0519c8  jal         func_146720
    ctx->pc = 0x1644F0u;
    SET_GPR_U32(ctx, 31, 0x1644F8u);
    ctx->pc = 0x1644F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1644F0u;
            // 0x1644f4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1644F8u; }
        if (ctx->pc != 0x1644F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1644F8u; }
        if (ctx->pc != 0x1644F8u) { return; }
    }
    ctx->pc = 0x1644F8u;
label_1644f8:
    // 0x1644f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1644f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1644fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1644fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164500: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x164500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164504: 0x3e00008  jr          $ra
    ctx->pc = 0x164504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164504u;
            // 0x164508: 0x27bd0f00  addiu       $sp, $sp, 0xF00 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3840));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16450Cu;
}
