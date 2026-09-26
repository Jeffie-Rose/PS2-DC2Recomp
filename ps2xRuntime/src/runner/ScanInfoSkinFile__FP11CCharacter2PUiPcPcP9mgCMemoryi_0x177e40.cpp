#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ScanInfoSkinFile__FP11CCharacter2PUiPcPcP9mgCMemoryi
// Address: 0x177e40 - 0x177f18
void ScanInfoSkinFile__FP11CCharacter2PUiPcPcP9mgCMemoryi_0x177e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ScanInfoSkinFile__FP11CCharacter2PUiPcPcP9mgCMemoryi_0x177e40");
#endif

    switch (ctx->pc) {
        case 0x177e80u: goto label_177e80;
        case 0x177eacu: goto label_177eac;
        case 0x177ec8u: goto label_177ec8;
        case 0x177edcu: goto label_177edc;
        case 0x177eecu: goto label_177eec;
        case 0x177ef4u: goto label_177ef4;
        default: break;
    }

    ctx->pc = 0x177e40u;

    // 0x177e40: 0x27bdf0b0  addiu       $sp, $sp, -0xF50
    ctx->pc = 0x177e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963376));
    // 0x177e44: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x177e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x177e48: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x177e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x177e4c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x177e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x177e50: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x177e50u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177e54: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x177e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x177e58: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x177e58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177e5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x177e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x177e60: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x177e60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177e64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x177e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x177e68: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x177e68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177e6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x177e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x177e70: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x177e70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177e74: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x177e74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177e78: 0xc051a7c  jal         func_1469F0
    ctx->pc = 0x177E78u;
    SET_GPR_U32(ctx, 31, 0x177E80u);
    ctx->pc = 0x177E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177E78u;
            // 0x177e7c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177E80u; }
        if (ctx->pc != 0x177E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177E80u; }
        if (ctx->pc != 0x177E80u) { return; }
    }
    ctx->pc = 0x177E80u;
label_177e80:
    // 0x177e80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x177e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177e84: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x177e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177e88: 0x27a60f4c  addiu       $a2, $sp, 0xF4C
    ctx->pc = 0x177e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3916));
    // 0x177e8c: 0xaf9089dc  sw          $s0, -0x7624($gp)
    ctx->pc = 0x177e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937052), GPR_U32(ctx, 16));
    // 0x177e90: 0xaf9389f0  sw          $s3, -0x7610($gp)
    ctx->pc = 0x177e90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937072), GPR_U32(ctx, 19));
    // 0x177e94: 0xaf9589ec  sw          $s5, -0x7614($gp)
    ctx->pc = 0x177e94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937068), GPR_U32(ctx, 21));
    // 0x177e98: 0xaf9489a8  sw          $s4, -0x7658($gp)
    ctx->pc = 0x177e98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937000), GPR_U32(ctx, 20));
    // 0x177e9c: 0xaf9189a4  sw          $s1, -0x765C($gp)
    ctx->pc = 0x177e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936996), GPR_U32(ctx, 17));
    // 0x177ea0: 0xaf80899c  sw          $zero, -0x7664($gp)
    ctx->pc = 0x177ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936988), GPR_U32(ctx, 0));
    // 0x177ea4: 0xc052734  jal         func_149CD0
    ctx->pc = 0x177EA4u;
    SET_GPR_U32(ctx, 31, 0x177EACu);
    ctx->pc = 0x177EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177EA4u;
            // 0x177ea8: 0xaf8089a0  sw          $zero, -0x7660($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936992), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177EACu; }
        if (ctx->pc != 0x177EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177EACu; }
        if (ctx->pc != 0x177EACu) { return; }
    }
    ctx->pc = 0x177EACu;
label_177eac:
    // 0x177eac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x177eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177eb0: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x177EB0u;
    {
        const bool branch_taken_0x177eb0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x177EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177EB0u;
            // 0x177eb4: 0x3c050033  lui         $a1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177eb0) {
            ctx->pc = 0x177ED0u;
            goto label_177ed0;
        }
    }
    ctx->pc = 0x177EB8u;
    // 0x177eb8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x177eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x177ebc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x177ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177ec0: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x177EC0u;
    SET_GPR_U32(ctx, 31, 0x177EC8u);
    ctx->pc = 0x177EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177EC0u;
            // 0x177ec4: 0x24843960  addiu       $a0, $a0, 0x3960 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177EC8u; }
        if (ctx->pc != 0x177EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177EC8u; }
        if (ctx->pc != 0x177EC8u) { return; }
    }
    ctx->pc = 0x177EC8u;
label_177ec8:
    // 0x177ec8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x177EC8u;
    {
        const bool branch_taken_0x177ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177EC8u;
            // 0x177ecc: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177ec8) {
            ctx->pc = 0x177EF8u;
            goto label_177ef8;
        }
    }
    ctx->pc = 0x177ED0u;
label_177ed0:
    // 0x177ed0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x177ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x177ed4: 0xc0519ec  jal         func_1467B0
    ctx->pc = 0x177ED4u;
    SET_GPR_U32(ctx, 31, 0x177EDCu);
    ctx->pc = 0x177ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177ED4u;
            // 0x177ed8: 0x24a54db0  addiu       $a1, $a1, 0x4DB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177EDCu; }
        if (ctx->pc != 0x177EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177EDCu; }
        if (ctx->pc != 0x177EDCu) { return; }
    }
    ctx->pc = 0x177EDCu;
label_177edc:
    // 0x177edc: 0x8fa60f4c  lw          $a2, 0xF4C($sp)
    ctx->pc = 0x177edcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3916)));
    // 0x177ee0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x177ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177ee4: 0xc051a60  jal         func_146980
    ctx->pc = 0x177EE4u;
    SET_GPR_U32(ctx, 31, 0x177EECu);
    ctx->pc = 0x177EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177EE4u;
            // 0x177ee8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177EECu; }
        if (ctx->pc != 0x177EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177EECu; }
        if (ctx->pc != 0x177EECu) { return; }
    }
    ctx->pc = 0x177EECu;
label_177eec:
    // 0x177eec: 0xc0519c8  jal         func_146720
    ctx->pc = 0x177EECu;
    SET_GPR_U32(ctx, 31, 0x177EF4u);
    ctx->pc = 0x177EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177EECu;
            // 0x177ef0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177EF4u; }
        if (ctx->pc != 0x177EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177EF4u; }
        if (ctx->pc != 0x177EF4u) { return; }
    }
    ctx->pc = 0x177EF4u;
label_177ef4:
    // 0x177ef4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x177ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_177ef8:
    // 0x177ef8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x177ef8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x177efc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x177efcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x177f00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x177f00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177f04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x177f04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177f08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x177f08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177f0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x177f0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177f10: 0x3e00008  jr          $ra
    ctx->pc = 0x177F10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177F10u;
            // 0x177f14: 0x27bd0f50  addiu       $sp, $sp, 0xF50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3920));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177F18u;
}
