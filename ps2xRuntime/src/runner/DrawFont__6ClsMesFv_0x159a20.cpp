#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawFont__6ClsMesFv
// Address: 0x159a20 - 0x159f58
void DrawFont__6ClsMesFv_0x159a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawFont__6ClsMesFv_0x159a20");
#endif

    switch (ctx->pc) {
        case 0x159a70u: goto label_159a70;
        case 0x159a78u: goto label_159a78;
        case 0x159a88u: goto label_159a88;
        case 0x159a94u: goto label_159a94;
        case 0x159aa0u: goto label_159aa0;
        case 0x159bf4u: goto label_159bf4;
        case 0x159c18u: goto label_159c18;
        case 0x159c8cu: goto label_159c8c;
        case 0x159d48u: goto label_159d48;
        case 0x159d60u: goto label_159d60;
        case 0x159d94u: goto label_159d94;
        case 0x159da8u: goto label_159da8;
        case 0x159dccu: goto label_159dcc;
        case 0x159de8u: goto label_159de8;
        case 0x159e10u: goto label_159e10;
        case 0x159e30u: goto label_159e30;
        case 0x159e74u: goto label_159e74;
        case 0x159ea4u: goto label_159ea4;
        case 0x159f04u: goto label_159f04;
        case 0x159f28u: goto label_159f28;
        default: break;
    }

    ctx->pc = 0x159a20u;

    // 0x159a20: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x159a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
    // 0x159a24: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x159a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x159a28: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x159a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x159a2c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x159a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x159a30: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x159a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x159a34: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x159a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x159a38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x159a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x159a3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x159a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x159a40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x159a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x159a44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x159a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x159a48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x159a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x159a4c: 0x8f838904  lw          $v1, -0x76FC($gp)
    ctx->pc = 0x159a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936836)));
    // 0x159a50: 0x14600135  bnez        $v1, . + 4 + (0x135 << 2)
    ctx->pc = 0x159A50u;
    {
        const bool branch_taken_0x159a50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x159A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159A50u;
            // 0x159a54: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159a50) {
            ctx->pc = 0x159F28u;
            goto label_159f28;
        }
    }
    ctx->pc = 0x159A58u;
    // 0x159a58: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x159a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x159a5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x159a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159a60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x159a60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159a64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x159a64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159a68: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x159A68u;
    SET_GPR_U32(ctx, 31, 0x159A70u);
    ctx->pc = 0x159A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159A68u;
            // 0x159a6c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159A70u; }
        if (ctx->pc != 0x159A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159A70u; }
        if (ctx->pc != 0x159A70u) { return; }
    }
    ctx->pc = 0x159A70u;
label_159a70:
    // 0x159a70: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x159A70u;
    SET_GPR_U32(ctx, 31, 0x159A78u);
    ctx->pc = 0x159A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159A70u;
            // 0x159a74: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159A78u; }
        if (ctx->pc != 0x159A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159A78u; }
        if (ctx->pc != 0x159A78u) { return; }
    }
    ctx->pc = 0x159A78u;
label_159a78:
    // 0x159a78: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x159a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x159a7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x159a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159a80: 0xc054514  jal         func_151450
    ctx->pc = 0x159A80u;
    SET_GPR_U32(ctx, 31, 0x159A88u);
    ctx->pc = 0x159A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159A80u;
            // 0x159a84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151450u;
    if (runtime->hasFunction(0x151450u)) {
        auto targetFn = runtime->lookupFunction(0x151450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159A88u; }
        if (ctx->pc != 0x159A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MySetPrim__FP11mgCDrawPrimii_0x151450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159A88u; }
        if (ctx->pc != 0x159A88u) { return; }
    }
    ctx->pc = 0x159A88u;
label_159a88:
    // 0x159a88: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x159a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x159a8c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x159A8Cu;
    SET_GPR_U32(ctx, 31, 0x159A94u);
    ctx->pc = 0x159A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159A8Cu;
            // 0x159a90: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159A94u; }
        if (ctx->pc != 0x159A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159A94u; }
        if (ctx->pc != 0x159A94u) { return; }
    }
    ctx->pc = 0x159A94u;
label_159a94:
    // 0x159a94: 0x8e9001d8  lw          $s0, 0x1D8($s4)
    ctx->pc = 0x159a94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 472)));
    // 0x159a98: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x159A98u;
    {
        const bool branch_taken_0x159a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159A98u;
            // 0x159a9c: 0x10b900  sll         $s7, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159a98) {
            ctx->pc = 0x159F10u;
            goto label_159f10;
        }
    }
    ctx->pc = 0x159AA0u;
label_159aa0:
    // 0x159aa0: 0x8e8200c4  lw          $v0, 0xC4($s4)
    ctx->pc = 0x159aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
    // 0x159aa4: 0x86d201e4  lh          $s2, 0x1E4($s6)
    ctx->pc = 0x159aa4u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 484)));
    // 0x159aa8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x159AA8u;
    {
        const bool branch_taken_0x159aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159AA8u;
            // 0x159aac: 0x242001a  div         $zero, $s2, $v0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x159aa8) {
            ctx->pc = 0x159AB4u;
            goto label_159ab4;
        }
    }
    ctx->pc = 0x159AB0u;
    // 0x159ab0: 0x1cd  break       0, 7
    ctx->pc = 0x159ab0u;
    runtime->handleBreak(rdram, ctx);
label_159ab4:
    // 0x159ab4: 0x2012  mflo        $a0
    ctx->pc = 0x159ab4u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x159ab8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x159ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x159abc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x159abcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x159ac0: 0x2839821  addu        $s3, $s4, $v1
    ctx->pc = 0x159ac0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x159ac4: 0x8e631c84  lw          $v1, 0x1C84($s3)
    ctx->pc = 0x159ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 7300)));
    // 0x159ac8: 0x1062010e  beq         $v1, $v0, . + 4 + (0x10E << 2)
    ctx->pc = 0x159AC8u;
    {
        const bool branch_taken_0x159ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x159ac8) {
            ctx->pc = 0x159F04u;
            goto label_159f04;
        }
    }
    ctx->pc = 0x159AD0u;
    // 0x159ad0: 0x86d101e2  lh          $s1, 0x1E2($s6)
    ctx->pc = 0x159ad0u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 482)));
    // 0x159ad4: 0x26621c34  addiu       $v0, $s3, 0x1C34
    ctx->pc = 0x159ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 7220));
    // 0x159ad8: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x159ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x159adc: 0x8e621c34  lw          $v0, 0x1C34($s3)
    ctx->pc = 0x159adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 7220)));
    // 0x159ae0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x159AE0u;
    {
        const bool branch_taken_0x159ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159AE0u;
            // 0x159ae4: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ae0) {
            ctx->pc = 0x159AFCu;
            goto label_159afc;
        }
    }
    ctx->pc = 0x159AE8u;
    // 0x159ae8: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x159ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x159aec: 0x8c621b94  lw          $v0, 0x1B94($v1)
    ctx->pc = 0x159aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7060)));
    // 0x159af0: 0x8c721b98  lw          $s2, 0x1B98($v1)
    ctx->pc = 0x159af0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7064)));
    // 0x159af4: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x159AF4u;
    {
        const bool branch_taken_0x159af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159AF4u;
            // 0x159af8: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159af4) {
            ctx->pc = 0x159C38u;
            goto label_159c38;
        }
    }
    ctx->pc = 0x159AFCu;
label_159afc:
    // 0x159afc: 0x0  nop
    ctx->pc = 0x159afcu;
    // NOP
    // 0x159b00: 0x8e821b30  lw          $v0, 0x1B30($s4)
    ctx->pc = 0x159b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6960)));
    // 0x159b04: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x159B04u;
    {
        const bool branch_taken_0x159b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x159b04) {
            ctx->pc = 0x159BF4u;
            goto label_159bf4;
        }
    }
    ctx->pc = 0x159B0Cu;
    // 0x159b0c: 0x8e841b34  lw          $a0, 0x1B34($s4)
    ctx->pc = 0x159b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6964)));
    // 0x159b10: 0x8e831b3c  lw          $v1, 0x1B3C($s4)
    ctx->pc = 0x159b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6972)));
    // 0x159b14: 0x8e871b38  lw          $a3, 0x1B38($s4)
    ctx->pc = 0x159b14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6968)));
    // 0x159b18: 0x8e821b40  lw          $v0, 0x1B40($s4)
    ctx->pc = 0x159b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6976)));
    // 0x159b1c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x159b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x159b20: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x159B20u;
    {
        const bool branch_taken_0x159b20 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x159B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159B20u;
            // 0x159b24: 0xe23021  addu        $a2, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159b20) {
            ctx->pc = 0x159B2Cu;
            goto label_159b2c;
        }
    }
    ctx->pc = 0x159B28u;
    // 0x159b28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x159b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159b2c:
    // 0x159b2c: 0x0  nop
    ctx->pc = 0x159b2cu;
    // NOP
    // 0x159b30: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x159B30u;
    {
        const bool branch_taken_0x159b30 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x159b30) {
            ctx->pc = 0x159B3Cu;
            goto label_159b3c;
        }
    }
    ctx->pc = 0x159B38u;
    // 0x159b38: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x159b38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159b3c:
    // 0x159b3c: 0x0  nop
    ctx->pc = 0x159b3cu;
    // NOP
    // 0x159b40: 0x8f828780  lw          $v0, -0x7880($gp)
    ctx->pc = 0x159b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x159b44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x159b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x159b48: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x159b48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x159b4c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x159B4Cu;
    {
        const bool branch_taken_0x159b4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x159b4c) {
            ctx->pc = 0x159B58u;
            goto label_159b58;
        }
    }
    ctx->pc = 0x159B54u;
    // 0x159b54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x159b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_159b58:
    // 0x159b58: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x159b58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x159b5c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x159B5Cu;
    {
        const bool branch_taken_0x159b5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x159b5c) {
            ctx->pc = 0x159B68u;
            goto label_159b68;
        }
    }
    ctx->pc = 0x159B64u;
    // 0x159b64: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x159b64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_159b68:
    // 0x159b68: 0x4e10002  bgez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x159B68u;
    {
        const bool branch_taken_0x159b68 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x159b68) {
            ctx->pc = 0x159B74u;
            goto label_159b74;
        }
    }
    ctx->pc = 0x159B70u;
    // 0x159b70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x159b70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159b74:
    // 0x159b74: 0x0  nop
    ctx->pc = 0x159b74u;
    // NOP
    // 0x159b78: 0x4c10002  bgez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x159B78u;
    {
        const bool branch_taken_0x159b78 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x159b78) {
            ctx->pc = 0x159B84u;
            goto label_159b84;
        }
    }
    ctx->pc = 0x159B80u;
    // 0x159b80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x159b80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159b84:
    // 0x159b84: 0x0  nop
    ctx->pc = 0x159b84u;
    // NOP
    // 0x159b88: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x159b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x159b8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x159b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x159b90: 0x47082a  slt         $at, $v0, $a3
    ctx->pc = 0x159b90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x159b94: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x159B94u;
    {
        const bool branch_taken_0x159b94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x159b94) {
            ctx->pc = 0x159BA0u;
            goto label_159ba0;
        }
    }
    ctx->pc = 0x159B9Cu;
    // 0x159b9c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x159b9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_159ba0:
    // 0x159ba0: 0x46082a  slt         $at, $v0, $a2
    ctx->pc = 0x159ba0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x159ba4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x159BA4u;
    {
        const bool branch_taken_0x159ba4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x159ba4) {
            ctx->pc = 0x159BB0u;
            goto label_159bb0;
        }
    }
    ctx->pc = 0x159BACu;
    // 0x159bac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x159bacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_159bb0:
    // 0x159bb0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x159bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x159bb4: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x159bb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x159bb8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x159bb8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x159bbc: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x159bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x159bc0: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x159bc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x159bc4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x159bc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x159bc8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x159bc8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x159bcc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x159bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x159bd0: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x159bd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x159bd4: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x159bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x159bd8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x159bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x159bdc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x159bdcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x159be0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x159be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x159be4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x159be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x159be8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x159be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x159bec: 0xc04d360  jal         func_134D80
    ctx->pc = 0x159BECu;
    SET_GPR_U32(ctx, 31, 0x159BF4u);
    ctx->pc = 0x159BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159BECu;
            // 0x159bf0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D80u;
    if (runtime->hasFunction(0x134D80u)) {
        auto targetFn = runtime->lookupFunction(0x134D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159BF4u; }
        if (ctx->pc != 0x159BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Direct__11mgCDrawPrimFUlUl_0x134d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159BF4u; }
        if (ctx->pc != 0x159BF4u) { return; }
    }
    ctx->pc = 0x159BF4u;
label_159bf4:
    // 0x159bf4: 0x0  nop
    ctx->pc = 0x159bf4u;
    // NOP
    // 0x159bf8: 0x8e8300b8  lw          $v1, 0xB8($s4)
    ctx->pc = 0x159bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
    // 0x159bfc: 0x8e8200bc  lw          $v0, 0xBC($s4)
    ctx->pc = 0x159bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 188)));
    // 0x159c00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x159c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159c04: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x159c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x159c08: 0x27a60234  addiu       $a2, $sp, 0x234
    ctx->pc = 0x159c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 564));
    // 0x159c0c: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x159c0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x159c10: 0xc056bfc  jal         func_15AFF0
    ctx->pc = 0x159C10u;
    SET_GPR_U32(ctx, 31, 0x159C18u);
    ctx->pc = 0x159C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159C10u;
            // 0x159c14: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AFF0u;
    if (runtime->hasFunction(0x15AFF0u)) {
        auto targetFn = runtime->lookupFunction(0x15AFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159C18u; }
        if (ctx->pc != 0x159C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcCenteringXY__6ClsMesFPiPi_0x15aff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159C18u; }
        if (ctx->pc != 0x159C18u) { return; }
    }
    ctx->pc = 0x159C18u;
label_159c18:
    // 0x159c18: 0x8fa40230  lw          $a0, 0x230($sp)
    ctx->pc = 0x159c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x159c1c: 0x8fa30234  lw          $v1, 0x234($sp)
    ctx->pc = 0x159c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x159c20: 0x8e8217fc  lw          $v0, 0x17FC($s4)
    ctx->pc = 0x159c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6140)));
    // 0x159c24: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x159c24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x159c28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x159C28u;
    {
        const bool branch_taken_0x159c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159C28u;
            // 0x159c2c: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159c28) {
            ctx->pc = 0x159C38u;
            goto label_159c38;
        }
    }
    ctx->pc = 0x159C30u;
    // 0x159c30: 0x8e621b44  lw          $v0, 0x1B44($s3)
    ctx->pc = 0x159c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6980)));
    // 0x159c34: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x159c34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_159c38:
    // 0x159c38: 0x96c301e0  lhu         $v1, 0x1E0($s6)
    ctx->pc = 0x159c38u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 480)));
    // 0x159c3c: 0x3402fd00  ori         $v0, $zero, 0xFD00
    ctx->pc = 0x159c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64768);
    // 0x159c40: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x159c40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x159c44: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x159C44u;
    {
        const bool branch_taken_0x159c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159C44u;
            // 0x159c48: 0x26d501e0  addiu       $s5, $s6, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159c44) {
            ctx->pc = 0x159DB0u;
            goto label_159db0;
        }
    }
    ctx->pc = 0x159C4Cu;
    // 0x159c4c: 0x3401fd32  ori         $at, $zero, 0xFD32
    ctx->pc = 0x159c4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64818);
    // 0x159c50: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x159c50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x159c54: 0x10200056  beqz        $at, . + 4 + (0x56 << 2)
    ctx->pc = 0x159C54u;
    {
        const bool branch_taken_0x159c54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x159C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159C54u;
            // 0x159c58: 0x3402fd26  ori         $v0, $zero, 0xFD26 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64806);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159c54) {
            ctx->pc = 0x159DB0u;
            goto label_159db0;
        }
    }
    ctx->pc = 0x159C5Cu;
    // 0x159c5c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x159C5Cu;
    {
        const bool branch_taken_0x159c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x159C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159C5Cu;
            // 0x159c60: 0x3402fd27  ori         $v0, $zero, 0xFD27 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64807);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159c5c) {
            ctx->pc = 0x159C74u;
            goto label_159c74;
        }
    }
    ctx->pc = 0x159C64u;
    // 0x159c64: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x159C64u;
    {
        const bool branch_taken_0x159c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x159C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159C64u;
            // 0x159c68: 0x3402fd28  ori         $v0, $zero, 0xFD28 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64808);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159c64) {
            ctx->pc = 0x159C74u;
            goto label_159c74;
        }
    }
    ctx->pc = 0x159C6Cu;
    // 0x159c6c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x159C6Cu;
    {
        const bool branch_taken_0x159c6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x159c6c) {
            ctx->pc = 0x159C98u;
            goto label_159c98;
        }
    }
    ctx->pc = 0x159C74u;
label_159c74:
    // 0x159c74: 0x0  nop
    ctx->pc = 0x159c74u;
    // NOP
    // 0x159c78: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x159c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x159c7c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x159c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159c80: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x159c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159c84: 0xc0565d4  jal         func_159750
    ctx->pc = 0x159C84u;
    SET_GPR_U32(ctx, 31, 0x159C8Cu);
    ctx->pc = 0x159C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159C84u;
            // 0x159c88: 0x27a70238  addiu       $a3, $sp, 0x238 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159750u;
    if (runtime->hasFunction(0x159750u)) {
        auto targetFn = runtime->lookupFunction(0x159750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159C8Cu; }
        if (ctx->pc != 0x159C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontColor__6ClsMesFiPi_0x159750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159C8Cu; }
        if (ctx->pc != 0x159C8Cu) { return; }
    }
    ctx->pc = 0x159C8Cu;
label_159c8c:
    // 0x159c8c: 0xdfa20220  ld          $v0, 0x220($sp)
    ctx->pc = 0x159c8cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x159c90: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x159C90u;
    {
        const bool branch_taken_0x159c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159C90u;
            // 0x159c94: 0xffa20210  sd          $v0, 0x210($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159c90) {
            ctx->pc = 0x159CC8u;
            goto label_159cc8;
        }
    }
    ctx->pc = 0x159C98u;
label_159c98:
    // 0x159c98: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x159c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x159c9c: 0xa3a20212  sb          $v0, 0x212($sp)
    ctx->pc = 0x159c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 530), (uint8_t)GPR_U32(ctx, 2));
    // 0x159ca0: 0xa3a20211  sb          $v0, 0x211($sp)
    ctx->pc = 0x159ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 529), (uint8_t)GPR_U32(ctx, 2));
    // 0x159ca4: 0xa3a20210  sb          $v0, 0x210($sp)
    ctx->pc = 0x159ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 528), (uint8_t)GPR_U32(ctx, 2));
    // 0x159ca8: 0x92821800  lbu         $v0, 0x1800($s4)
    ctx->pc = 0x159ca8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 6144)));
    // 0x159cac: 0x219c0  sll         $v1, $v0, 7
    ctx->pc = 0x159cacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x159cb0: 0x211fc  dsll32      $v0, $v0, 7
    ctx->pc = 0x159cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 7));
    // 0x159cb4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x159CB4u;
    {
        const bool branch_taken_0x159cb4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x159CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159CB4u;
            // 0x159cb8: 0x211ff  dsra32      $v0, $v0, 7 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159cb4) {
            ctx->pc = 0x159CC4u;
            goto label_159cc4;
        }
    }
    ctx->pc = 0x159CBCu;
    // 0x159cbc: 0x2462007f  addiu       $v0, $v1, 0x7F
    ctx->pc = 0x159cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x159cc0: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x159cc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_159cc4:
    // 0x159cc4: 0xa3a20213  sb          $v0, 0x213($sp)
    ctx->pc = 0x159cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 531), (uint8_t)GPR_U32(ctx, 2));
label_159cc8:
    // 0x159cc8: 0x96a50000  lhu         $a1, 0x0($s5)
    ctx->pc = 0x159cc8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x159ccc: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x159cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x159cd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x159cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159cd4: 0x24a48000  addiu       $a0, $a1, -0x8000
    ctx->pc = 0x159cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x159cd8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x159CD8u;
    {
        const bool branch_taken_0x159cd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x159CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159CD8u;
            // 0x159cdc: 0x24848300  addiu       $a0, $a0, -0x7D00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159cd8) {
            ctx->pc = 0x159D00u;
            goto label_159d00;
        }
    }
    ctx->pc = 0x159CE0u;
    // 0x159ce0: 0x3402fd06  ori         $v0, $zero, 0xFD06
    ctx->pc = 0x159ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64774);
    // 0x159ce4: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x159CE4u;
    {
        const bool branch_taken_0x159ce4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x159ce4) {
            ctx->pc = 0x159CF0u;
            goto label_159cf0;
        }
    }
    ctx->pc = 0x159CECu;
    // 0x159cec: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x159cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_159cf0:
    // 0x159cf0: 0x3402fd08  ori         $v0, $zero, 0xFD08
    ctx->pc = 0x159cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64776);
    // 0x159cf4: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x159CF4u;
    {
        const bool branch_taken_0x159cf4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x159cf4) {
            ctx->pc = 0x159D00u;
            goto label_159d00;
        }
    }
    ctx->pc = 0x159CFCu;
    // 0x159cfc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x159cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_159d00:
    // 0x159d00: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x159d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x159d04: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x159d04u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x159d08: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x159d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x159d0c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x159d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x159d10: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x159d10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x159d14: 0x244265c0  addiu       $v0, $v0, 0x65C0
    ctx->pc = 0x159d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26048));
    // 0x159d18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x159d18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x159d1c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x159d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x159d20: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x159d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x159d24: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x159d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x159d28: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x159d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x159d2c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x159d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x159d30: 0x8c75000c  lw          $s5, 0xC($v1)
    ctx->pc = 0x159d30u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x159d34: 0x8c730010  lw          $s3, 0x10($v1)
    ctx->pc = 0x159d34u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x159d38: 0x8c7e0014  lw          $fp, 0x14($v1)
    ctx->pc = 0x159d38u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x159d3c: 0x8c760018  lw          $s6, 0x18($v1)
    ctx->pc = 0x159d3cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x159d40: 0xc0b551c  jal         func_2D5470
    ctx->pc = 0x159D40u;
    SET_GPR_U32(ctx, 31, 0x159D48u);
    ctx->pc = 0x159D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159D40u;
            // 0x159d44: 0x24842b00  addiu       $a0, $a0, 0x2B00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5470u;
    if (runtime->hasFunction(0x2D5470u)) {
        auto targetFn = runtime->lookupFunction(0x2D5470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159D48u; }
        if (ctx->pc != 0x159D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MySetTex__FPcP11mgCDrawPrim_0x2d5470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159D48u; }
        if (ctx->pc != 0x159D48u) { return; }
    }
    ctx->pc = 0x159D48u;
label_159d48:
    // 0x159d48: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x159d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x159d4c: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x159d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x159d50: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x159d50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x159d54: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x159d54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159d58: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x159D58u;
    SET_GPR_U32(ctx, 31, 0x159D60u);
    ctx->pc = 0x159D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159D58u;
            // 0x159d5c: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159D60u; }
        if (ctx->pc != 0x159D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159D60u; }
        if (ctx->pc != 0x159D60u) { return; }
    }
    ctx->pc = 0x159D60u;
label_159d60:
    // 0x159d60: 0x8e8200c4  lw          $v0, 0xC4($s4)
    ctx->pc = 0x159d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
    // 0x159d64: 0x23e2821  addu        $a1, $s1, $fp
    ctx->pc = 0x159d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
    // 0x159d68: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x159d68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x159d6c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x159D6Cu;
    {
        const bool branch_taken_0x159d6c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x159D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159D6Cu;
            // 0x159d70: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159d6c) {
            ctx->pc = 0x159D7Cu;
            goto label_159d7c;
        }
    }
    ctx->pc = 0x159D74u;
    // 0x159d74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x159d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x159d78: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x159d78u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_159d7c:
    // 0x159d7c: 0x2561021  addu        $v0, $s2, $s6
    ctx->pc = 0x159d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x159d80: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x159d80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159d84: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x159d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x159d88: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x159d88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159d8c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x159D8Cu;
    SET_GPR_U32(ctx, 31, 0x159D94u);
    ctx->pc = 0x159D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159D8Cu;
            // 0x159d90: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159D94u; }
        if (ctx->pc != 0x159D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159D94u; }
        if (ctx->pc != 0x159D94u) { return; }
    }
    ctx->pc = 0x159D94u;
label_159d94:
    // 0x159d94: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x159d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x159d98: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x159d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x159d9c: 0x27a60200  addiu       $a2, $sp, 0x200
    ctx->pc = 0x159d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x159da0: 0xc054590  jal         func_151640
    ctx->pc = 0x159DA0u;
    SET_GPR_U32(ctx, 31, 0x159DA8u);
    ctx->pc = 0x159DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159DA0u;
            // 0x159da4: 0x27a70210  addiu       $a3, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151640u;
    if (runtime->hasFunction(0x151640u)) {
        auto targetFn = runtime->lookupFunction(0x151640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159DA8u; }
        if (ctx->pc != 0x159DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSpriteEasy__FP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159DA8u; }
        if (ctx->pc != 0x159DA8u) { return; }
    }
    ctx->pc = 0x159DA8u;
label_159da8:
    // 0x159da8: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x159DA8u;
    {
        const bool branch_taken_0x159da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159da8) {
            ctx->pc = 0x159EA4u;
            goto label_159ea4;
        }
    }
    ctx->pc = 0x159DB0u;
label_159db0:
    // 0x159db0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x159db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159db4: 0xafa2023c  sw          $v0, 0x23C($sp)
    ctx->pc = 0x159db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 2));
    // 0x159db8: 0x27a40228  addiu       $a0, $sp, 0x228
    ctx->pc = 0x159db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
    // 0x159dbc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x159dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159dc0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x159dc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159dc4: 0xc0565d4  jal         func_159750
    ctx->pc = 0x159DC4u;
    SET_GPR_U32(ctx, 31, 0x159DCCu);
    ctx->pc = 0x159DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159DC4u;
            // 0x159dc8: 0x27a7023c  addiu       $a3, $sp, 0x23C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 572));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159750u;
    if (runtime->hasFunction(0x159750u)) {
        auto targetFn = runtime->lookupFunction(0x159750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159DCCu; }
        if (ctx->pc != 0x159DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontColor__6ClsMesFiPi_0x159750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159DCCu; }
        if (ctx->pc != 0x159DCCu) { return; }
    }
    ctx->pc = 0x159DCCu;
label_159dcc:
    // 0x159dcc: 0x27a20228  addiu       $v0, $sp, 0x228
    ctx->pc = 0x159dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
    // 0x159dd0: 0x27a30218  addiu       $v1, $sp, 0x218
    ctx->pc = 0x159dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
    // 0x159dd4: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x159dd4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159dd8: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x159dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x159ddc: 0x96a50000  lhu         $a1, 0x0($s5)
    ctx->pc = 0x159ddcu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x159de0: 0xc0b5238  jal         func_2D48E0
    ctx->pc = 0x159DE0u;
    SET_GPR_U32(ctx, 31, 0x159DE8u);
    ctx->pc = 0x159DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159DE0u;
            // 0x159de4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D48E0u;
    if (runtime->hasFunction(0x2D48E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D48E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159DE8u; }
        if (ctx->pc != 0x159DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDigitNo__5CFontFi_0x2d48e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159DE8u; }
        if (ctx->pc != 0x159DE8u) { return; }
    }
    ctx->pc = 0x159DE8u;
label_159de8:
    // 0x159de8: 0x8e831ad8  lw          $v1, 0x1AD8($s4)
    ctx->pc = 0x159de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6872)));
    // 0x159dec: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x159decu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159df0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x159df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159df4: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x159DF4u;
    {
        const bool branch_taken_0x159df4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x159DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159DF4u;
            // 0x159df8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159df4) {
            ctx->pc = 0x159E38u;
            goto label_159e38;
        }
    }
    ctx->pc = 0x159DFCu;
    // 0x159dfc: 0x12c2000e  beq         $s6, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x159DFCu;
    {
        const bool branch_taken_0x159dfc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x159E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159DFCu;
            // 0x159e00: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159dfc) {
            ctx->pc = 0x159E38u;
            goto label_159e38;
        }
    }
    ctx->pc = 0x159E04u;
    // 0x159e04: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x159e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x159e08: 0xc0b551c  jal         func_2D5470
    ctx->pc = 0x159E08u;
    SET_GPR_U32(ctx, 31, 0x159E10u);
    ctx->pc = 0x159E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159E08u;
            // 0x159e0c: 0x24842b00  addiu       $a0, $a0, 0x2B00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5470u;
    if (runtime->hasFunction(0x2D5470u)) {
        auto targetFn = runtime->lookupFunction(0x2D5470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159E10u; }
        if (ctx->pc != 0x159E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MySetTex__FPcP11mgCDrawPrim_0x2d5470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159E10u; }
        if (ctx->pc != 0x159E10u) { return; }
    }
    ctx->pc = 0x159E10u;
label_159e10:
    // 0x159e10: 0x92891800  lbu         $t1, 0x1800($s4)
    ctx->pc = 0x159e10u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 6144)));
    // 0x159e14: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x159e14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159e18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x159e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159e1c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x159e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x159e20: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x159e20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159e24: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x159e24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159e28: 0xc056aec  jal         func_15ABB0
    ctx->pc = 0x159E28u;
    SET_GPR_U32(ctx, 31, 0x159E30u);
    ctx->pc = 0x159E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159E28u;
            // 0x159e2c: 0x27aa0218  addiu       $t2, $sp, 0x218 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABB0u;
    if (runtime->hasFunction(0x15ABB0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159E30u; }
        if (ctx->pc != 0x159E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDigit__6ClsMesFP11mgCDrawPrimiiiiP10RGBAQ_TYPE_0x15abb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159E30u; }
        if (ctx->pc != 0x159E30u) { return; }
    }
    ctx->pc = 0x159E30u;
label_159e30:
    // 0x159e30: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x159E30u;
    {
        const bool branch_taken_0x159e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159e30) {
            ctx->pc = 0x159EA4u;
            goto label_159ea4;
        }
    }
    ctx->pc = 0x159E38u;
label_159e38:
    // 0x159e38: 0x92821800  lbu         $v0, 0x1800($s4)
    ctx->pc = 0x159e38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 6144)));
    // 0x159e3c: 0xae820090  sw          $v0, 0x90($s4)
    ctx->pc = 0x159e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 2));
    // 0x159e40: 0x8e621e64  lw          $v0, 0x1E64($s3)
    ctx->pc = 0x159e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 7780)));
    // 0x159e44: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x159e44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x159e48: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x159E48u;
    {
        const bool branch_taken_0x159e48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x159e48) {
            ctx->pc = 0x159E7Cu;
            goto label_159e7c;
        }
    }
    ctx->pc = 0x159E50u;
    // 0x159e50: 0x96a60000  lhu         $a2, 0x0($s5)
    ctx->pc = 0x159e50u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x159e54: 0x304b00ff  andi        $t3, $v0, 0xFF
    ctx->pc = 0x159e54u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x159e58: 0x8fa9023c  lw          $t1, 0x23C($sp)
    ctx->pc = 0x159e58u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x159e5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x159e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159e60: 0xdfaa0218  ld          $t2, 0x218($sp)
    ctx->pc = 0x159e60u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x159e64: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x159e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x159e68: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x159e68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159e6c: 0xc0b547c  jal         func_2D51F0
    ctx->pc = 0x159E6Cu;
    SET_GPR_U32(ctx, 31, 0x159E74u);
    ctx->pc = 0x159E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159E6Cu;
            // 0x159e70: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D51F0u;
    if (runtime->hasFunction(0x2D51F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D51F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159E74u; }
        if (ctx->pc != 0x159E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawChar__5CFontFP11mgCDrawPrimiiii10RGBAQ_TYPEUc_0x2d51f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159E74u; }
        if (ctx->pc != 0x159E74u) { return; }
    }
    ctx->pc = 0x159E74u;
label_159e74:
    // 0x159e74: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x159E74u;
    {
        const bool branch_taken_0x159e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159e74) {
            ctx->pc = 0x159EA4u;
            goto label_159ea4;
        }
    }
    ctx->pc = 0x159E7Cu;
label_159e7c:
    // 0x159e7c: 0x0  nop
    ctx->pc = 0x159e7cu;
    // NOP
    // 0x159e80: 0x96a60000  lhu         $a2, 0x0($s5)
    ctx->pc = 0x159e80u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x159e84: 0x8fa9023c  lw          $t1, 0x23C($sp)
    ctx->pc = 0x159e84u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x159e88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x159e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159e8c: 0xdfaa0218  ld          $t2, 0x218($sp)
    ctx->pc = 0x159e8cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x159e90: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x159e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x159e94: 0x928b1800  lbu         $t3, 0x1800($s4)
    ctx->pc = 0x159e94u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 6144)));
    // 0x159e98: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x159e98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159e9c: 0xc0b547c  jal         func_2D51F0
    ctx->pc = 0x159E9Cu;
    SET_GPR_U32(ctx, 31, 0x159EA4u);
    ctx->pc = 0x159EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159E9Cu;
            // 0x159ea0: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D51F0u;
    if (runtime->hasFunction(0x2D51F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D51F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159EA4u; }
        if (ctx->pc != 0x159EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawChar__5CFontFP11mgCDrawPrimiiii10RGBAQ_TYPEUc_0x2d51f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159EA4u; }
        if (ctx->pc != 0x159EA4u) { return; }
    }
    ctx->pc = 0x159EA4u;
label_159ea4:
    // 0x159ea4: 0x0  nop
    ctx->pc = 0x159ea4u;
    // NOP
    // 0x159ea8: 0xae910128  sw          $s1, 0x128($s4)
    ctx->pc = 0x159ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 296), GPR_U32(ctx, 17));
    // 0x159eac: 0xae92012c  sw          $s2, 0x12C($s4)
    ctx->pc = 0x159eacu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 18));
    // 0x159eb0: 0x8e821b30  lw          $v0, 0x1B30($s4)
    ctx->pc = 0x159eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6960)));
    // 0x159eb4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x159EB4u;
    {
        const bool branch_taken_0x159eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x159eb4) {
            ctx->pc = 0x159F04u;
            goto label_159f04;
        }
    }
    ctx->pc = 0x159EBCu;
    // 0x159ebc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x159ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x159ec0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x159ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159ec4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x159EC4u;
    {
        const bool branch_taken_0x159ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x159ec4) {
            ctx->pc = 0x159F04u;
            goto label_159f04;
        }
    }
    ctx->pc = 0x159ECCu;
    // 0x159ecc: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x159eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x159ed0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x159ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x159ed4: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x159ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x159ed8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x159ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x159edc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x159edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x159ee0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x159ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x159ee4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x159ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x159ee8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x159ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x159eec: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x159eecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x159ef0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x159ef0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x159ef4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x159ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x159ef8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x159ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x159efc: 0xc04d360  jal         func_134D80
    ctx->pc = 0x159EFCu;
    SET_GPR_U32(ctx, 31, 0x159F04u);
    ctx->pc = 0x159F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159EFCu;
            // 0x159f00: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D80u;
    if (runtime->hasFunction(0x134D80u)) {
        auto targetFn = runtime->lookupFunction(0x134D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159F04u; }
        if (ctx->pc != 0x159F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Direct__11mgCDrawPrimFUlUl_0x134d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159F04u; }
        if (ctx->pc != 0x159F04u) { return; }
    }
    ctx->pc = 0x159F04u;
label_159f04:
    // 0x159f04: 0x0  nop
    ctx->pc = 0x159f04u;
    // NOP
    // 0x159f08: 0x26f70010  addiu       $s7, $s7, 0x10
    ctx->pc = 0x159f08u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x159f0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x159f0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_159f10:
    // 0x159f10: 0x8e8201d4  lw          $v0, 0x1D4($s4)
    ctx->pc = 0x159f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 468)));
    // 0x159f14: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x159f14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x159f18: 0x1440fee1  bnez        $v0, . + 4 + (-0x11F << 2)
    ctx->pc = 0x159F18u;
    {
        const bool branch_taken_0x159f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159F18u;
            // 0x159f1c: 0x297b021  addu        $s6, $s4, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159f18) {
            ctx->pc = 0x159AA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_159aa0;
        }
    }
    ctx->pc = 0x159F20u;
    // 0x159f20: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x159F20u;
    SET_GPR_U32(ctx, 31, 0x159F28u);
    ctx->pc = 0x159F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159F20u;
            // 0x159f24: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159F28u; }
        if (ctx->pc != 0x159F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159F28u; }
        if (ctx->pc != 0x159F28u) { return; }
    }
    ctx->pc = 0x159F28u;
label_159f28:
    // 0x159f28: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x159f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x159f2c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x159f2cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x159f30: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x159f30u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159f34: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x159f34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x159f38: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x159f38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x159f3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x159f3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x159f40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x159f40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159f44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x159f44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159f48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x159f48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159f4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x159f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159f50: 0x3e00008  jr          $ra
    ctx->pc = 0x159F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159F50u;
            // 0x159f54: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x159F58u;
}
