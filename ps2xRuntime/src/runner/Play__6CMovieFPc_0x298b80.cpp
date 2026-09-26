#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Play__6CMovieFPc
// Address: 0x298b80 - 0x298d74
void Play__6CMovieFPc_0x298b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Play__6CMovieFPc_0x298b80");
#endif

    switch (ctx->pc) {
        case 0x298c10u: goto label_298c10;
        case 0x298c34u: goto label_298c34;
        case 0x298c6cu: goto label_298c6c;
        case 0x298c94u: goto label_298c94;
        case 0x298cd0u: goto label_298cd0;
        case 0x298cf4u: goto label_298cf4;
        case 0x298d08u: goto label_298d08;
        case 0x298d18u: goto label_298d18;
        case 0x298d2cu: goto label_298d2c;
        case 0x298d3cu: goto label_298d3c;
        default: break;
    }

    ctx->pc = 0x298b80u;

    // 0x298b80: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x298b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x298b84: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x298b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x298b88: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x298b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x298b8c: 0x34633900  ori         $v1, $v1, 0x3900
    ctx->pc = 0x298b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14592);
    // 0x298b90: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x298b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x298b94: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x298b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x298b98: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x298b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x298b9c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x298b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x298ba0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x298ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x298ba4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x298ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x298ba8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x298ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x298bac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x298bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x298bb0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x298bb0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x298bb4: 0x14600065  bnez        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x298BB4u;
    {
        const bool branch_taken_0x298bb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x298BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298BB4u;
            // 0x298bb8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298bb4) {
            ctx->pc = 0x298D4Cu;
            goto label_298d4c;
        }
    }
    ctx->pc = 0x298BBCu;
    // 0x298bbc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x298bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x298bc0: 0xaf8598e8  sw          $a1, -0x6718($gp)
    ctx->pc = 0x298bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940904), GPR_U32(ctx, 5));
    // 0x298bc4: 0x246392a0  addiu       $v1, $v1, -0x6D60
    ctx->pc = 0x298bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939296));
    // 0x298bc8: 0x27b60084  addiu       $s6, $sp, 0x84
    ctx->pc = 0x298bc8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x298bcc: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x298bccu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x298bd0: 0x26820100  addiu       $v0, $s4, 0x100
    ctx->pc = 0x298bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
    // 0x298bd4: 0x27b50088  addiu       $s5, $sp, 0x88
    ctx->pc = 0x298bd4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x298bd8: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x298bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x298bdc: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x298bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x298be0: 0x27b0008c  addiu       $s0, $sp, 0x8C
    ctx->pc = 0x298be0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x298be4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x298be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x298be8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x298be8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x298bec: 0x27b10094  addiu       $s1, $sp, 0x94
    ctx->pc = 0x298becu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x298bf0: 0x27b20090  addiu       $s2, $sp, 0x90
    ctx->pc = 0x298bf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x298bf4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x298bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x298bf8: 0x27b300a0  addiu       $s3, $sp, 0xA0
    ctx->pc = 0x298bf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x298bfc: 0x27820000  addiu       $v0, $gp, 0x0
    ctx->pc = 0x298bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 0));
    // 0x298c00: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x298c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x298c04: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x298c04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x298c08: 0xc043fb8  jal         func_10FEE0
    ctx->pc = 0x298C08u;
    SET_GPR_U32(ctx, 31, 0x298C10u);
    ctx->pc = 0x298C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298C08u;
            // 0x298c0c: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FEE0u;
    if (runtime->hasFunction(0x10FEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10FEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298C10u; }
        if (ctx->pc != 0x298C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateThread_0x10fee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298C10u; }
        if (ctx->pc != 0x298C10u) { return; }
    }
    ctx->pc = 0x298C10u;
label_298c10:
    // 0x298c10: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x298c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x298c14: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x298c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x298c18: 0x34633908  ori         $v1, $v1, 0x3908
    ctx->pc = 0x298c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14600);
    // 0x298c1c: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x298c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
    // 0x298c20: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x298c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x298c24: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x298c24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x298c28: 0x8c243908  lw          $a0, 0x3908($at)
    ctx->pc = 0x298c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 14600)));
    // 0x298c2c: 0xc043fc0  jal         func_10FF00
    ctx->pc = 0x298C2Cu;
    SET_GPR_U32(ctx, 31, 0x298C34u);
    ctx->pc = 0x298C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298C2Cu;
            // 0x298c30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF00u;
    if (runtime->hasFunction(0x10FF00u)) {
        auto targetFn = runtime->lookupFunction(0x10FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298C34u; }
        if (ctx->pc != 0x298C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartThread_0x10ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298C34u; }
        if (ctx->pc != 0x298C34u) { return; }
    }
    ctx->pc = 0x298C34u;
label_298c34:
    // 0x298c34: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x298c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x298c38: 0x26830900  addiu       $v1, $s4, 0x900
    ctx->pc = 0x298c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 2304));
    // 0x298c3c: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x298c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x298c40: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x298c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x298c44: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x298c44u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x298c48: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x298c48u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x298c4c: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x298c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x298c50: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x298c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x298c54: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x298c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x298c58: 0x27820000  addiu       $v0, $gp, 0x0
    ctx->pc = 0x298c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 0));
    // 0x298c5c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x298c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x298c60: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x298c60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x298c64: 0xc043fb8  jal         func_10FEE0
    ctx->pc = 0x298C64u;
    SET_GPR_U32(ctx, 31, 0x298C6Cu);
    ctx->pc = 0x298C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298C64u;
            // 0x298c68: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FEE0u;
    if (runtime->hasFunction(0x10FEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10FEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298C6Cu; }
        if (ctx->pc != 0x298C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateThread_0x10fee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298C6Cu; }
        if (ctx->pc != 0x298C6Cu) { return; }
    }
    ctx->pc = 0x298C6Cu;
label_298c6c:
    // 0x298c6c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x298c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x298c70: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x298c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x298c74: 0x34633904  ori         $v1, $v1, 0x3904
    ctx->pc = 0x298c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14596);
    // 0x298c78: 0x3c0501f0  lui         $a1, 0x1F0
    ctx->pc = 0x298c78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)496 << 16));
    // 0x298c7c: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x298c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x298c80: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x298c80u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
    // 0x298c84: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x298c84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x298c88: 0x8c243904  lw          $a0, 0x3904($at)
    ctx->pc = 0x298c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 14596)));
    // 0x298c8c: 0xc043fc0  jal         func_10FF00
    ctx->pc = 0x298C8Cu;
    SET_GPR_U32(ctx, 31, 0x298C94u);
    ctx->pc = 0x298C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298C8Cu;
            // 0x298c90: 0x24a55350  addiu       $a1, $a1, 0x5350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF00u;
    if (runtime->hasFunction(0x10FF00u)) {
        auto targetFn = runtime->lookupFunction(0x10FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298C94u; }
        if (ctx->pc != 0x298C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartThread_0x10ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298C94u; }
        if (ctx->pc != 0x298C94u) { return; }
    }
    ctx->pc = 0x298C94u;
label_298c94:
    // 0x298c94: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x298c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x298c98: 0xaf809920  sw          $zero, -0x66E0($gp)
    ctx->pc = 0x298c98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940960), GPR_U32(ctx, 0));
    // 0x298c9c: 0x24429330  addiu       $v0, $v0, -0x6CD0
    ctx->pc = 0x298c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939440));
    // 0x298ca0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x298ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x298ca4: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x298ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x298ca8: 0x26824900  addiu       $v0, $s4, 0x4900
    ctx->pc = 0x298ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 18688));
    // 0x298cac: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x298cacu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x298cb0: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x298cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x298cb4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x298cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x298cb8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x298cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x298cbc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x298cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x298cc0: 0x27820000  addiu       $v0, $gp, 0x0
    ctx->pc = 0x298cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 0));
    // 0x298cc4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x298cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x298cc8: 0xc043fb8  jal         func_10FEE0
    ctx->pc = 0x298CC8u;
    SET_GPR_U32(ctx, 31, 0x298CD0u);
    ctx->pc = 0x298CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298CC8u;
            // 0x298ccc: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FEE0u;
    if (runtime->hasFunction(0x10FEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10FEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298CD0u; }
        if (ctx->pc != 0x298CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateThread_0x10fee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298CD0u; }
        if (ctx->pc != 0x298CD0u) { return; }
    }
    ctx->pc = 0x298CD0u;
label_298cd0:
    // 0x298cd0: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x298cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x298cd4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x298cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x298cd8: 0x3463390c  ori         $v1, $v1, 0x390C
    ctx->pc = 0x298cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14604);
    // 0x298cdc: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x298cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
    // 0x298ce0: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x298ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x298ce4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x298ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x298ce8: 0x8c24390c  lw          $a0, 0x390C($at)
    ctx->pc = 0x298ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 14604)));
    // 0x298cec: 0xc043fc0  jal         func_10FF00
    ctx->pc = 0x298CECu;
    SET_GPR_U32(ctx, 31, 0x298CF4u);
    ctx->pc = 0x298CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298CECu;
            // 0x298cf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF00u;
    if (runtime->hasFunction(0x10FF00u)) {
        auto targetFn = runtime->lookupFunction(0x10FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298CF4u; }
        if (ctx->pc != 0x298CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartThread_0x10ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298CF4u; }
        if (ctx->pc != 0x298CF4u) { return; }
    }
    ctx->pc = 0x298CF4u;
label_298cf4:
    // 0x298cf4: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x298cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x298cf8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x298cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x298cfc: 0x24a59800  addiu       $a1, $a1, -0x6800
    ctx->pc = 0x298cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940672));
    // 0x298d00: 0xc043f70  jal         func_10FDC0
    ctx->pc = 0x298D00u;
    SET_GPR_U32(ctx, 31, 0x298D08u);
    ctx->pc = 0x298D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298D00u;
            // 0x298d04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FDC0u;
    if (runtime->hasFunction(0x10FDC0u)) {
        auto targetFn = runtime->lookupFunction(0x10FDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298D08u; }
        if (ctx->pc != 0x298D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddIntcHandler_0x10fdc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298D08u; }
        if (ctx->pc != 0x298D08u) { return; }
    }
    ctx->pc = 0x298D08u;
label_298d08:
    // 0x298d08: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x298d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x298d0c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x298d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x298d10: 0xc04430a  jal         func_110C28
    ctx->pc = 0x298D10u;
    SET_GPR_U32(ctx, 31, 0x298D18u);
    ctx->pc = 0x298D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298D10u;
            // 0x298d14: 0xac225404  sw          $v0, 0x5404($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 21508), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110C28u;
    if (runtime->hasFunction(0x110C28u)) {
        auto targetFn = runtime->lookupFunction(0x110C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298D18u; }
        if (ctx->pc != 0x298D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableIntc_0x110c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298D18u; }
        if (ctx->pc != 0x298D18u) { return; }
    }
    ctx->pc = 0x298D18u;
label_298d18:
    // 0x298d18: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x298d18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x298d1c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x298d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x298d20: 0x24a598e0  addiu       $a1, $a1, -0x6720
    ctx->pc = 0x298d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940896));
    // 0x298d24: 0xc043f7c  jal         func_10FDF0
    ctx->pc = 0x298D24u;
    SET_GPR_U32(ctx, 31, 0x298D2Cu);
    ctx->pc = 0x298D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298D24u;
            // 0x298d28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FDF0u;
    if (runtime->hasFunction(0x10FDF0u)) {
        auto targetFn = runtime->lookupFunction(0x10FDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298D2Cu; }
        if (ctx->pc != 0x298D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddDmacHandler_0x10fdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298D2Cu; }
        if (ctx->pc != 0x298D2Cu) { return; }
    }
    ctx->pc = 0x298D2Cu;
label_298d2c:
    // 0x298d2c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x298d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x298d30: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x298d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x298d34: 0xc04433e  jal         func_110CF8
    ctx->pc = 0x298D34u;
    SET_GPR_U32(ctx, 31, 0x298D3Cu);
    ctx->pc = 0x298D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298D34u;
            // 0x298d38: 0xac225400  sw          $v0, 0x5400($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 21504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110CF8u;
    if (runtime->hasFunction(0x110CF8u)) {
        auto targetFn = runtime->lookupFunction(0x110CF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298D3Cu; }
        if (ctx->pc != 0x298D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableDmac_0x110cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298D3Cu; }
        if (ctx->pc != 0x298D3Cu) { return; }
    }
    ctx->pc = 0x298D3Cu;
label_298d3c:
    // 0x298d3c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x298d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x298d40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x298d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298d44: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x298d44u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
    // 0x298d48: 0xa0233900  sb          $v1, 0x3900($at)
    ctx->pc = 0x298d48u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14592), (uint8_t)GPR_U32(ctx, 3));
label_298d4c:
    // 0x298d4c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x298d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x298d50: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x298d50u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x298d54: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x298d54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x298d58: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x298d58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x298d5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x298d5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x298d60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x298d60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298d64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x298d64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298d68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x298d68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x298D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298D6Cu;
            // 0x298d70: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x298D74u;
}
