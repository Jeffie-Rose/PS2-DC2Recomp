#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LocalTransWorldPrimPos__FPA4_iPffff
// Address: 0x1bec70 - 0x1bf11c
void LocalTransWorldPrimPos__FPA4_iPffff_0x1bec70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LocalTransWorldPrimPos__FPA4_iPffff_0x1bec70");
#endif

    switch (ctx->pc) {
        case 0x1becd4u: goto label_1becd4;
        case 0x1bed64u: goto label_1bed64;
        case 0x1bed70u: goto label_1bed70;
        case 0x1bed80u: goto label_1bed80;
        case 0x1bed8cu: goto label_1bed8c;
        case 0x1bedd4u: goto label_1bedd4;
        case 0x1bedecu: goto label_1bedec;
        case 0x1bedf8u: goto label_1bedf8;
        case 0x1bee14u: goto label_1bee14;
        case 0x1bee34u: goto label_1bee34;
        case 0x1bee40u: goto label_1bee40;
        case 0x1bee50u: goto label_1bee50;
        case 0x1bee5cu: goto label_1bee5c;
        case 0x1beea8u: goto label_1beea8;
        case 0x1beec0u: goto label_1beec0;
        case 0x1beeccu: goto label_1beecc;
        case 0x1beee8u: goto label_1beee8;
        case 0x1bef08u: goto label_1bef08;
        case 0x1bef14u: goto label_1bef14;
        case 0x1bef24u: goto label_1bef24;
        case 0x1bef30u: goto label_1bef30;
        case 0x1bef7cu: goto label_1bef7c;
        case 0x1bef94u: goto label_1bef94;
        case 0x1befa0u: goto label_1befa0;
        case 0x1befbcu: goto label_1befbc;
        case 0x1befdcu: goto label_1befdc;
        case 0x1befe8u: goto label_1befe8;
        case 0x1beff8u: goto label_1beff8;
        case 0x1bf004u: goto label_1bf004;
        case 0x1bf050u: goto label_1bf050;
        case 0x1bf068u: goto label_1bf068;
        case 0x1bf074u: goto label_1bf074;
        default: break;
    }

    ctx->pc = 0x1bec70u;

    // 0x1bec70: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1bec70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1bec74: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1bec74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bec78: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1bec78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1bec7c: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x1bec7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x1bec80: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1bec80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1bec84: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1bec84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1bec88: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1bec88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1bec8c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1bec8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bec90: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bec90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1bec94: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1bec94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1bec98: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x1bec98u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1bec9c: 0x24a50ed0  addiu       $a1, $a1, 0xED0
    ctx->pc = 0x1bec9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3792));
    // 0x1beca0: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x1beca0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1beca4: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x1beca4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1beca8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1beca8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1becac: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1becacu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1becb0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1becb0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1becb4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1becb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1becb8: 0xc4210f10  lwc1        $f1, 0xF10($at)
    ctx->pc = 0x1becb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 3856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1becbc: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x1becbcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x1becc0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1becc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1becc4: 0xc4200f24  lwc1        $f0, 0xF24($at)
    ctx->pc = 0x1becc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 3876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1becc8: 0x46016502  mul.s       $f20, $f12, $f1
    ctx->pc = 0x1becc8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x1beccc: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x1BECCCu;
    SET_GPR_U32(ctx, 31, 0x1BECD4u);
    ctx->pc = 0x1BECD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BECCCu;
            // 0x1becd0: 0x46006d42  mul.s       $f21, $f13, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BECD4u; }
        if (ctx->pc != 0x1BECD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BECD4u; }
        if (ctx->pc != 0x1BECD4u) { return; }
    }
    ctx->pc = 0x1BECD4u;
label_1becd4:
    // 0x1becd4: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1becd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1becd8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1becd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1becdc: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1becdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1bece0: 0x0  nop
    ctx->pc = 0x1bece0u;
    // NOP
    // 0x1bece4: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x1bece4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bece8: 0x0  nop
    ctx->pc = 0x1bece8u;
    // NOP
    // 0x1becec: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1BECECu;
    {
        const bool branch_taken_0x1becec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BECF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BECECu;
            // 0x1becf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1becec) {
            ctx->pc = 0x1BECFCu;
            goto label_1becfc;
        }
    }
    ctx->pc = 0x1BECF4u;
    // 0x1becf4: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x1BECF4u;
    {
        const bool branch_taken_0x1becf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BECF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BECF4u;
            // 0x1becf8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1becf4) {
            ctx->pc = 0x1BF0ECu;
            goto label_1bf0ec;
        }
    }
    ctx->pc = 0x1BECFCu;
label_1becfc:
    // 0x1becfc: 0x0  nop
    ctx->pc = 0x1becfcu;
    // NOP
    // 0x1bed00: 0x0  nop
    ctx->pc = 0x1bed00u;
    // NOP
    // 0x1bed04: 0x460020c3  div.s       $f3, $f4, $f0
    ctx->pc = 0x1bed04u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
    // 0x1bed08: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1bed08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1bed0c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1bed0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1bed10: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bed10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1bed14: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1bed14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bed18: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1bed18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bed1c: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x1bed1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bed20: 0x4603a502  mul.s       $f20, $f20, $f3
    ctx->pc = 0x1bed20u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x1bed24: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1bed24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1bed28: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1bed28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1bed2c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1bed2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1bed30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bed30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bed34: 0x4603ad42  mul.s       $f21, $f21, $f3
    ctx->pc = 0x1bed34u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
    // 0x1bed38: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1bed38u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1bed3c: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x1bed3cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1bed40: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1bed40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1bed44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bed44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bed48: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1bed48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1bed4c: 0x4601b580  add.s       $f22, $f22, $f1
    ctx->pc = 0x1bed4cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
    // 0x1bed50: 0x46142602  mul.s       $f24, $f4, $f20
    ctx->pc = 0x1bed50u;
    ctx->f[24] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x1bed54: 0x46152642  mul.s       $f25, $f4, $f21
    ctx->pc = 0x1bed54u;
    ctx->f[25] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
    // 0x1bed58: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x1bed58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1bed5c: 0xc047964  jal         func_11E590
    ctx->pc = 0x1BED5Cu;
    SET_GPR_U32(ctx, 31, 0x1BED64u);
    ctx->pc = 0x1BED60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BED5Cu;
            // 0x1bed60: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BED64u; }
        if (ctx->pc != 0x1BED64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BED64u; }
        if (ctx->pc != 0x1BED64u) { return; }
    }
    ctx->pc = 0x1BED64u;
label_1bed64:
    // 0x1bed64: 0x4600c5c2  mul.s       $f23, $f24, $f0
    ctx->pc = 0x1bed64u;
    ctx->f[23] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x1bed68: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1BED68u;
    SET_GPR_U32(ctx, 31, 0x1BED70u);
    ctx->pc = 0x1BED6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BED68u;
            // 0x1bed6c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BED70u; }
        if (ctx->pc != 0x1BED70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BED70u; }
        if (ctx->pc != 0x1BED70u) { return; }
    }
    ctx->pc = 0x1BED70u;
label_1bed70:
    // 0x1bed70: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x1bed70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x1bed74: 0x4600be81  sub.s       $f26, $f23, $f0
    ctx->pc = 0x1bed74u;
    ctx->f[26] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
    // 0x1bed78: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1BED78u;
    SET_GPR_U32(ctx, 31, 0x1BED80u);
    ctx->pc = 0x1BED7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BED78u;
            // 0x1bed7c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BED80u; }
        if (ctx->pc != 0x1BED80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BED80u; }
        if (ctx->pc != 0x1BED80u) { return; }
    }
    ctx->pc = 0x1BED80u;
label_1bed80:
    // 0x1bed80: 0x4600c5c2  mul.s       $f23, $f24, $f0
    ctx->pc = 0x1bed80u;
    ctx->f[23] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x1bed84: 0xc047964  jal         func_11E590
    ctx->pc = 0x1BED84u;
    SET_GPR_U32(ctx, 31, 0x1BED8Cu);
    ctx->pc = 0x1BED88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BED84u;
            // 0x1bed88: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BED8Cu; }
        if (ctx->pc != 0x1BED8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BED8Cu; }
        if (ctx->pc != 0x1BED8Cu) { return; }
    }
    ctx->pc = 0x1BED8Cu;
label_1bed8c:
    // 0x1bed8c: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x1bed8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x1bed90: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1bed90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1bed94: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x1bed94u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bed98: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x1bed98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1bed9c: 0x27b00074  addiu       $s0, $sp, 0x74
    ctx->pc = 0x1bed9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x1beda0: 0x4600b840  add.s       $f1, $f23, $f0
    ctx->pc = 0x1beda0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x1beda4: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x1beda4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x1beda8: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1beda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1bedac: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1bedacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bedb0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bedb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bedb4: 0x461a0000  add.s       $f0, $f0, $f26
    ctx->pc = 0x1bedb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[26]);
    // 0x1bedb8: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1bedb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1bedbc: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1bedbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bedc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bedc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1bedc4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1bedc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1bedc8: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1bedc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bedcc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BEDCCu;
    SET_GPR_U32(ctx, 31, 0x1BEDD4u);
    ctx->pc = 0x1BEDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEDCCu;
            // 0x1bedd0: 0x46001302  mul.s       $f12, $f2, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEDD4u; }
        if (ctx->pc != 0x1BEDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEDD4u; }
        if (ctx->pc != 0x1BEDD4u) { return; }
    }
    ctx->pc = 0x1BEDD4u;
label_1bedd4:
    // 0x1bedd4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1bedd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1bedd8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1bedd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1beddc: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1beddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1bede0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bede0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bede4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BEDE4u;
    SET_GPR_U32(ctx, 31, 0x1BEDECu);
    ctx->pc = 0x1BEDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEDE4u;
            // 0x1bede8: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEDECu; }
        if (ctx->pc != 0x1BEDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEDECu; }
        if (ctx->pc != 0x1BEDECu) { return; }
    }
    ctx->pc = 0x1BEDECu;
label_1bedec:
    // 0x1bedec: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1bedecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x1bedf0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BEDF0u;
    SET_GPR_U32(ctx, 31, 0x1BEDF8u);
    ctx->pc = 0x1BEDF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEDF0u;
            // 0x1bedf4: 0xc7ac0078  lwc1        $f12, 0x78($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEDF8u; }
        if (ctx->pc != 0x1BEDF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEDF8u; }
        if (ctx->pc != 0x1BEDF8u) { return; }
    }
    ctx->pc = 0x1BEDF8u;
label_1bedf8:
    // 0x1bedf8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1bedf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1bedfc: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1bedfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1bee00: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1bee00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x1bee04: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bee04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1bee08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bee08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bee0c: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x1BEE0Cu;
    SET_GPR_U32(ctx, 31, 0x1BEE14u);
    ctx->pc = 0x1BEE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEE0Cu;
            // 0x1bee10: 0x4600b301  sub.s       $f12, $f22, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEE14u; }
        if (ctx->pc != 0x1BEE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEE14u; }
        if (ctx->pc != 0x1BEE14u) { return; }
    }
    ctx->pc = 0x1BEE14u;
label_1bee14:
    // 0x1bee14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1bee14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1bee18: 0x4482c000  mtc1        $v0, $f24
    ctx->pc = 0x1bee18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x1bee1c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x1bee1cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x1bee20: 0x4600c646  mov.s       $f25, $f24
    ctx->pc = 0x1bee20u;
    ctx->f[25] = FPU_MOV_S(ctx->f[24]);
    // 0x1bee24: 0x4614c602  mul.s       $f24, $f24, $f20
    ctx->pc = 0x1bee24u;
    ctx->f[24] = FPU_MUL_S(ctx->f[24], ctx->f[20]);
    // 0x1bee28: 0x4615ce42  mul.s       $f25, $f25, $f21
    ctx->pc = 0x1bee28u;
    ctx->f[25] = FPU_MUL_S(ctx->f[25], ctx->f[21]);
    // 0x1bee2c: 0xc047964  jal         func_11E590
    ctx->pc = 0x1BEE2Cu;
    SET_GPR_U32(ctx, 31, 0x1BEE34u);
    ctx->pc = 0x1BEE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEE2Cu;
            // 0x1bee30: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEE34u; }
        if (ctx->pc != 0x1BEE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEE34u; }
        if (ctx->pc != 0x1BEE34u) { return; }
    }
    ctx->pc = 0x1BEE34u;
label_1bee34:
    // 0x1bee34: 0x4600c5c2  mul.s       $f23, $f24, $f0
    ctx->pc = 0x1bee34u;
    ctx->f[23] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x1bee38: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1BEE38u;
    SET_GPR_U32(ctx, 31, 0x1BEE40u);
    ctx->pc = 0x1BEE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEE38u;
            // 0x1bee3c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEE40u; }
        if (ctx->pc != 0x1BEE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEE40u; }
        if (ctx->pc != 0x1BEE40u) { return; }
    }
    ctx->pc = 0x1BEE40u;
label_1bee40:
    // 0x1bee40: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x1bee40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x1bee44: 0x4600be81  sub.s       $f26, $f23, $f0
    ctx->pc = 0x1bee44u;
    ctx->f[26] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
    // 0x1bee48: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1BEE48u;
    SET_GPR_U32(ctx, 31, 0x1BEE50u);
    ctx->pc = 0x1BEE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEE48u;
            // 0x1bee4c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEE50u; }
        if (ctx->pc != 0x1BEE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEE50u; }
        if (ctx->pc != 0x1BEE50u) { return; }
    }
    ctx->pc = 0x1BEE50u;
label_1bee50:
    // 0x1bee50: 0x4600c5c2  mul.s       $f23, $f24, $f0
    ctx->pc = 0x1bee50u;
    ctx->f[23] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x1bee54: 0xc047964  jal         func_11E590
    ctx->pc = 0x1BEE54u;
    SET_GPR_U32(ctx, 31, 0x1BEE5Cu);
    ctx->pc = 0x1BEE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEE54u;
            // 0x1bee58: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEE5Cu; }
        if (ctx->pc != 0x1BEE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEE5Cu; }
        if (ctx->pc != 0x1BEE5Cu) { return; }
    }
    ctx->pc = 0x1BEE5Cu;
label_1bee5c:
    // 0x1bee5c: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x1bee5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x1bee60: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1bee60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1bee64: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1bee64u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bee68: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1bee68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1bee6c: 0x27b10084  addiu       $s1, $sp, 0x84
    ctx->pc = 0x1bee6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x1bee70: 0x4600b880  add.s       $f2, $f23, $f0
    ctx->pc = 0x1bee70u;
    ctx->f[2] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x1bee74: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x1bee74u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x1bee78: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1bee78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1bee7c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1bee7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bee80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bee80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bee84: 0x0  nop
    ctx->pc = 0x1bee84u;
    // NOP
    // 0x1bee88: 0x461a0000  add.s       $f0, $f0, $f26
    ctx->pc = 0x1bee88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[26]);
    // 0x1bee8c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1bee8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1bee90: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1bee90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bee94: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1bee94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1bee98: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1bee98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1bee9c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1bee9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1beea0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BEEA0u;
    SET_GPR_U32(ctx, 31, 0x1BEEA8u);
    ctx->pc = 0x1BEEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEEA0u;
            // 0x1beea4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEEA8u; }
        if (ctx->pc != 0x1BEEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEEA8u; }
        if (ctx->pc != 0x1BEEA8u) { return; }
    }
    ctx->pc = 0x1BEEA8u;
label_1beea8:
    // 0x1beea8: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1beea8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x1beeac: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1beeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1beeb0: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1beeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1beeb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1beeb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1beeb8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BEEB8u;
    SET_GPR_U32(ctx, 31, 0x1BEEC0u);
    ctx->pc = 0x1BEEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEEB8u;
            // 0x1beebc: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEEC0u; }
        if (ctx->pc != 0x1BEEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEEC0u; }
        if (ctx->pc != 0x1BEEC0u) { return; }
    }
    ctx->pc = 0x1BEEC0u;
label_1beec0:
    // 0x1beec0: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x1beec0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x1beec4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BEEC4u;
    SET_GPR_U32(ctx, 31, 0x1BEECCu);
    ctx->pc = 0x1BEEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEEC4u;
            // 0x1beec8: 0xc7ac0088  lwc1        $f12, 0x88($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEECCu; }
        if (ctx->pc != 0x1BEECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEECCu; }
        if (ctx->pc != 0x1BEECCu) { return; }
    }
    ctx->pc = 0x1BEECCu;
label_1beecc:
    // 0x1beecc: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x1beeccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x1beed0: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1beed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1beed4: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x1beed4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    // 0x1beed8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1beed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1beedc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1beedcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1beee0: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x1BEEE0u;
    SET_GPR_U32(ctx, 31, 0x1BEEE8u);
    ctx->pc = 0x1BEEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEEE0u;
            // 0x1beee4: 0x4600b301  sub.s       $f12, $f22, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEEE8u; }
        if (ctx->pc != 0x1BEEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEEE8u; }
        if (ctx->pc != 0x1BEEE8u) { return; }
    }
    ctx->pc = 0x1BEEE8u;
label_1beee8:
    // 0x1beee8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1beee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1beeec: 0x4482c000  mtc1        $v0, $f24
    ctx->pc = 0x1beeecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x1beef0: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x1beef0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x1beef4: 0x4600c646  mov.s       $f25, $f24
    ctx->pc = 0x1beef4u;
    ctx->f[25] = FPU_MOV_S(ctx->f[24]);
    // 0x1beef8: 0x4614c602  mul.s       $f24, $f24, $f20
    ctx->pc = 0x1beef8u;
    ctx->f[24] = FPU_MUL_S(ctx->f[24], ctx->f[20]);
    // 0x1beefc: 0x4615ce42  mul.s       $f25, $f25, $f21
    ctx->pc = 0x1beefcu;
    ctx->f[25] = FPU_MUL_S(ctx->f[25], ctx->f[21]);
    // 0x1bef00: 0xc047964  jal         func_11E590
    ctx->pc = 0x1BEF00u;
    SET_GPR_U32(ctx, 31, 0x1BEF08u);
    ctx->pc = 0x1BEF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEF00u;
            // 0x1bef04: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEF08u; }
        if (ctx->pc != 0x1BEF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEF08u; }
        if (ctx->pc != 0x1BEF08u) { return; }
    }
    ctx->pc = 0x1BEF08u;
label_1bef08:
    // 0x1bef08: 0x4600c5c2  mul.s       $f23, $f24, $f0
    ctx->pc = 0x1bef08u;
    ctx->f[23] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x1bef0c: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1BEF0Cu;
    SET_GPR_U32(ctx, 31, 0x1BEF14u);
    ctx->pc = 0x1BEF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEF0Cu;
            // 0x1bef10: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEF14u; }
        if (ctx->pc != 0x1BEF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEF14u; }
        if (ctx->pc != 0x1BEF14u) { return; }
    }
    ctx->pc = 0x1BEF14u;
label_1bef14:
    // 0x1bef14: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x1bef14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x1bef18: 0x4600be81  sub.s       $f26, $f23, $f0
    ctx->pc = 0x1bef18u;
    ctx->f[26] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
    // 0x1bef1c: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1BEF1Cu;
    SET_GPR_U32(ctx, 31, 0x1BEF24u);
    ctx->pc = 0x1BEF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEF1Cu;
            // 0x1bef20: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEF24u; }
        if (ctx->pc != 0x1BEF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEF24u; }
        if (ctx->pc != 0x1BEF24u) { return; }
    }
    ctx->pc = 0x1BEF24u;
label_1bef24:
    // 0x1bef24: 0x4600c5c2  mul.s       $f23, $f24, $f0
    ctx->pc = 0x1bef24u;
    ctx->f[23] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x1bef28: 0xc047964  jal         func_11E590
    ctx->pc = 0x1BEF28u;
    SET_GPR_U32(ctx, 31, 0x1BEF30u);
    ctx->pc = 0x1BEF2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEF28u;
            // 0x1bef2c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEF30u; }
        if (ctx->pc != 0x1BEF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEF30u; }
        if (ctx->pc != 0x1BEF30u) { return; }
    }
    ctx->pc = 0x1BEF30u;
label_1bef30:
    // 0x1bef30: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x1bef30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x1bef34: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1bef34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1bef38: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1bef38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bef3c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1bef3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1bef40: 0x27b10094  addiu       $s1, $sp, 0x94
    ctx->pc = 0x1bef40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x1bef44: 0x4600b880  add.s       $f2, $f23, $f0
    ctx->pc = 0x1bef44u;
    ctx->f[2] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x1bef48: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x1bef48u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x1bef4c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1bef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1bef50: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1bef50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bef54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bef54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bef58: 0x0  nop
    ctx->pc = 0x1bef58u;
    // NOP
    // 0x1bef5c: 0x461a0000  add.s       $f0, $f0, $f26
    ctx->pc = 0x1bef5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[26]);
    // 0x1bef60: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1bef60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1bef64: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1bef64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bef68: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1bef68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1bef6c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1bef6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1bef70: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1bef70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bef74: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BEF74u;
    SET_GPR_U32(ctx, 31, 0x1BEF7Cu);
    ctx->pc = 0x1BEF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEF74u;
            // 0x1bef78: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEF7Cu; }
        if (ctx->pc != 0x1BEF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEF7Cu; }
        if (ctx->pc != 0x1BEF7Cu) { return; }
    }
    ctx->pc = 0x1BEF7Cu;
label_1bef7c:
    // 0x1bef7c: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x1bef7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x1bef80: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1bef80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bef84: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1bef84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1bef88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bef88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bef8c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BEF8Cu;
    SET_GPR_U32(ctx, 31, 0x1BEF94u);
    ctx->pc = 0x1BEF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEF8Cu;
            // 0x1bef90: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEF94u; }
        if (ctx->pc != 0x1BEF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEF94u; }
        if (ctx->pc != 0x1BEF94u) { return; }
    }
    ctx->pc = 0x1BEF94u;
label_1bef94:
    // 0x1bef94: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x1bef94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x1bef98: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BEF98u;
    SET_GPR_U32(ctx, 31, 0x1BEFA0u);
    ctx->pc = 0x1BEF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEF98u;
            // 0x1bef9c: 0xc7ac0098  lwc1        $f12, 0x98($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEFA0u; }
        if (ctx->pc != 0x1BEFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEFA0u; }
        if (ctx->pc != 0x1BEFA0u) { return; }
    }
    ctx->pc = 0x1BEFA0u;
label_1befa0:
    // 0x1befa0: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x1befa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x1befa4: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1befa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1befa8: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x1befa8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
    // 0x1befac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1befacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1befb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1befb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1befb4: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x1BEFB4u;
    SET_GPR_U32(ctx, 31, 0x1BEFBCu);
    ctx->pc = 0x1BEFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEFB4u;
            // 0x1befb8: 0x4600b301  sub.s       $f12, $f22, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEFBCu; }
        if (ctx->pc != 0x1BEFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEFBCu; }
        if (ctx->pc != 0x1BEFBCu) { return; }
    }
    ctx->pc = 0x1BEFBCu;
label_1befbc:
    // 0x1befbc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1befbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1befc0: 0x4482b800  mtc1        $v0, $f23
    ctx->pc = 0x1befc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1befc4: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x1befc4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x1befc8: 0x4600be06  mov.s       $f24, $f23
    ctx->pc = 0x1befc8u;
    ctx->f[24] = FPU_MOV_S(ctx->f[23]);
    // 0x1befcc: 0x4614bdc2  mul.s       $f23, $f23, $f20
    ctx->pc = 0x1befccu;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[20]);
    // 0x1befd0: 0x4615c602  mul.s       $f24, $f24, $f21
    ctx->pc = 0x1befd0u;
    ctx->f[24] = FPU_MUL_S(ctx->f[24], ctx->f[21]);
    // 0x1befd4: 0xc047964  jal         func_11E590
    ctx->pc = 0x1BEFD4u;
    SET_GPR_U32(ctx, 31, 0x1BEFDCu);
    ctx->pc = 0x1BEFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEFD4u;
            // 0x1befd8: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEFDCu; }
        if (ctx->pc != 0x1BEFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEFDCu; }
        if (ctx->pc != 0x1BEFDCu) { return; }
    }
    ctx->pc = 0x1BEFDCu;
label_1befdc:
    // 0x1befdc: 0x4600bd02  mul.s       $f20, $f23, $f0
    ctx->pc = 0x1befdcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x1befe0: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1BEFE0u;
    SET_GPR_U32(ctx, 31, 0x1BEFE8u);
    ctx->pc = 0x1BEFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEFE0u;
            // 0x1befe4: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEFE8u; }
        if (ctx->pc != 0x1BEFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEFE8u; }
        if (ctx->pc != 0x1BEFE8u) { return; }
    }
    ctx->pc = 0x1BEFE8u;
label_1befe8:
    // 0x1befe8: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x1befe8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x1befec: 0x4600a541  sub.s       $f21, $f20, $f0
    ctx->pc = 0x1befecu;
    ctx->f[21] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1beff0: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1BEFF0u;
    SET_GPR_U32(ctx, 31, 0x1BEFF8u);
    ctx->pc = 0x1BEFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEFF0u;
            // 0x1beff4: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEFF8u; }
        if (ctx->pc != 0x1BEFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEFF8u; }
        if (ctx->pc != 0x1BEFF8u) { return; }
    }
    ctx->pc = 0x1BEFF8u;
label_1beff8:
    // 0x1beff8: 0x4600bd02  mul.s       $f20, $f23, $f0
    ctx->pc = 0x1beff8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x1beffc: 0xc047964  jal         func_11E590
    ctx->pc = 0x1BEFFCu;
    SET_GPR_U32(ctx, 31, 0x1BF004u);
    ctx->pc = 0x1BF000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEFFCu;
            // 0x1bf000: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF004u; }
        if (ctx->pc != 0x1BF004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF004u; }
        if (ctx->pc != 0x1BF004u) { return; }
    }
    ctx->pc = 0x1BF004u;
label_1bf004:
    // 0x1bf004: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x1bf004u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x1bf008: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1bf008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1bf00c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1bf00cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bf010: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1bf010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1bf014: 0x27b100a4  addiu       $s1, $sp, 0xA4
    ctx->pc = 0x1bf014u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x1bf018: 0x4600a080  add.s       $f2, $f20, $f0
    ctx->pc = 0x1bf018u;
    ctx->f[2] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1bf01c: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x1bf01cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x1bf020: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1bf020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1bf024: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1bf024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf028: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bf028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bf02c: 0x0  nop
    ctx->pc = 0x1bf02cu;
    // NOP
    // 0x1bf030: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x1bf030u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x1bf034: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1bf034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1bf038: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1bf038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf03c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1bf03cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1bf040: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1bf040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1bf044: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1bf044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf048: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BF048u;
    SET_GPR_U32(ctx, 31, 0x1BF050u);
    ctx->pc = 0x1BF04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF048u;
            // 0x1bf04c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF050u; }
        if (ctx->pc != 0x1BF050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF050u; }
        if (ctx->pc != 0x1BF050u) { return; }
    }
    ctx->pc = 0x1BF050u;
label_1bf050:
    // 0x1bf050: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x1bf050u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
    // 0x1bf054: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1bf054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf058: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1bf058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1bf05c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bf05cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bf060: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BF060u;
    SET_GPR_U32(ctx, 31, 0x1BF068u);
    ctx->pc = 0x1BF064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF060u;
            // 0x1bf064: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF068u; }
        if (ctx->pc != 0x1BF068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF068u; }
        if (ctx->pc != 0x1BF068u) { return; }
    }
    ctx->pc = 0x1BF068u;
label_1bf068:
    // 0x1bf068: 0xae420034  sw          $v0, 0x34($s2)
    ctx->pc = 0x1bf068u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
    // 0x1bf06c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BF06Cu;
    SET_GPR_U32(ctx, 31, 0x1BF074u);
    ctx->pc = 0x1BF070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF06Cu;
            // 0x1bf070: 0xc7ac00a8  lwc1        $f12, 0xA8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF074u; }
        if (ctx->pc != 0x1BF074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF074u; }
        if (ctx->pc != 0x1BF074u) { return; }
    }
    ctx->pc = 0x1BF074u;
label_1bf074:
    // 0x1bf074: 0xae420038  sw          $v0, 0x38($s2)
    ctx->pc = 0x1bf074u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
    // 0x1bf078: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1bf078u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bf07c: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x1bf07cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x1bf080: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1bf080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf084: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1bf084u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bf088: 0x0  nop
    ctx->pc = 0x1bf088u;
    // NOP
    // 0x1bf08c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1BF08Cu;
    {
        const bool branch_taken_0x1bf08c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BF090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF08Cu;
            // 0x1bf090: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf08c) {
            ctx->pc = 0x1BF0B8u;
            goto label_1bf0b8;
        }
    }
    ctx->pc = 0x1BF094u;
    // 0x1bf094: 0x3c02457f  lui         $v0, 0x457F
    ctx->pc = 0x1bf094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17791 << 16));
    // 0x1bf098: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x1bf098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x1bf09c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bf09cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bf0a0: 0x0  nop
    ctx->pc = 0x1bf0a0u;
    // NOP
    // 0x1bf0a4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1bf0a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bf0a8: 0x0  nop
    ctx->pc = 0x1bf0a8u;
    // NOP
    // 0x1bf0ac: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF0ACu;
    {
        const bool branch_taken_0x1bf0ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bf0ac) {
            ctx->pc = 0x1BF0C0u;
            goto label_1bf0c0;
        }
    }
    ctx->pc = 0x1BF0B4u;
    // 0x1bf0b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bf0b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf0b8:
    // 0x1bf0b8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1BF0B8u;
    {
        const bool branch_taken_0x1bf0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf0b8) {
            ctx->pc = 0x1BF0E8u;
            goto label_1bf0e8;
        }
    }
    ctx->pc = 0x1BF0C0u;
label_1bf0c0:
    // 0x1bf0c0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1bf0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf0c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1bf0c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bf0c8: 0x0  nop
    ctx->pc = 0x1bf0c8u;
    // NOP
    // 0x1bf0cc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1BF0CCu;
    {
        const bool branch_taken_0x1bf0cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BF0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF0CCu;
            // 0x1bf0d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf0cc) {
            ctx->pc = 0x1BF0E8u;
            goto label_1bf0e8;
        }
    }
    ctx->pc = 0x1BF0D4u;
    // 0x1bf0d4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1bf0d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bf0d8: 0x0  nop
    ctx->pc = 0x1bf0d8u;
    // NOP
    // 0x1bf0dc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF0DCu;
    {
        const bool branch_taken_0x1bf0dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BF0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF0DCu;
            // 0x1bf0e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf0dc) {
            ctx->pc = 0x1BF0E8u;
            goto label_1bf0e8;
        }
    }
    ctx->pc = 0x1BF0E4u;
    // 0x1bf0e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bf0e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf0e8:
    // 0x1bf0e8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1bf0e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1bf0ec:
    // 0x1bf0ec: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x1bf0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1bf0f0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1bf0f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bf0f4: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x1bf0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1bf0f8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1bf0f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bf0fc: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1bf0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1bf100: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bf100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bf104: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1bf104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1bf108: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1bf108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1bf10c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1bf10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1bf110: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1bf110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1bf114: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF114u;
            // 0x1bf118: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BF11Cu;
}
