#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StoreImage__Fi
// Address: 0x145f50 - 0x1461d4
void StoreImage__Fi_0x145f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StoreImage__Fi_0x145f50");
#endif

    switch (ctx->pc) {
        case 0x145fc4u: goto label_145fc4;
        case 0x145fe4u: goto label_145fe4;
        case 0x145ff4u: goto label_145ff4;
        case 0x146028u: goto label_146028;
        case 0x146034u: goto label_146034;
        case 0x146044u: goto label_146044;
        case 0x146054u: goto label_146054;
        case 0x1460a4u: goto label_1460a4;
        case 0x1460acu: goto label_1460ac;
        case 0x1460bcu: goto label_1460bc;
        case 0x1460c8u: goto label_1460c8;
        case 0x1460d8u: goto label_1460d8;
        case 0x1460e0u: goto label_1460e0;
        case 0x146118u: goto label_146118;
        case 0x1461a0u: goto label_1461a0;
        case 0x1461c0u: goto label_1461c0;
        default: break;
    }

    ctx->pc = 0x145f50u;

    // 0x145f50: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x145f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x145f54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x145f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x145f58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x145f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x145f5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x145f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x145f60: 0x83828898  lb          $v0, -0x7768($gp)
    ctx->pc = 0x145f60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936728)));
    // 0x145f64: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x145F64u;
    {
        const bool branch_taken_0x145f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x145F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145F64u;
            // 0x145f68: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145f64) {
            ctx->pc = 0x145F78u;
            goto label_145f78;
        }
    }
    ctx->pc = 0x145F6Cu;
    // 0x145f6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x145f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145f70: 0xaf808894  sw          $zero, -0x776C($gp)
    ctx->pc = 0x145f70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936724), GPR_U32(ctx, 0));
    // 0x145f74: 0xa3828898  sb          $v0, -0x7768($gp)
    ctx->pc = 0x145f74u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936728), (uint8_t)GPR_U32(ctx, 2));
label_145f78:
    // 0x145f78: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x145f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x145f7c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x145f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x145f80: 0x24424270  addiu       $v0, $v0, 0x4270
    ctx->pc = 0x145f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17008));
    // 0x145f84: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x145f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x145f88: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x145f88u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x145f8c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x145f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x145f90: 0x24a526e8  addiu       $a1, $a1, 0x26E8
    ctx->pc = 0x145f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9960));
    // 0x145f94: 0x84420010  lh          $v0, 0x10($v0)
    ctx->pc = 0x145f94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x145f98: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x145f98u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x145f9c: 0xa4c20010  sh          $v0, 0x10($a2)
    ctx->pc = 0x145f9cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x145fa0: 0x8f828780  lw          $v0, -0x7880($gp)
    ctx->pc = 0x145fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x145fa4: 0x8f838784  lw          $v1, -0x787C($gp)
    ctx->pc = 0x145fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x145fa8: 0xa3a2003c  sb          $v0, 0x3C($sp)
    ctx->pc = 0x145fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 60), (uint8_t)GPR_U32(ctx, 2));
    // 0x145fac: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x145facu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x145fb0: 0xa3a3003e  sb          $v1, 0x3E($sp)
    ctx->pc = 0x145fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 62), (uint8_t)GPR_U32(ctx, 3));
    // 0x145fb4: 0xa3a2003d  sb          $v0, 0x3D($sp)
    ctx->pc = 0x145fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 61), (uint8_t)GPR_U32(ctx, 2));
    // 0x145fb8: 0x31203  sra         $v0, $v1, 8
    ctx->pc = 0x145fb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 8));
    // 0x145fbc: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x145FBCu;
    SET_GPR_U32(ctx, 31, 0x145FC4u);
    ctx->pc = 0x145FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145FBCu;
            // 0x145fc0: 0xa3a2003f  sb          $v0, 0x3F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 63), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145FC4u; }
        if (ctx->pc != 0x145FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145FC4u; }
        if (ctx->pc != 0x145FC4u) { return; }
    }
    ctx->pc = 0x145FC4u;
label_145fc4:
    // 0x145fc4: 0x8f878894  lw          $a3, -0x776C($gp)
    ctx->pc = 0x145fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936724)));
    // 0x145fc8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x145fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x145fcc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x145fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x145fd0: 0x24a526f0  addiu       $a1, $a1, 0x26F0
    ctx->pc = 0x145fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9968));
    // 0x145fd4: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x145fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x145fd8: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x145fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x145fdc: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x145FDCu;
    SET_GPR_U32(ctx, 31, 0x145FE4u);
    ctx->pc = 0x145FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145FDCu;
            // 0x145fe0: 0xaf828894  sw          $v0, -0x776C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936724), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145FE4u; }
        if (ctx->pc != 0x145FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145FE4u; }
        if (ctx->pc != 0x145FE4u) { return; }
    }
    ctx->pc = 0x145FE4u;
label_145fe4:
    // 0x145fe4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x145fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x145fe8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x145fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x145fec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x145FECu;
    {
        const bool branch_taken_0x145fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145FECu;
            // 0x145ff0: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145fec) {
            ctx->pc = 0x14600Cu;
            goto label_14600c;
        }
    }
    ctx->pc = 0x145FF4u;
label_145ff4:
    // 0x145ff4: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x145ff4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
    // 0x145ff8: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x145ff8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x145ffc: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x145FFCu;
    {
        const bool branch_taken_0x145ffc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x145ffc) {
            ctx->pc = 0x146008u;
            goto label_146008;
        }
    }
    ctx->pc = 0x146004u;
    // 0x146004: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x146004u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_146008:
    // 0x146008: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x146008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_14600c:
    // 0x14600c: 0x0  nop
    ctx->pc = 0x14600cu;
    // NOP
    // 0x146010: 0x80a40000  lb          $a0, 0x0($a1)
    ctx->pc = 0x146010u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x146014: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x146014u;
    {
        const bool branch_taken_0x146014 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x146014) {
            ctx->pc = 0x145FF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_145ff4;
        }
    }
    ctx->pc = 0x14601Cu;
    // 0x14601c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x14601cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x146020: 0xc0450a6  jal         func_114298
    ctx->pc = 0x146020u;
    SET_GPR_U32(ctx, 31, 0x146028u);
    ctx->pc = 0x146024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146020u;
            // 0x146024: 0x24050602  addiu       $a1, $zero, 0x602 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1538));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114298u;
    if (runtime->hasFunction(0x114298u)) {
        auto targetFn = runtime->lookupFunction(0x114298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146028u; }
        if (ctx->pc != 0x146028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceOpen_0x114298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146028u; }
        if (ctx->pc != 0x146028u) { return; }
    }
    ctx->pc = 0x146028u;
label_146028:
    // 0x146028: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x146028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14602c: 0xc04b120  jal         func_12C480
    ctx->pc = 0x14602Cu;
    SET_GPR_U32(ctx, 31, 0x146034u);
    ctx->pc = 0x146030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14602Cu;
            // 0x146030: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C480u;
    if (runtime->hasFunction(0x12C480u)) {
        auto targetFn = runtime->lookupFunction(0x12C480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146034u; }
        if (ctx->pc != 0x146034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10mgCTextureFv_0x12c480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146034u; }
        if (ctx->pc != 0x146034u) { return; }
    }
    ctx->pc = 0x146034u;
label_146034:
    // 0x146034: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x146034u;
    {
        const bool branch_taken_0x146034 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x146038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146034u;
            // 0x146038: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146034) {
            ctx->pc = 0x14604Cu;
            goto label_14604c;
        }
    }
    ctx->pc = 0x14603Cu;
    // 0x14603c: 0xc051100  jal         func_144400
    ctx->pc = 0x14603Cu;
    SET_GPR_U32(ctx, 31, 0x146044u);
    ctx->pc = 0x146040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14603Cu;
            // 0x146040: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144400u;
    if (runtime->hasFunction(0x144400u)) {
        auto targetFn = runtime->lookupFunction(0x144400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146044u; }
        if (ctx->pc != 0x146044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetFrameBackBuffer__FP10mgCTexture_0x144400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146044u; }
        if (ctx->pc != 0x146044u) { return; }
    }
    ctx->pc = 0x146044u;
label_146044:
    // 0x146044: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x146044u;
    {
        const bool branch_taken_0x146044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146044u;
            // 0x146048: 0x97a30188  lhu         $v1, 0x188($sp) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146044) {
            ctx->pc = 0x146058u;
            goto label_146058;
        }
    }
    ctx->pc = 0x14604Cu;
label_14604c:
    // 0x14604c: 0xc0510c0  jal         func_144300
    ctx->pc = 0x14604Cu;
    SET_GPR_U32(ctx, 31, 0x146054u);
    ctx->pc = 0x144300u;
    if (runtime->hasFunction(0x144300u)) {
        auto targetFn = runtime->lookupFunction(0x144300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146054u; }
        if (ctx->pc != 0x146054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetFrameBuffer__FP10mgCTexture_0x144300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146054u; }
        if (ctx->pc != 0x146054u) { return; }
    }
    ctx->pc = 0x146054u;
label_146054:
    // 0x146054: 0x97a30188  lhu         $v1, 0x188($sp)
    ctx->pc = 0x146054u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 392)));
label_146058:
    // 0x146058: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x146058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x14605c: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x14605cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x146060: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x146060u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x146064: 0x41183  sra         $v0, $a0, 6
    ctx->pc = 0x146064u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 6));
    // 0x146068: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x146068u;
    {
        const bool branch_taken_0x146068 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x14606Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146068u;
            // 0x14606c: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146068) {
            ctx->pc = 0x146078u;
            goto label_146078;
        }
    }
    ctx->pc = 0x146070u;
    // 0x146070: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x146070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x146074: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x146074u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_146078:
    // 0x146078: 0x878b8784  lh          $t3, -0x787C($gp)
    ctx->pc = 0x146078u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x14607c: 0x4543c  dsll32      $t2, $a0, 16
    ctx->pc = 0x14607cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) << (32 + 16));
    // 0x146080: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x146080u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x146084: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x146084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x146088: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x146088u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x14608c: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x14608cu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x146090: 0x248425f0  addiu       $a0, $a0, 0x25F0
    ctx->pc = 0x146090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9712));
    // 0x146094: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x146094u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146098: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x146098u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14609c: 0xc040e26  jal         func_103898
    ctx->pc = 0x14609Cu;
    SET_GPR_U32(ctx, 31, 0x1460A4u);
    ctx->pc = 0x1460A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14609Cu;
            // 0x1460a0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103898u;
    if (runtime->hasFunction(0x103898u)) {
        auto targetFn = runtime->lookupFunction(0x103898u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1460A4u; }
        if (ctx->pc != 0x1460A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSetDefStoreImage_0x103898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1460A4u; }
        if (ctx->pc != 0x1460A4u) { return; }
    }
    ctx->pc = 0x1460A4u;
label_1460a4:
    // 0x1460a4: 0xc0440d8  jal         func_110360
    ctx->pc = 0x1460A4u;
    SET_GPR_U32(ctx, 31, 0x1460ACu);
    ctx->pc = 0x1460A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1460A4u;
            // 0x1460a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110360u;
    if (runtime->hasFunction(0x110360u)) {
        auto targetFn = runtime->lookupFunction(0x110360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1460ACu; }
        if (ctx->pc != 0x1460ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x110360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1460ACu; }
        if (ctx->pc != 0x1460ACu) { return; }
    }
    ctx->pc = 0x1460ACu;
label_1460ac:
    // 0x1460ac: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1460acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1460b0: 0x3c050210  lui         $a1, 0x210
    ctx->pc = 0x1460b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)528 << 16));
    // 0x1460b4: 0xc040ed6  jal         func_103B58
    ctx->pc = 0x1460B4u;
    SET_GPR_U32(ctx, 31, 0x1460BCu);
    ctx->pc = 0x1460B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1460B4u;
            // 0x1460b8: 0x248425f0  addiu       $a0, $a0, 0x25F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103B58u;
    if (runtime->hasFunction(0x103B58u)) {
        auto targetFn = runtime->lookupFunction(0x103B58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1460BCu; }
        if (ctx->pc != 0x1460BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsExecStoreImage_0x103b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1460BCu; }
        if (ctx->pc != 0x1460BCu) { return; }
    }
    ctx->pc = 0x1460BCu;
label_1460bc:
    // 0x1460bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1460bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1460c0: 0xc040ce6  jal         func_103398
    ctx->pc = 0x1460C0u;
    SET_GPR_U32(ctx, 31, 0x1460C8u);
    ctx->pc = 0x1460C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1460C0u;
            // 0x1460c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103398u;
    if (runtime->hasFunction(0x103398u)) {
        auto targetFn = runtime->lookupFunction(0x103398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1460C8u; }
        if (ctx->pc != 0x1460C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x103398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1460C8u; }
        if (ctx->pc != 0x1460C8u) { return; }
    }
    ctx->pc = 0x1460C8u;
label_1460c8:
    // 0x1460c8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1460c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1460cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1460ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1460d0: 0xc0452d2  jal         func_114B48
    ctx->pc = 0x1460D0u;
    SET_GPR_U32(ctx, 31, 0x1460D8u);
    ctx->pc = 0x1460D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1460D0u;
            // 0x1460d4: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114B48u;
    if (runtime->hasFunction(0x114B48u)) {
        auto targetFn = runtime->lookupFunction(0x114B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1460D8u; }
        if (ctx->pc != 0x1460D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x114b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1460D8u; }
        if (ctx->pc != 0x1460D8u) { return; }
    }
    ctx->pc = 0x1460D8u;
label_1460d8:
    // 0x1460d8: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1460D8u;
    {
        const bool branch_taken_0x1460d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1460DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1460D8u;
            // 0x1460dc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1460d8) {
            ctx->pc = 0x1461A4u;
            goto label_1461a4;
        }
    }
    ctx->pc = 0x1460E0u;
label_1460e0:
    // 0x1460e0: 0x8f828780  lw          $v0, -0x7880($gp)
    ctx->pc = 0x1460e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x1460e4: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x1460e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1460e8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1460e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1460ec: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x1460ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1460f0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1460F0u;
    {
        const bool branch_taken_0x1460f0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1460F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1460F0u;
            // 0x1460f4: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1460f0) {
            ctx->pc = 0x146100u;
            goto label_146100;
        }
    }
    ctx->pc = 0x1460F8u;
    // 0x1460f8: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1460f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1460fc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1460fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_146100:
    // 0x146100: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x146100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x146104: 0x3c010210  lui         $at, 0x210
    ctx->pc = 0x146104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)528 << 16));
    // 0x146108: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x146108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14610c: 0x412021  addu        $a0, $v0, $at
    ctx->pc = 0x14610cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x146110: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x146110u;
    {
        const bool branch_taken_0x146110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146110u;
            // 0x146114: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146110) {
            ctx->pc = 0x146150u;
            goto label_146150;
        }
    }
    ctx->pc = 0x146118u;
label_146118:
    // 0x146118: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x146118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x14611c: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x14611cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x146120: 0x854021  addu        $t0, $a0, $a1
    ctx->pc = 0x146120u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x146124: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x146124u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x146128: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x146128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x14612c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x14612cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x146130: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x146130u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x146134: 0xa0e30002  sb          $v1, 0x2($a3)
    ctx->pc = 0x146134u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x146138: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x146138u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14613c: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x14613cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x146140: 0x90e20001  lbu         $v0, 0x1($a3)
    ctx->pc = 0x146140u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x146144: 0xa1020001  sb          $v0, 0x1($t0)
    ctx->pc = 0x146144u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x146148: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x146148u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x14614c: 0xa1020002  sb          $v0, 0x2($t0)
    ctx->pc = 0x14614cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 2));
label_146150:
    // 0x146150: 0x8f878780  lw          $a3, -0x7880($gp)
    ctx->pc = 0x146150u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x146154: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x146154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x146158: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x146158u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14615c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x14615Cu;
    {
        const bool branch_taken_0x14615c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14615c) {
            ctx->pc = 0x146118u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_146118;
        }
    }
    ctx->pc = 0x146164u;
    // 0x146164: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x146164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x146168: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x146168u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x14616c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14616cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x146170: 0xe21818  mult        $v1, $a3, $v0
    ctx->pc = 0x146170u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x146174: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x146174u;
    {
        const bool branch_taken_0x146174 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x146178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146174u;
            // 0x146178: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146174) {
            ctx->pc = 0x146184u;
            goto label_146184;
        }
    }
    ctx->pc = 0x14617Cu;
    // 0x14617c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x14617cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x146180: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x146180u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_146184:
    // 0x146184: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x146184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x146188: 0x3c010210  lui         $at, 0x210
    ctx->pc = 0x146188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)528 << 16));
    // 0x14618c: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x14618cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x146190: 0x612821  addu        $a1, $v1, $at
    ctx->pc = 0x146190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x146194: 0x473021  addu        $a2, $v0, $a3
    ctx->pc = 0x146194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x146198: 0xc0452d2  jal         func_114B48
    ctx->pc = 0x146198u;
    SET_GPR_U32(ctx, 31, 0x1461A0u);
    ctx->pc = 0x14619Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146198u;
            // 0x14619c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114B48u;
    if (runtime->hasFunction(0x114B48u)) {
        auto targetFn = runtime->lookupFunction(0x114B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1461A0u; }
        if (ctx->pc != 0x1461A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x114b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1461A0u; }
        if (ctx->pc != 0x1461A0u) { return; }
    }
    ctx->pc = 0x1461A0u;
label_1461a0:
    // 0x1461a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1461a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1461a4:
    // 0x1461a4: 0x0  nop
    ctx->pc = 0x1461a4u;
    // NOP
    // 0x1461a8: 0x8f838784  lw          $v1, -0x787C($gp)
    ctx->pc = 0x1461a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x1461ac: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x1461acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1461b0: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x1461B0u;
    {
        const bool branch_taken_0x1461b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1461B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1461B0u;
            // 0x1461b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1461b0) {
            ctx->pc = 0x1460E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1460e0;
        }
    }
    ctx->pc = 0x1461B8u;
    // 0x1461b8: 0xc045148  jal         func_114520
    ctx->pc = 0x1461B8u;
    SET_GPR_U32(ctx, 31, 0x1461C0u);
    ctx->pc = 0x114520u;
    if (runtime->hasFunction(0x114520u)) {
        auto targetFn = runtime->lookupFunction(0x114520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1461C0u; }
        if (ctx->pc != 0x1461C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x114520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1461C0u; }
        if (ctx->pc != 0x1461C0u) { return; }
    }
    ctx->pc = 0x1461C0u;
label_1461c0:
    // 0x1461c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1461c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1461c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1461c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1461c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1461c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1461cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1461CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1461D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1461CCu;
            // 0x1461d0: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1461D4u;
}
