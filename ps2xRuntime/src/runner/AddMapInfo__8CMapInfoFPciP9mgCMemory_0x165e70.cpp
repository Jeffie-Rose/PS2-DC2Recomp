#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddMapInfo__8CMapInfoFPciP9mgCMemory
// Address: 0x165e70 - 0x165f30
void AddMapInfo__8CMapInfoFPciP9mgCMemory_0x165e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddMapInfo__8CMapInfoFPciP9mgCMemory_0x165e70");
#endif

    switch (ctx->pc) {
        case 0x165ea8u: goto label_165ea8;
        case 0x165eb8u: goto label_165eb8;
        case 0x165ec8u: goto label_165ec8;
        case 0x165ee4u: goto label_165ee4;
        case 0x165ef8u: goto label_165ef8;
        case 0x165f0cu: goto label_165f0c;
        case 0x165f14u: goto label_165f14;
        default: break;
    }

    ctx->pc = 0x165e70u;

    // 0x165e70: 0x27bdf0e0  addiu       $sp, $sp, -0xF20
    ctx->pc = 0x165e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963424));
    // 0x165e74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x165e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x165e78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x165e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x165e7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x165e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x165e80: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x165e80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165e84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x165e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x165e88: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x165e88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165e8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x165e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x165e90: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x165e90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165e94: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x165e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165e98: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x165e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x165e9c: 0xaf908960  sw          $s0, -0x76A0($gp)
    ctx->pc = 0x165e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936928), GPR_U32(ctx, 16));
    // 0x165ea0: 0xc051a7c  jal         func_1469F0
    ctx->pc = 0x165EA0u;
    SET_GPR_U32(ctx, 31, 0x165EA8u);
    ctx->pc = 0x165EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165EA0u;
            // 0x165ea4: 0xaf93895c  sw          $s3, -0x76A4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936924), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165EA8u; }
        if (ctx->pc != 0x165EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165EA8u; }
        if (ctx->pc != 0x165EA8u) { return; }
    }
    ctx->pc = 0x165EA8u;
label_165ea8:
    // 0x165ea8: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x165ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x165eac: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x165eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x165eb0: 0xc0519ec  jal         func_1467B0
    ctx->pc = 0x165EB0u;
    SET_GPR_U32(ctx, 31, 0x165EB8u);
    ctx->pc = 0x165EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165EB0u;
            // 0x165eb4: 0x24a54b40  addiu       $a1, $a1, 0x4B40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165EB8u; }
        if (ctx->pc != 0x165EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165EB8u; }
        if (ctx->pc != 0x165EB8u) { return; }
    }
    ctx->pc = 0x165EB8u;
label_165eb8:
    // 0x165eb8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x165eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x165ebc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x165ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165ec0: 0xc051a60  jal         func_146980
    ctx->pc = 0x165EC0u;
    SET_GPR_U32(ctx, 31, 0x165EC8u);
    ctx->pc = 0x165EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165EC0u;
            // 0x165ec4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165EC8u; }
        if (ctx->pc != 0x165EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165EC8u; }
        if (ctx->pc != 0x165EC8u) { return; }
    }
    ctx->pc = 0x165EC8u;
label_165ec8:
    // 0x165ec8: 0x3222000f  andi        $v0, $s1, 0xF
    ctx->pc = 0x165ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x165ecc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165ECCu;
    {
        const bool branch_taken_0x165ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165ECCu;
            // 0x165ed0: 0x112902  srl         $a1, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ecc) {
            ctx->pc = 0x165EDCu;
            goto label_165edc;
        }
    }
    ctx->pc = 0x165ED4u;
    // 0x165ed4: 0x111102  srl         $v0, $s1, 4
    ctx->pc = 0x165ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
    // 0x165ed8: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x165ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_165edc:
    // 0x165edc: 0xc04e748  jal         func_139D20
    ctx->pc = 0x165EDCu;
    SET_GPR_U32(ctx, 31, 0x165EE4u);
    ctx->pc = 0x165EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165EDCu;
            // 0x165ee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165EE4u; }
        if (ctx->pc != 0x165EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165EE4u; }
        if (ctx->pc != 0x165EE4u) { return; }
    }
    ctx->pc = 0x165EE4u;
label_165ee4:
    // 0x165ee4: 0xae620090  sw          $v0, 0x90($s3)
    ctx->pc = 0x165ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 2));
    // 0x165ee8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x165ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165eec: 0x8e640090  lw          $a0, 0x90($s3)
    ctx->pc = 0x165eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
    // 0x165ef0: 0xc049c18  jal         func_127060
    ctx->pc = 0x165EF0u;
    SET_GPR_U32(ctx, 31, 0x165EF8u);
    ctx->pc = 0x165EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165EF0u;
            // 0x165ef4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165EF8u; }
        if (ctx->pc != 0x165EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165EF8u; }
        if (ctx->pc != 0x165EF8u) { return; }
    }
    ctx->pc = 0x165EF8u;
label_165ef8:
    // 0x165ef8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x165ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165efc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x165efcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165f00: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x165f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x165f04: 0xc051a60  jal         func_146980
    ctx->pc = 0x165F04u;
    SET_GPR_U32(ctx, 31, 0x165F0Cu);
    ctx->pc = 0x165F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165F04u;
            // 0x165f08: 0xae710094  sw          $s1, 0x94($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165F0Cu; }
        if (ctx->pc != 0x165F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165F0Cu; }
        if (ctx->pc != 0x165F0Cu) { return; }
    }
    ctx->pc = 0x165F0Cu;
label_165f0c:
    // 0x165f0c: 0xc0519c8  jal         func_146720
    ctx->pc = 0x165F0Cu;
    SET_GPR_U32(ctx, 31, 0x165F14u);
    ctx->pc = 0x165F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165F0Cu;
            // 0x165f10: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165F14u; }
        if (ctx->pc != 0x165F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165F14u; }
        if (ctx->pc != 0x165F14u) { return; }
    }
    ctx->pc = 0x165F14u;
label_165f14:
    // 0x165f14: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x165f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x165f18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x165f18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165f1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x165f1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165f20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x165f20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165f24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x165f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165f28: 0x3e00008  jr          $ra
    ctx->pc = 0x165F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165F28u;
            // 0x165f2c: 0x27bd0f20  addiu       $sp, $sp, 0xF20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3872));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x165F30u;
}
