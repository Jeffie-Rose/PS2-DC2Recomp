#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckStatusAttr__14CActiveMonsterFv
// Address: 0x1d9b80 - 0x1d9d64
void CheckStatusAttr__14CActiveMonsterFv_0x1d9b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckStatusAttr__14CActiveMonsterFv_0x1d9b80");
#endif

    switch (ctx->pc) {
        case 0x1d9bdcu: goto label_1d9bdc;
        case 0x1d9c14u: goto label_1d9c14;
        case 0x1d9c48u: goto label_1d9c48;
        case 0x1d9c68u: goto label_1d9c68;
        case 0x1d9cb0u: goto label_1d9cb0;
        case 0x1d9d24u: goto label_1d9d24;
        default: break;
    }

    ctx->pc = 0x1d9b80u;

    // 0x1d9b80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d9b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d9b84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d9b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d9b88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d9b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d9b8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d9b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d9b90: 0x8c83133c  lw          $v1, 0x133C($a0)
    ctx->pc = 0x1d9b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4924)));
    // 0x1d9b94: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1d9b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1d9b98: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x1D9B98u;
    {
        const bool branch_taken_0x1d9b98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9B98u;
            // 0x1d9b9c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9b98) {
            ctx->pc = 0x1D9C68u;
            goto label_1d9c68;
        }
    }
    ctx->pc = 0x1D9BA0u;
    // 0x1d9ba0: 0x86231340  lh          $v1, 0x1340($s1)
    ctx->pc = 0x1d9ba0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4928)));
    // 0x1d9ba4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d9ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d9ba8: 0xa6231340  sh          $v1, 0x1340($s1)
    ctx->pc = 0x1d9ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4928), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d9bac: 0x86231340  lh          $v1, 0x1340($s1)
    ctx->pc = 0x1d9bacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4928)));
    // 0x1d9bb0: 0x28630078  slti        $v1, $v1, 0x78
    ctx->pc = 0x1d9bb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)120) ? 1 : 0);
    // 0x1d9bb4: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1D9BB4u;
    {
        const bool branch_taken_0x1d9bb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9BB4u;
            // 0x1d9bb8: 0x24050060  addiu       $a1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9bb4) {
            ctx->pc = 0x1D9C68u;
            goto label_1d9c68;
        }
    }
    ctx->pc = 0x1D9BBCu;
    // 0x1d9bbc: 0x26240734  addiu       $a0, $s1, 0x734
    ctx->pc = 0x1d9bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1844));
    // 0x1d9bc0: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1d9bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d9bc4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1d9bc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9bc8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d9bc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9bcc: 0x2409001e  addiu       $t1, $zero, 0x1E
    ctx->pc = 0x1d9bccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d9bd0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d9bd0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9bd4: 0xc070488  jal         func_1C1220
    ctx->pc = 0x1D9BD4u;
    SET_GPR_U32(ctx, 31, 0x1D9BDCu);
    ctx->pc = 0x1D9BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9BD4u;
            // 0x1d9bd8: 0xa6201340  sh          $zero, 0x1340($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 4928), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1220u;
    if (runtime->hasFunction(0x1C1220u)) {
        auto targetFn = runtime->lookupFunction(0x1C1220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9BDCu; }
        if (ctx->pc != 0x1D9BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAnim__12CPalletAnimeFssssss_0x1c1220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9BDCu; }
        if (ctx->pc != 0x1D9BDCu) { return; }
    }
    ctx->pc = 0x1D9BDCu;
label_1d9bdc:
    // 0x1d9bdc: 0x8e301314  lw          $s0, 0x1314($s1)
    ctx->pc = 0x1d9bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4884)));
    // 0x1d9be0: 0x1a000021  blez        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1D9BE0u;
    {
        const bool branch_taken_0x1d9be0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1d9be0) {
            ctx->pc = 0x1D9C68u;
            goto label_1d9c68;
        }
    }
    ctx->pc = 0x1D9BE8u;
    // 0x1d9be8: 0xc6221310  lwc1        $f2, 0x1310($s1)
    ctx->pc = 0x1d9be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d9bec: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x1d9becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x1d9bf0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d9bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1d9bf4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1d9bf4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9bf8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d9bf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d9bfc: 0x0  nop
    ctx->pc = 0x1d9bfcu;
    // NOP
    // 0x1d9c00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d9c00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d9c04: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1d9c04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1d9c08: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1d9c08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1d9c0c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1D9C0Cu;
    SET_GPR_U32(ctx, 31, 0x1D9C14u);
    ctx->pc = 0x1D9C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9C0Cu;
            // 0x1d9c10: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C14u; }
        if (ctx->pc != 0x1D9C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C14u; }
        if (ctx->pc != 0x1D9C14u) { return; }
    }
    ctx->pc = 0x1D9C14u;
label_1d9c14:
    // 0x1d9c14: 0xae221314  sw          $v0, 0x1314($s1)
    ctx->pc = 0x1d9c14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4884), GPR_U32(ctx, 2));
    // 0x1d9c18: 0x8e231314  lw          $v1, 0x1314($s1)
    ctx->pc = 0x1d9c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4884)));
    // 0x1d9c1c: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D9C1Cu;
    {
        const bool branch_taken_0x1d9c1c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1D9C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9C1Cu;
            // 0x1d9c20: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9c1c) {
            ctx->pc = 0x1D9C28u;
            goto label_1d9c28;
        }
    }
    ctx->pc = 0x1D9C24u;
    // 0x1d9c24: 0xae231314  sw          $v1, 0x1314($s1)
    ctx->pc = 0x1d9c24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4884), GPR_U32(ctx, 3));
label_1d9c28:
    // 0x1d9c28: 0x8e231314  lw          $v1, 0x1314($s1)
    ctx->pc = 0x1d9c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4884)));
    // 0x1d9c2c: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x1d9c2cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1d9c30: 0x1a00000d  blez        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D9C30u;
    {
        const bool branch_taken_0x1d9c30 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1D9C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9C30u;
            // 0x1d9c34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9c30) {
            ctx->pc = 0x1D9C68u;
            goto label_1d9c68;
        }
    }
    ctx->pc = 0x1D9C38u;
    // 0x1d9c38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9c3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d9c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9c40: 0xc05d420  jal         func_175080
    ctx->pc = 0x1D9C40u;
    SET_GPR_U32(ctx, 31, 0x1D9C48u);
    ctx->pc = 0x1D9C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9C40u;
            // 0x1d9c44: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (runtime->hasFunction(0x175080u)) {
        auto targetFn = runtime->lookupFunction(0x175080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C48u; }
        if (ctx->pc != 0x1D9C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiiPf_0x175080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C48u; }
        if (ctx->pc != 0x1D9C48u) { return; }
    }
    ctx->pc = 0x1D9C48u;
label_1d9c48:
    // 0x1d9c48: 0xc6210110  lwc1        $f1, 0x110($s1)
    ctx->pc = 0x1d9c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9c4c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d9c4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9c50: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1d9c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9c54: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1d9c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d9c58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9c5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d9c5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d9c60: 0xc0777d8  jal         func_1DDF60
    ctx->pc = 0x1D9C60u;
    SET_GPR_U32(ctx, 31, 0x1D9C68u);
    ctx->pc = 0x1D9C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9C60u;
            // 0x1d9c64: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DDF60u;
    if (runtime->hasFunction(0x1DDF60u)) {
        auto targetFn = runtime->lookupFunction(0x1DDF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C68u; }
        if (ctx->pc != 0x1D9C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        HitScoreSet__FPfii_0x1ddf60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C68u; }
        if (ctx->pc != 0x1D9C68u) { return; }
    }
    ctx->pc = 0x1D9C68u;
label_1d9c68:
    // 0x1d9c68: 0x8e23133c  lw          $v1, 0x133C($s1)
    ctx->pc = 0x1d9c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4924)));
    // 0x1d9c6c: 0x30630028  andi        $v1, $v1, 0x28
    ctx->pc = 0x1d9c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)40);
    // 0x1d9c70: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D9C70u;
    {
        const bool branch_taken_0x1d9c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9c70) {
            ctx->pc = 0x1D9CDCu;
            goto label_1d9cdc;
        }
    }
    ctx->pc = 0x1D9C78u;
    // 0x1d9c78: 0x86231342  lh          $v1, 0x1342($s1)
    ctx->pc = 0x1d9c78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4930)));
    // 0x1d9c7c: 0x2409002d  addiu       $t1, $zero, 0x2D
    ctx->pc = 0x1d9c7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1d9c80: 0x69001a  div         $zero, $v1, $t1
    ctx->pc = 0x1d9c80u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d9c84: 0x0  nop
    ctx->pc = 0x1d9c84u;
    // NOP
    // 0x1d9c88: 0x0  nop
    ctx->pc = 0x1d9c88u;
    // NOP
    // 0x1d9c8c: 0x1810  mfhi        $v1
    ctx->pc = 0x1d9c8cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1d9c90: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D9C90u;
    {
        const bool branch_taken_0x1d9c90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9C90u;
            // 0x1d9c94: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9c90) {
            ctx->pc = 0x1D9CB0u;
            goto label_1d9cb0;
        }
    }
    ctx->pc = 0x1D9C98u;
    // 0x1d9c98: 0x26240734  addiu       $a0, $s1, 0x734
    ctx->pc = 0x1d9c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1844));
    // 0x1d9c9c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1d9c9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ca0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1d9ca0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ca4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d9ca4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9ca8: 0xc070488  jal         func_1C1220
    ctx->pc = 0x1D9CA8u;
    SET_GPR_U32(ctx, 31, 0x1D9CB0u);
    ctx->pc = 0x1D9CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9CA8u;
            // 0x1d9cac: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1220u;
    if (runtime->hasFunction(0x1C1220u)) {
        auto targetFn = runtime->lookupFunction(0x1C1220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9CB0u; }
        if (ctx->pc != 0x1D9CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAnim__12CPalletAnimeFssssss_0x1c1220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9CB0u; }
        if (ctx->pc != 0x1D9CB0u) { return; }
    }
    ctx->pc = 0x1D9CB0u;
label_1d9cb0:
    // 0x1d9cb0: 0x86231342  lh          $v1, 0x1342($s1)
    ctx->pc = 0x1d9cb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4930)));
    // 0x1d9cb4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d9cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d9cb8: 0xa6231342  sh          $v1, 0x1342($s1)
    ctx->pc = 0x1d9cb8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4930), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d9cbc: 0x86231342  lh          $v1, 0x1342($s1)
    ctx->pc = 0x1d9cbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4930)));
    // 0x1d9cc0: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D9CC0u;
    {
        const bool branch_taken_0x1d9cc0 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1d9cc0) {
            ctx->pc = 0x1D9CDCu;
            goto label_1d9cdc;
        }
    }
    ctx->pc = 0x1D9CC8u;
    // 0x1d9cc8: 0xa6201342  sh          $zero, 0x1342($s1)
    ctx->pc = 0x1d9cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4930), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d9ccc: 0x2403ffd7  addiu       $v1, $zero, -0x29
    ctx->pc = 0x1d9cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967255));
    // 0x1d9cd0: 0x8e24133c  lw          $a0, 0x133C($s1)
    ctx->pc = 0x1d9cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4924)));
    // 0x1d9cd4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d9cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d9cd8: 0xae23133c  sw          $v1, 0x133C($s1)
    ctx->pc = 0x1d9cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4924), GPR_U32(ctx, 3));
label_1d9cdc:
    // 0x1d9cdc: 0x8e23133c  lw          $v1, 0x133C($s1)
    ctx->pc = 0x1d9cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4924)));
    // 0x1d9ce0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1d9ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1d9ce4: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D9CE4u;
    {
        const bool branch_taken_0x1d9ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9ce4) {
            ctx->pc = 0x1D9D50u;
            goto label_1d9d50;
        }
    }
    ctx->pc = 0x1D9CECu;
    // 0x1d9cec: 0x86231344  lh          $v1, 0x1344($s1)
    ctx->pc = 0x1d9cecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4932)));
    // 0x1d9cf0: 0x2409002d  addiu       $t1, $zero, 0x2D
    ctx->pc = 0x1d9cf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1d9cf4: 0x69001a  div         $zero, $v1, $t1
    ctx->pc = 0x1d9cf4u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d9cf8: 0x0  nop
    ctx->pc = 0x1d9cf8u;
    // NOP
    // 0x1d9cfc: 0x0  nop
    ctx->pc = 0x1d9cfcu;
    // NOP
    // 0x1d9d00: 0x1810  mfhi        $v1
    ctx->pc = 0x1d9d00u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1d9d04: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D9D04u;
    {
        const bool branch_taken_0x1d9d04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9D04u;
            // 0x1d9d08: 0x240500a0  addiu       $a1, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9d04) {
            ctx->pc = 0x1D9D24u;
            goto label_1d9d24;
        }
    }
    ctx->pc = 0x1D9D0Cu;
    // 0x1d9d0c: 0x26240734  addiu       $a0, $s1, 0x734
    ctx->pc = 0x1d9d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1844));
    // 0x1d9d10: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1d9d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d9d14: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1d9d14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d18: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d9d18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9d1c: 0xc070488  jal         func_1C1220
    ctx->pc = 0x1D9D1Cu;
    SET_GPR_U32(ctx, 31, 0x1D9D24u);
    ctx->pc = 0x1D9D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9D1Cu;
            // 0x1d9d20: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1220u;
    if (runtime->hasFunction(0x1C1220u)) {
        auto targetFn = runtime->lookupFunction(0x1C1220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9D24u; }
        if (ctx->pc != 0x1D9D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAnim__12CPalletAnimeFssssss_0x1c1220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9D24u; }
        if (ctx->pc != 0x1D9D24u) { return; }
    }
    ctx->pc = 0x1D9D24u;
label_1d9d24:
    // 0x1d9d24: 0x86231344  lh          $v1, 0x1344($s1)
    ctx->pc = 0x1d9d24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4932)));
    // 0x1d9d28: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d9d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d9d2c: 0xa6231344  sh          $v1, 0x1344($s1)
    ctx->pc = 0x1d9d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4932), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d9d30: 0x86231344  lh          $v1, 0x1344($s1)
    ctx->pc = 0x1d9d30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4932)));
    // 0x1d9d34: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D9D34u;
    {
        const bool branch_taken_0x1d9d34 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1d9d34) {
            ctx->pc = 0x1D9D50u;
            goto label_1d9d50;
        }
    }
    ctx->pc = 0x1D9D3Cu;
    // 0x1d9d3c: 0xa6201344  sh          $zero, 0x1344($s1)
    ctx->pc = 0x1d9d3cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4932), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d9d40: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1d9d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1d9d44: 0x8e24133c  lw          $a0, 0x133C($s1)
    ctx->pc = 0x1d9d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4924)));
    // 0x1d9d48: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d9d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d9d4c: 0xae23133c  sw          $v1, 0x133C($s1)
    ctx->pc = 0x1d9d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4924), GPR_U32(ctx, 3));
label_1d9d50:
    // 0x1d9d50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d9d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9d54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d9d54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9d58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d9d58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9D5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9D5Cu;
            // 0x1d9d60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D9D64u;
}
