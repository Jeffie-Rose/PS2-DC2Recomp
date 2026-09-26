#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHK_CAMERA_COL__FP12RS_STACKDATAi
// Address: 0x278990 - 0x278b08
void ps2__CHK_CAMERA_COL__FP12RS_STACKDATAi_0x278990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHK_CAMERA_COL__FP12RS_STACKDATAi_0x278990");
#endif

    switch (ctx->pc) {
        case 0x278990u: goto label_278990;
        case 0x278994u: goto label_278994;
        case 0x278998u: goto label_278998;
        case 0x27899cu: goto label_27899c;
        case 0x2789a0u: goto label_2789a0;
        case 0x2789a4u: goto label_2789a4;
        case 0x2789a8u: goto label_2789a8;
        case 0x2789acu: goto label_2789ac;
        case 0x2789b0u: goto label_2789b0;
        case 0x2789b4u: goto label_2789b4;
        case 0x2789b8u: goto label_2789b8;
        case 0x2789bcu: goto label_2789bc;
        case 0x2789c0u: goto label_2789c0;
        case 0x2789c4u: goto label_2789c4;
        case 0x2789c8u: goto label_2789c8;
        case 0x2789ccu: goto label_2789cc;
        case 0x2789d0u: goto label_2789d0;
        case 0x2789d4u: goto label_2789d4;
        case 0x2789d8u: goto label_2789d8;
        case 0x2789dcu: goto label_2789dc;
        case 0x2789e0u: goto label_2789e0;
        case 0x2789e4u: goto label_2789e4;
        case 0x2789e8u: goto label_2789e8;
        case 0x2789ecu: goto label_2789ec;
        case 0x2789f0u: goto label_2789f0;
        case 0x2789f4u: goto label_2789f4;
        case 0x2789f8u: goto label_2789f8;
        case 0x2789fcu: goto label_2789fc;
        case 0x278a00u: goto label_278a00;
        case 0x278a04u: goto label_278a04;
        case 0x278a08u: goto label_278a08;
        case 0x278a0cu: goto label_278a0c;
        case 0x278a10u: goto label_278a10;
        case 0x278a14u: goto label_278a14;
        case 0x278a18u: goto label_278a18;
        case 0x278a1cu: goto label_278a1c;
        case 0x278a20u: goto label_278a20;
        case 0x278a24u: goto label_278a24;
        case 0x278a28u: goto label_278a28;
        case 0x278a2cu: goto label_278a2c;
        case 0x278a30u: goto label_278a30;
        case 0x278a34u: goto label_278a34;
        case 0x278a38u: goto label_278a38;
        case 0x278a3cu: goto label_278a3c;
        case 0x278a40u: goto label_278a40;
        case 0x278a44u: goto label_278a44;
        case 0x278a48u: goto label_278a48;
        case 0x278a4cu: goto label_278a4c;
        case 0x278a50u: goto label_278a50;
        case 0x278a54u: goto label_278a54;
        case 0x278a58u: goto label_278a58;
        case 0x278a5cu: goto label_278a5c;
        case 0x278a60u: goto label_278a60;
        case 0x278a64u: goto label_278a64;
        case 0x278a68u: goto label_278a68;
        case 0x278a6cu: goto label_278a6c;
        case 0x278a70u: goto label_278a70;
        case 0x278a74u: goto label_278a74;
        case 0x278a78u: goto label_278a78;
        case 0x278a7cu: goto label_278a7c;
        case 0x278a80u: goto label_278a80;
        case 0x278a84u: goto label_278a84;
        case 0x278a88u: goto label_278a88;
        case 0x278a8cu: goto label_278a8c;
        case 0x278a90u: goto label_278a90;
        case 0x278a94u: goto label_278a94;
        case 0x278a98u: goto label_278a98;
        case 0x278a9cu: goto label_278a9c;
        case 0x278aa0u: goto label_278aa0;
        case 0x278aa4u: goto label_278aa4;
        case 0x278aa8u: goto label_278aa8;
        case 0x278aacu: goto label_278aac;
        case 0x278ab0u: goto label_278ab0;
        case 0x278ab4u: goto label_278ab4;
        case 0x278ab8u: goto label_278ab8;
        case 0x278abcu: goto label_278abc;
        case 0x278ac0u: goto label_278ac0;
        case 0x278ac4u: goto label_278ac4;
        case 0x278ac8u: goto label_278ac8;
        case 0x278accu: goto label_278acc;
        case 0x278ad0u: goto label_278ad0;
        case 0x278ad4u: goto label_278ad4;
        case 0x278ad8u: goto label_278ad8;
        case 0x278adcu: goto label_278adc;
        case 0x278ae0u: goto label_278ae0;
        case 0x278ae4u: goto label_278ae4;
        case 0x278ae8u: goto label_278ae8;
        case 0x278aecu: goto label_278aec;
        case 0x278af0u: goto label_278af0;
        case 0x278af4u: goto label_278af4;
        case 0x278af8u: goto label_278af8;
        case 0x278afcu: goto label_278afc;
        case 0x278b00u: goto label_278b00;
        case 0x278b04u: goto label_278b04;
        default: break;
    }

    ctx->pc = 0x278990u;

label_278990:
    // 0x278990: 0x27bdaf80  addiu       $sp, $sp, -0x5080
    ctx->pc = 0x278990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294946688));
label_278994:
    // 0x278994: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x278994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_278998:
    // 0x278998: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x278998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27899c:
    // 0x27899c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27899cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2789a0:
    // 0x2789a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2789a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2789a4:
    // 0x2789a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2789a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2789a8:
    // 0x2789a8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2789a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2789ac:
    // 0x2789ac: 0xc097e34  jal         func_25F8D0
label_2789b0:
    if (ctx->pc == 0x2789B0u) {
        ctx->pc = 0x2789B0u;
            // 0x2789b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2789B4u;
        goto label_2789b4;
    }
    ctx->pc = 0x2789ACu;
    SET_GPR_U32(ctx, 31, 0x2789B4u);
    ctx->pc = 0x2789B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2789ACu;
            // 0x2789b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2789B4u; }
        if (ctx->pc != 0x2789B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2789B4u; }
        if (ctx->pc != 0x2789B4u) { return; }
    }
    ctx->pc = 0x2789B4u;
label_2789b4:
    // 0x2789b4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2789b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2789b8:
    // 0x2789b8: 0xc097e34  jal         func_25F8D0
label_2789bc:
    if (ctx->pc == 0x2789BCu) {
        ctx->pc = 0x2789BCu;
            // 0x2789bc: 0x26250018  addiu       $a1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->pc = 0x2789C0u;
        goto label_2789c0;
    }
    ctx->pc = 0x2789B8u;
    SET_GPR_U32(ctx, 31, 0x2789C0u);
    ctx->pc = 0x2789BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2789B8u;
            // 0x2789bc: 0x26250018  addiu       $a1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2789C0u; }
        if (ctx->pc != 0x2789C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2789C0u; }
        if (ctx->pc != 0x2789C0u) { return; }
    }
    ctx->pc = 0x2789C0u;
label_2789c0:
    // 0x2789c0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2789c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2789c4:
    // 0x2789c4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2789c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2789c8:
    // 0x2789c8: 0xc04c018  jal         func_130060
label_2789cc:
    if (ctx->pc == 0x2789CCu) {
        ctx->pc = 0x2789CCu;
            // 0x2789cc: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->pc = 0x2789D0u;
        goto label_2789d0;
    }
    ctx->pc = 0x2789C8u;
    SET_GPR_U32(ctx, 31, 0x2789D0u);
    ctx->pc = 0x2789CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2789C8u;
            // 0x2789cc: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2789D0u; }
        if (ctx->pc != 0x2789D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2789D0u; }
        if (ctx->pc != 0x2789D0u) { return; }
    }
    ctx->pc = 0x2789D0u;
label_2789d0:
    // 0x2789d0: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x2789d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_2789d4:
    // 0x2789d4: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x2789d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_2789d8:
    // 0x2789d8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2789d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_2789dc:
    // 0x2789dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2789dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2789e0:
    // 0x2789e0: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x2789e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2789e4:
    // 0x2789e4: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2789e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2789e8:
    // 0x2789e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2789e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2789ec:
    // 0x2789ec: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x2789ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_2789f0:
    // 0x2789f0: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x2789f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_2789f4:
    // 0x2789f4: 0x46031000  add.s       $f0, $f2, $f3
    ctx->pc = 0x2789f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_2789f8:
    // 0x2789f8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2789f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_2789fc:
    // 0x2789fc: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x2789fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_278a00:
    // 0x278a00: 0xc7a40034  lwc1        $f4, 0x34($sp)
    ctx->pc = 0x278a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_278a04:
    // 0x278a04: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x278a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_278a08:
    // 0x278a08: 0xc7a50038  lwc1        $f5, 0x38($sp)
    ctx->pc = 0x278a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_278a0c:
    // 0x278a0c: 0x46041000  add.s       $f0, $f2, $f4
    ctx->pc = 0x278a0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_278a10:
    // 0x278a10: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x278a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_278a14:
    // 0x278a14: 0x46022001  sub.s       $f0, $f4, $f2
    ctx->pc = 0x278a14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_278a18:
    // 0x278a18: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x278a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_278a1c:
    // 0x278a1c: 0x46051040  add.s       $f1, $f2, $f5
    ctx->pc = 0x278a1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_278a20:
    // 0x278a20: 0x46022801  sub.s       $f0, $f5, $f2
    ctx->pc = 0x278a20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
label_278a24:
    // 0x278a24: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x278a24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_278a28:
    // 0x278a28: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x278a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_278a2c:
    // 0x278a2c: 0xc0a0f58  jal         func_283D60
label_278a30:
    if (ctx->pc == 0x278A30u) {
        ctx->pc = 0x278A30u;
            // 0x278a30: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->pc = 0x278A34u;
        goto label_278a34;
    }
    ctx->pc = 0x278A2Cu;
    SET_GPR_U32(ctx, 31, 0x278A34u);
    ctx->pc = 0x278A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278A2Cu;
            // 0x278a30: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278A34u; }
        if (ctx->pc != 0x278A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278A34u; }
        if (ctx->pc != 0x278A34u) { return; }
    }
    ctx->pc = 0x278A34u;
label_278a34:
    // 0x278a34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_278a38:
    if (ctx->pc == 0x278A38u) {
        ctx->pc = 0x278A3Cu;
        goto label_278a3c;
    }
    ctx->pc = 0x278A34u;
    {
        const bool branch_taken_0x278a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x278a34) {
            ctx->pc = 0x278A44u;
            goto label_278a44;
        }
    }
    ctx->pc = 0x278A3Cu;
label_278a3c:
    // 0x278a3c: 0x1000002d  b           . + 4 + (0x2D << 2)
label_278a40:
    if (ctx->pc == 0x278A40u) {
        ctx->pc = 0x278A40u;
            // 0x278a40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x278A44u;
        goto label_278a44;
    }
    ctx->pc = 0x278A3Cu;
    {
        const bool branch_taken_0x278a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278A3Cu;
            // 0x278a40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278a3c) {
            ctx->pc = 0x278AF4u;
            goto label_278af4;
        }
    }
    ctx->pc = 0x278A44u;
label_278a44:
    // 0x278a44: 0x8c590d00  lw          $t9, 0xD00($v0)
    ctx->pc = 0x278a44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3328)));
label_278a48:
    // 0x278a48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x278a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_278a4c:
    // 0x278a4c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x278a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_278a50:
    // 0x278a50: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x278a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_278a54:
    // 0x278a54: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x278a54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_278a58:
    // 0x278a58: 0x320f809  jalr        $t9
label_278a5c:
    if (ctx->pc == 0x278A5Cu) {
        ctx->pc = 0x278A5Cu;
            // 0x278a5c: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x278A60u;
        goto label_278a60;
    }
    ctx->pc = 0x278A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x278A60u);
        ctx->pc = 0x278A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278A58u;
            // 0x278a5c: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x278A60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x278A60u; }
            if (ctx->pc != 0x278A60u) { return; }
        }
        }
    }
    ctx->pc = 0x278A60u;
label_278a60:
    // 0x278a60: 0x28430100  slti        $v1, $v0, 0x100
    ctx->pc = 0x278a60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
label_278a64:
    // 0x278a64: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_278a68:
    if (ctx->pc == 0x278A68u) {
        ctx->pc = 0x278A68u;
            // 0x278a68: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x278A6Cu;
        goto label_278a6c;
    }
    ctx->pc = 0x278A64u;
    {
        const bool branch_taken_0x278a64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x278A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278A64u;
            // 0x278a68: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278a64) {
            ctx->pc = 0x278A74u;
            goto label_278a74;
        }
    }
    ctx->pc = 0x278A6Cu;
label_278a6c:
    // 0x278a6c: 0x10000021  b           . + 4 + (0x21 << 2)
label_278a70:
    if (ctx->pc == 0x278A70u) {
        ctx->pc = 0x278A70u;
            // 0x278a70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x278A74u;
        goto label_278a74;
    }
    ctx->pc = 0x278A6Cu;
    {
        const bool branch_taken_0x278a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278A6Cu;
            // 0x278a70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278a6c) {
            ctx->pc = 0x278AF4u;
            goto label_278af4;
        }
    }
    ctx->pc = 0x278A74u;
label_278a74:
    // 0x278a74: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x278a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_278a78:
    // 0x278a78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x278a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_278a7c:
    // 0x278a7c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x278a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_278a80:
    // 0x278a80: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x278a80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_278a84:
    // 0x278a84: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x278a84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_278a88:
    // 0x278a88: 0xc053794  jal         func_14DE50
label_278a8c:
    if (ctx->pc == 0x278A8Cu) {
        ctx->pc = 0x278A8Cu;
            // 0x278a8c: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x278A90u;
        goto label_278a90;
    }
    ctx->pc = 0x278A88u;
    SET_GPR_U32(ctx, 31, 0x278A90u);
    ctx->pc = 0x278A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278A88u;
            // 0x278a8c: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DE50u;
    if (runtime->hasFunction(0x14DE50u)) {
        auto targetFn = runtime->lookupFunction(0x14DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278A90u; }
        if (ctx->pc != 0x278A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__FP6CCPolyiPfPfPfii_0x14de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278A90u; }
        if (ctx->pc != 0x278A90u) { return; }
    }
    ctx->pc = 0x278A90u;
label_278a90:
    // 0x278a90: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x278a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_278a94:
    // 0x278a94: 0x12030013  beq         $s0, $v1, . + 4 + (0x13 << 2)
label_278a98:
    if (ctx->pc == 0x278A98u) {
        ctx->pc = 0x278A98u;
            // 0x278a98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x278A9Cu;
        goto label_278a9c;
    }
    ctx->pc = 0x278A94u;
    {
        const bool branch_taken_0x278a94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x278A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278A94u;
            // 0x278a98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278a94) {
            ctx->pc = 0x278AE4u;
            goto label_278ae4;
        }
    }
    ctx->pc = 0x278A9Cu;
label_278a9c:
    // 0x278a9c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x278a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_278aa0:
    // 0x278aa0: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
label_278aa4:
    if (ctx->pc == 0x278AA4u) {
        ctx->pc = 0x278AA8u;
        goto label_278aa8;
    }
    ctx->pc = 0x278AA0u;
    {
        const bool branch_taken_0x278aa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x278aa0) {
            ctx->pc = 0x278AB0u;
            goto label_278ab0;
        }
    }
    ctx->pc = 0x278AA8u;
label_278aa8:
    // 0x278aa8: 0x10000012  b           . + 4 + (0x12 << 2)
label_278aac:
    if (ctx->pc == 0x278AACu) {
        ctx->pc = 0x278AACu;
            // 0x278aac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x278AB0u;
        goto label_278ab0;
    }
    ctx->pc = 0x278AA8u;
    {
        const bool branch_taken_0x278aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278AA8u;
            // 0x278aac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278aa8) {
            ctx->pc = 0x278AF4u;
            goto label_278af4;
        }
    }
    ctx->pc = 0x278AB0u;
label_278ab0:
    // 0x278ab0: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x278ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_278ab4:
    // 0x278ab4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x278ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_278ab8:
    // 0x278ab8: 0xc097e54  jal         func_25F950
label_278abc:
    if (ctx->pc == 0x278ABCu) {
        ctx->pc = 0x278ABCu;
            // 0x278abc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x278AC0u;
        goto label_278ac0;
    }
    ctx->pc = 0x278AB8u;
    SET_GPR_U32(ctx, 31, 0x278AC0u);
    ctx->pc = 0x278ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278AB8u;
            // 0x278abc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278AC0u; }
        if (ctx->pc != 0x278AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278AC0u; }
        if (ctx->pc != 0x278AC0u) { return; }
    }
    ctx->pc = 0x278AC0u;
label_278ac0:
    // 0x278ac0: 0xc7ac0054  lwc1        $f12, 0x54($sp)
    ctx->pc = 0x278ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_278ac4:
    // 0x278ac4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x278ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_278ac8:
    // 0x278ac8: 0xc097e54  jal         func_25F950
label_278acc:
    if (ctx->pc == 0x278ACCu) {
        ctx->pc = 0x278ACCu;
            // 0x278acc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x278AD0u;
        goto label_278ad0;
    }
    ctx->pc = 0x278AC8u;
    SET_GPR_U32(ctx, 31, 0x278AD0u);
    ctx->pc = 0x278ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278AC8u;
            // 0x278acc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278AD0u; }
        if (ctx->pc != 0x278AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278AD0u; }
        if (ctx->pc != 0x278AD0u) { return; }
    }
    ctx->pc = 0x278AD0u;
label_278ad0:
    // 0x278ad0: 0xc7ac0058  lwc1        $f12, 0x58($sp)
    ctx->pc = 0x278ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_278ad4:
    // 0x278ad4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x278ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_278ad8:
    // 0x278ad8: 0xc097e54  jal         func_25F950
label_278adc:
    if (ctx->pc == 0x278ADCu) {
        ctx->pc = 0x278ADCu;
            // 0x278adc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x278AE0u;
        goto label_278ae0;
    }
    ctx->pc = 0x278AD8u;
    SET_GPR_U32(ctx, 31, 0x278AE0u);
    ctx->pc = 0x278ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278AD8u;
            // 0x278adc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278AE0u; }
        if (ctx->pc != 0x278AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278AE0u; }
        if (ctx->pc != 0x278AE0u) { return; }
    }
    ctx->pc = 0x278AE0u;
label_278ae0:
    // 0x278ae0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x278ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_278ae4:
    // 0x278ae4: 0xc097e4c  jal         func_25F930
label_278ae8:
    if (ctx->pc == 0x278AE8u) {
        ctx->pc = 0x278AE8u;
            // 0x278ae8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x278AECu;
        goto label_278aec;
    }
    ctx->pc = 0x278AE4u;
    SET_GPR_U32(ctx, 31, 0x278AECu);
    ctx->pc = 0x278AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278AE4u;
            // 0x278ae8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278AECu; }
        if (ctx->pc != 0x278AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278AECu; }
        if (ctx->pc != 0x278AECu) { return; }
    }
    ctx->pc = 0x278AECu;
label_278aec:
    // 0x278aec: 0x10000001  b           . + 4 + (0x1 << 2)
label_278af0:
    if (ctx->pc == 0x278AF0u) {
        ctx->pc = 0x278AF0u;
            // 0x278af0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x278AF4u;
        goto label_278af4;
    }
    ctx->pc = 0x278AECu;
    {
        const bool branch_taken_0x278aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278AECu;
            // 0x278af0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278aec) {
            ctx->pc = 0x278AF4u;
            goto label_278af4;
        }
    }
    ctx->pc = 0x278AF4u;
label_278af4:
    // 0x278af4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x278af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_278af8:
    // 0x278af8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x278af8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_278afc:
    // 0x278afc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x278afcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_278b00:
    // 0x278b00: 0x3e00008  jr          $ra
label_278b04:
    if (ctx->pc == 0x278B04u) {
        ctx->pc = 0x278B04u;
            // 0x278b04: 0x27bd5080  addiu       $sp, $sp, 0x5080 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 20608));
        ctx->pc = 0x278B08u;
        goto label_fallthrough_0x278b00;
    }
    ctx->pc = 0x278B00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278B00u;
            // 0x278b04: 0x27bd5080  addiu       $sp, $sp, 0x5080 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 20608));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x278b00:
    ctx->pc = 0x278B08u;
}
