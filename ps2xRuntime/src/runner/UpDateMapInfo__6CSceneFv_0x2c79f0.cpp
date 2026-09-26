#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UpDateMapInfo__6CSceneFv
// Address: 0x2c79f0 - 0x2c7b50
void UpDateMapInfo__6CSceneFv_0x2c79f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpDateMapInfo__6CSceneFv_0x2c79f0");
#endif

    switch (ctx->pc) {
        case 0x2c7a14u: goto label_2c7a14;
        case 0x2c7a24u: goto label_2c7a24;
        case 0x2c7a5cu: goto label_2c7a5c;
        case 0x2c7a74u: goto label_2c7a74;
        case 0x2c7a84u: goto label_2c7a84;
        case 0x2c7a8cu: goto label_2c7a8c;
        case 0x2c7ab8u: goto label_2c7ab8;
        case 0x2c7ad4u: goto label_2c7ad4;
        case 0x2c7ae0u: goto label_2c7ae0;
        case 0x2c7ae8u: goto label_2c7ae8;
        case 0x2c7af0u: goto label_2c7af0;
        case 0x2c7b04u: goto label_2c7b04;
        case 0x2c7b0cu: goto label_2c7b0c;
        case 0x2c7b1cu: goto label_2c7b1c;
        case 0x2c7b38u: goto label_2c7b38;
        default: break;
    }

    ctx->pc = 0x2c79f0u;

    // 0x2c79f0: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x2c79f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
    // 0x2c79f4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2c79f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c79f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c79f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c79fc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2c79fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c7a00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c7a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c7a04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c7a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c7a08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c7a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c7a0c: 0xc0a1214  jal         func_284850
    ctx->pc = 0x2C7A0Cu;
    SET_GPR_U32(ctx, 31, 0x2C7A14u);
    ctx->pc = 0x2C7A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7A0Cu;
            // 0x2c7a10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284850u;
    if (runtime->hasFunction(0x284850u)) {
        auto targetFn = runtime->lookupFunction(0x284850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7A14u; }
        if (ctx->pc != 0x2C7A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveMap__6CSceneFPP4CMapi_0x284850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7A14u; }
        if (ctx->pc != 0x2C7A14u) { return; }
    }
    ctx->pc = 0x2C7A14u;
label_2c7a14:
    // 0x2c7a14: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2c7a14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c7a18: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x2C7A18u;
    {
        const bool branch_taken_0x2c7a18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7A18u;
            // 0x2c7a1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7a18) {
            ctx->pc = 0x2C7A50u;
            goto label_2c7a50;
        }
    }
    ctx->pc = 0x2C7A20u;
    // 0x2c7a20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c7a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7a24:
    // 0x2c7a24: 0xbd1821  addu        $v1, $a1, $sp
    ctx->pc = 0x2c7a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x2c7a28: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x2c7a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2c7a2c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7A2Cu;
    {
        const bool branch_taken_0x2c7a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7a2c) {
            ctx->pc = 0x2C7A3Cu;
            goto label_2c7a3c;
        }
    }
    ctx->pc = 0x2C7A34u;
    // 0x2c7a34: 0xc6002f6c  lwc1        $f0, 0x2F6C($s0)
    ctx->pc = 0x2c7a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7a38: 0xe4600c88  swc1        $f0, 0xC88($v1)
    ctx->pc = 0x2c7a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 3208), bits); }
label_2c7a3c:
    // 0x2c7a3c: 0x0  nop
    ctx->pc = 0x2c7a3cu;
    // NOP
    // 0x2c7a40: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2c7a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2c7a44: 0x82182a  slt         $v1, $a0, $v0
    ctx->pc = 0x2c7a44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c7a48: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2C7A48u;
    {
        const bool branch_taken_0x2c7a48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7A48u;
            // 0x2c7a4c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7a48) {
            ctx->pc = 0x2C7A24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c7a24;
        }
    }
    ctx->pc = 0x2C7A50u;
label_2c7a50:
    // 0x2c7a50: 0x8e052e5c  lw          $a1, 0x2E5C($s0)
    ctx->pc = 0x2c7a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11868)));
    // 0x2c7a54: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x2C7A54u;
    SET_GPR_U32(ctx, 31, 0x2C7A5Cu);
    ctx->pc = 0x2C7A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7A54u;
            // 0x2c7a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7A5Cu; }
        if (ctx->pc != 0x2C7A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7A5Cu; }
        if (ctx->pc != 0x2C7A5Cu) { return; }
    }
    ctx->pc = 0x2C7A5Cu;
label_2c7a5c:
    // 0x2c7a5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c7a5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7a60: 0x12000035  beqz        $s0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2C7A60u;
    {
        const bool branch_taken_0x2c7a60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7A60u;
            // 0x2c7a64: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7a60) {
            ctx->pc = 0x2C7B38u;
            goto label_2c7b38;
        }
    }
    ctx->pc = 0x2C7A68u;
    // 0x2c7a68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c7a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7a6c: 0xc049c86  jal         func_127218
    ctx->pc = 0x2C7A6Cu;
    SET_GPR_U32(ctx, 31, 0x2C7A74u);
    ctx->pc = 0x2C7A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7A6Cu;
            // 0x2c7a70: 0x240601d0  addiu       $a2, $zero, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7A74u; }
        if (ctx->pc != 0x2C7A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7A74u; }
        if (ctx->pc != 0x2C7A74u) { return; }
    }
    ctx->pc = 0x2C7A74u;
label_2c7a74:
    // 0x2c7a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c7a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7a78: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x2c7a78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c7a7c: 0xc058524  jal         func_161490
    ctx->pc = 0x2C7A7Cu;
    SET_GPR_U32(ctx, 31, 0x2C7A84u);
    ctx->pc = 0x2C7A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7A7Cu;
            // 0x2c7a80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161490u;
    if (runtime->hasFunction(0x161490u)) {
        auto targetFn = runtime->lookupFunction(0x161490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7A84u; }
        if (ctx->pc != 0x2C7A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLightInfo__4CMapFP16CMapLightingInfo_0x161490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7A84u; }
        if (ctx->pc != 0x2C7A84u) { return; }
    }
    ctx->pc = 0x2C7A84u;
label_2c7a84:
    // 0x2c7a84: 0xc050e38  jal         func_1438E0
    ctx->pc = 0x2C7A84u;
    SET_GPR_U32(ctx, 31, 0x2C7A8Cu);
    ctx->pc = 0x2C7A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7A84u;
            // 0x2c7a88: 0x8e040190  lw          $a0, 0x190($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1438E0u;
    if (runtime->hasFunction(0x1438E0u)) {
        auto targetFn = runtime->lookupFunction(0x1438E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7A8Cu; }
        if (ctx->pc != 0x2C7A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgFogEnable__Fi_0x1438e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7A8Cu; }
        if (ctx->pc != 0x2C7A8Cu) { return; }
    }
    ctx->pc = 0x2C7A8Cu;
label_2c7a8c:
    // 0x2c7a8c: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x2c7a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x2c7a90: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C7A90u;
    {
        const bool branch_taken_0x2c7a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7a90) {
            ctx->pc = 0x2C7AB8u;
            goto label_2c7ab8;
        }
    }
    ctx->pc = 0x2C7A98u;
    // 0x2c7a98: 0x920401a8  lbu         $a0, 0x1A8($s0)
    ctx->pc = 0x2c7a98u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 424)));
    // 0x2c7a9c: 0xc60d01a4  lwc1        $f13, 0x1A4($s0)
    ctx->pc = 0x2c7a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c7aa0: 0x920501a9  lbu         $a1, 0x1A9($s0)
    ctx->pc = 0x2c7aa0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 425)));
    // 0x2c7aa4: 0x920601aa  lbu         $a2, 0x1AA($s0)
    ctx->pc = 0x2c7aa4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 426)));
    // 0x2c7aa8: 0xc60e01b0  lwc1        $f14, 0x1B0($s0)
    ctx->pc = 0x2c7aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2c7aac: 0xc60f01b4  lwc1        $f15, 0x1B4($s0)
    ctx->pc = 0x2c7aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2c7ab0: 0xc050e48  jal         func_143920
    ctx->pc = 0x2C7AB0u;
    SET_GPR_U32(ctx, 31, 0x2C7AB8u);
    ctx->pc = 0x2C7AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7AB0u;
            // 0x2c7ab4: 0xc60c01a0  lwc1        $f12, 0x1A0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x143920u;
    if (runtime->hasFunction(0x143920u)) {
        auto targetFn = runtime->lookupFunction(0x143920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7AB8u; }
        if (ctx->pc != 0x2C7AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetFogParam__FffUcUcUcff_0x143920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7AB8u; }
        if (ctx->pc != 0x2C7AB8u) { return; }
    }
    ctx->pc = 0x2C7AB8u;
label_2c7ab8:
    // 0x2c7ab8: 0x3c024743  lui         $v0, 0x4743
    ctx->pc = 0x2c7ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18243 << 16));
    // 0x2c7abc: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x2c7abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x2c7ac0: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x2c7ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
    // 0x2c7ac4: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2c7ac4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c7ac8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2c7ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2c7acc: 0xc050d80  jal         func_143600
    ctx->pc = 0x2C7ACCu;
    SET_GPR_U32(ctx, 31, 0x2C7AD4u);
    ctx->pc = 0x2C7AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7ACCu;
            // 0x2c7ad0: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x143600u;
    if (runtime->hasFunction(0x143600u)) {
        auto targetFn = runtime->lookupFunction(0x143600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7AD4u; }
        if (ctx->pc != 0x2C7AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetRenderInfo__Ffff_0x143600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7AD4u; }
        if (ctx->pc != 0x2C7AD4u) { return; }
    }
    ctx->pc = 0x2C7AD4u;
label_2c7ad4:
    // 0x2c7ad4: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x2c7ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2c7ad8: 0xc050dd0  jal         func_143740
    ctx->pc = 0x2C7AD8u;
    SET_GPR_U32(ctx, 31, 0x2C7AE0u);
    ctx->pc = 0x2C7ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7AD8u;
            // 0x2c7adc: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143740u;
    if (runtime->hasFunction(0x143740u)) {
        auto targetFn = runtime->lookupFunction(0x143740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7AE0u; }
        if (ctx->pc != 0x2C7AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetLight__FPA4_fPA4_f_0x143740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7AE0u; }
        if (ctx->pc != 0x2C7AE0u) { return; }
    }
    ctx->pc = 0x2C7AE0u;
label_2c7ae0:
    // 0x2c7ae0: 0xc050dec  jal         func_1437B0
    ctx->pc = 0x2C7AE0u;
    SET_GPR_U32(ctx, 31, 0x2C7AE8u);
    ctx->pc = 0x2C7AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7AE0u;
            // 0x2c7ae4: 0x26040180  addiu       $a0, $s0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437B0u;
    if (runtime->hasFunction(0x1437B0u)) {
        auto targetFn = runtime->lookupFunction(0x1437B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7AE8u; }
        if (ctx->pc != 0x2C7AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetAmbient__FPf_0x1437b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7AE8u; }
        if (ctx->pc != 0x2C7AE8u) { return; }
    }
    ctx->pc = 0x2C7AE8u;
label_2c7ae8:
    // 0x2c7ae8: 0xc050e14  jal         func_143850
    ctx->pc = 0x2C7AE8u;
    SET_GPR_U32(ctx, 31, 0x2C7AF0u);
    ctx->pc = 0x143850u;
    if (runtime->hasFunction(0x143850u)) {
        auto targetFn = runtime->lookupFunction(0x143850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7AF0u; }
        if (ctx->pc != 0x2C7AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgResetPlight__Fv_0x143850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7AF0u; }
        if (ctx->pc != 0x2C7AF0u) { return; }
    }
    ctx->pc = 0x2C7AF0u;
label_2c7af0:
    // 0x2c7af0: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x2c7af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x2c7af4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C7AF4u;
    {
        const bool branch_taken_0x2c7af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7AF4u;
            // 0x2c7af8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7af4) {
            ctx->pc = 0x2C7B2Cu;
            goto label_2c7b2c;
        }
    }
    ctx->pc = 0x2C7AFCu;
    // 0x2c7afc: 0xc050e40  jal         func_143900
    ctx->pc = 0x2C7AFCu;
    SET_GPR_U32(ctx, 31, 0x2C7B04u);
    ctx->pc = 0x143900u;
    if (runtime->hasFunction(0x143900u)) {
        auto targetFn = runtime->lookupFunction(0x143900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7B04u; }
        if (ctx->pc != 0x2C7B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPlightEnable__Fi_0x143900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7B04u; }
        if (ctx->pc != 0x2C7B04u) { return; }
    }
    ctx->pc = 0x2C7B04u;
label_2c7b04:
    // 0x2c7b04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c7b04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7b08: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c7b08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7b0c:
    // 0x2c7b0c: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x2c7b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2c7b10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c7b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7b14: 0xc050e04  jal         func_143810
    ctx->pc = 0x2C7B14u;
    SET_GPR_U32(ctx, 31, 0x2C7B1Cu);
    ctx->pc = 0x2C7B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7B14u;
            // 0x2c7b18: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143810u;
    if (runtime->hasFunction(0x143810u)) {
        auto targetFn = runtime->lookupFunction(0x143810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7B1Cu; }
        if (ctx->pc != 0x2C7B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPlight__FiP13mgPOINT_LIGHT_0x143810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7B1Cu; }
        if (ctx->pc != 0x2C7B1Cu) { return; }
    }
    ctx->pc = 0x2C7B1Cu;
label_2c7b1c:
    // 0x2c7b1c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c7b1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c7b20: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x2c7b20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c7b24: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2C7B24u;
    {
        const bool branch_taken_0x2c7b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7B24u;
            // 0x2c7b28: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7b24) {
            ctx->pc = 0x2C7B0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c7b0c;
        }
    }
    ctx->pc = 0x2C7B2Cu;
label_2c7b2c:
    // 0x2c7b2c: 0x0  nop
    ctx->pc = 0x2c7b2cu;
    // NOP
    // 0x2c7b30: 0xc050d9c  jal         func_143670
    ctx->pc = 0x2C7B30u;
    SET_GPR_U32(ctx, 31, 0x2C7B38u);
    ctx->pc = 0x2C7B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7B30u;
            // 0x2c7b34: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143670u;
    if (runtime->hasFunction(0x143670u)) {
        auto targetFn = runtime->lookupFunction(0x143670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7B38u; }
        if (ctx->pc != 0x2C7B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetBackGround__FPf_0x143670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7B38u; }
        if (ctx->pc != 0x2C7B38u) { return; }
    }
    ctx->pc = 0x2C7B38u;
label_2c7b38:
    // 0x2c7b38: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c7b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c7b3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c7b3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c7b40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c7b40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7b44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c7b44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c7b48: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7B48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7B48u;
            // 0x2c7b4c: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C7B50u;
}
