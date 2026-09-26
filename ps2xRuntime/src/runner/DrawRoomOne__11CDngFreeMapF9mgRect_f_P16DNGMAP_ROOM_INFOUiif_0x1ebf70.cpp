#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawRoomOne__11CDngFreeMapF9mgRect<f>P16DNGMAP_ROOM_INFOUiif
// Address: 0x1ebf70 - 0x1ec854
void DrawRoomOne__11CDngFreeMapF9mgRect_f_P16DNGMAP_ROOM_INFOUiif_0x1ebf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawRoomOne__11CDngFreeMapF9mgRect_f_P16DNGMAP_ROOM_INFOUiif_0x1ebf70");
#endif

    switch (ctx->pc) {
        case 0x1ec07cu: goto label_1ec07c;
        case 0x1ec0dcu: goto label_1ec0dc;
        case 0x1ec0f4u: goto label_1ec0f4;
        case 0x1ec2b8u: goto label_1ec2b8;
        case 0x1ec30cu: goto label_1ec30c;
        case 0x1ec328u: goto label_1ec328;
        case 0x1ec360u: goto label_1ec360;
        case 0x1ec36cu: goto label_1ec36c;
        case 0x1ec3f0u: goto label_1ec3f0;
        case 0x1ec430u: goto label_1ec430;
        case 0x1ec4a0u: goto label_1ec4a0;
        case 0x1ec4c8u: goto label_1ec4c8;
        case 0x1ec4d4u: goto label_1ec4d4;
        case 0x1ec4e0u: goto label_1ec4e0;
        case 0x1ec4f8u: goto label_1ec4f8;
        case 0x1ec508u: goto label_1ec508;
        case 0x1ec510u: goto label_1ec510;
        case 0x1ec550u: goto label_1ec550;
        case 0x1ec570u: goto label_1ec570;
        case 0x1ec584u: goto label_1ec584;
        case 0x1ec598u: goto label_1ec598;
        case 0x1ec5a8u: goto label_1ec5a8;
        case 0x1ec5c0u: goto label_1ec5c0;
        case 0x1ec5d0u: goto label_1ec5d0;
        case 0x1ec5e4u: goto label_1ec5e4;
        case 0x1ec5f4u: goto label_1ec5f4;
        case 0x1ec608u: goto label_1ec608;
        case 0x1ec610u: goto label_1ec610;
        case 0x1ec628u: goto label_1ec628;
        case 0x1ec6f4u: goto label_1ec6f4;
        case 0x1ec790u: goto label_1ec790;
        case 0x1ec79cu: goto label_1ec79c;
        case 0x1ec7a8u: goto label_1ec7a8;
        case 0x1ec7b4u: goto label_1ec7b4;
        case 0x1ec7bcu: goto label_1ec7bc;
        case 0x1ec7d4u: goto label_1ec7d4;
        case 0x1ec7ecu: goto label_1ec7ec;
        case 0x1ec800u: goto label_1ec800;
        case 0x1ec808u: goto label_1ec808;
        default: break;
    }

    ctx->pc = 0x1ebf70u;

    // 0x1ebf70: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x1ebf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
    // 0x1ebf74: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1ebf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1ebf78: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1ebf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1ebf7c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1ebf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1ebf80: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x1ebf80u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebf84: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1ebf84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1ebf88: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1ebf88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1ebf8c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1ebf8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1ebf90: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1ebf90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1ebf94: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ebf94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1ebf98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ebf98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ebf9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ebf9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ebfa0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ebfa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebfa4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1ebfa4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1ebfa8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ebfa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebfac: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1ebfacu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1ebfb0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ebfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ebfb4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1ebfb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1ebfb8: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x1ebfb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ebfbc: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1ebfbcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1ebfc0: 0x12000215  beqz        $s0, . + 4 + (0x215 << 2)
    ctx->pc = 0x1EBFC0u;
    {
        const bool branch_taken_0x1ebfc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBFC0u;
            // 0x1ebfc4: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebfc0) {
            ctx->pc = 0x1EC818u;
            goto label_1ec818;
        }
    }
    ctx->pc = 0x1EBFC8u;
    // 0x1ebfc8: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x1ebfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x1ebfcc: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x1ebfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ebfd0: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x1ebfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1ebfd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ebfd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebfd8: 0x0  nop
    ctx->pc = 0x1ebfd8u;
    // NOP
    // 0x1ebfdc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ebfdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ebfe0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1ebfe0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ebfe4: 0x0  nop
    ctx->pc = 0x1ebfe4u;
    // NOP
    // 0x1ebfe8: 0x4500020b  bc1f        . + 4 + (0x20B << 2)
    ctx->pc = 0x1EBFE8u;
    {
        const bool branch_taken_0x1ebfe8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ebfe8) {
            ctx->pc = 0x1EC818u;
            goto label_1ec818;
        }
    }
    ctx->pc = 0x1EBFF0u;
    // 0x1ebff0: 0x8f838784  lw          $v1, -0x787C($gp)
    ctx->pc = 0x1ebff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x1ebff4: 0x27a500c4  addiu       $a1, $sp, 0xC4
    ctx->pc = 0x1ebff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x1ebff8: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1ebff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebffc: 0x2463001e  addiu       $v1, $v1, 0x1E
    ctx->pc = 0x1ebffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x1ec000: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ec000u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec004: 0x0  nop
    ctx->pc = 0x1ec004u;
    // NOP
    // 0x1ec008: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ec008u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ec00c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ec00cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec010: 0x0  nop
    ctx->pc = 0x1ec010u;
    // NOP
    // 0x1ec014: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC014u;
    {
        const bool branch_taken_0x1ec014 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EC018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC014u;
            // 0x1ec018: 0x3c0341f0  lui         $v1, 0x41F0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec014) {
            ctx->pc = 0x1EC028u;
            goto label_1ec028;
        }
    }
    ctx->pc = 0x1EC01Cu;
    // 0x1ec01c: 0x100001ff  b           . + 4 + (0x1FF << 2)
    ctx->pc = 0x1EC01Cu;
    {
        const bool branch_taken_0x1ec01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC01Cu;
            // 0x1ec020: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec01c) {
            ctx->pc = 0x1EC81Cu;
            goto label_1ec81c;
        }
    }
    ctx->pc = 0x1EC024u;
    // 0x1ec024: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x1ec024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_1ec028:
    // 0x1ec028: 0x3c02c228  lui         $v0, 0xC228
    ctx->pc = 0x1ec028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49704 << 16));
    // 0x1ec02c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ec02cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ec030: 0x27b400d8  addiu       $s4, $sp, 0xD8
    ctx->pc = 0x1ec030u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x1ec034: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec038: 0x27b300dc  addiu       $s3, $sp, 0xDC
    ctx->pc = 0x1ec038u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x1ec03c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1ec03cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1ec040: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1ec040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1ec044: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x1ec044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x1ec048: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x1ec048u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1ec04c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1ec04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec050: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ec050u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ec054: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1ec054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1ec058: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x1ec058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec05c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1ec05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1ec060: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1ec060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec064: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1ec064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1ec068: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1ec068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec06c: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x1ec06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x1ec070: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1ec070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec074: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1EC074u;
    SET_GPR_U32(ctx, 31, 0x1EC07Cu);
    ctx->pc = 0x1EC078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC074u;
            // 0x1ec078: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC07Cu; }
        if (ctx->pc != 0x1EC07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC07Cu; }
        if (ctx->pc != 0x1EC07Cu) { return; }
    }
    ctx->pc = 0x1EC07Cu;
label_1ec07c:
    // 0x1ec07c: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x1ec07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x1ec080: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1ec080u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x1ec084: 0x3c024284  lui         $v0, 0x4284
    ctx->pc = 0x1ec084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17028 << 16));
    // 0x1ec088: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1ec088u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1ec08c: 0x8623000a  lh          $v1, 0xA($s1)
    ctx->pc = 0x1ec08cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x1ec090: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1ec090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ec094: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EC094u;
    {
        const bool branch_taken_0x1ec094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EC098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC094u;
            // 0x1ec098: 0x27b200e0  addiu       $s2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec094) {
            ctx->pc = 0x1EC0B4u;
            goto label_1ec0b4;
        }
    }
    ctx->pc = 0x1EC09Cu;
    // 0x1ec09c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1ec09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ec0a0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC0A0u;
    {
        const bool branch_taken_0x1ec0a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ec0a0) {
            ctx->pc = 0x1EC0B4u;
            goto label_1ec0b4;
        }
    }
    ctx->pc = 0x1EC0A8u;
    // 0x1ec0a8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1ec0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ec0ac: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EC0ACu;
    {
        const bool branch_taken_0x1ec0ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC0ACu;
            // 0x1ec0b0: 0x24060042  addiu       $a2, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec0ac) {
            ctx->pc = 0x1EC0C8u;
            goto label_1ec0c8;
        }
    }
    ctx->pc = 0x1EC0B4u;
label_1ec0b4:
    // 0x1ec0b4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1ec0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x1ec0b8: 0x3c024288  lui         $v0, 0x4288
    ctx->pc = 0x1ec0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17032 << 16));
    // 0x1ec0bc: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1ec0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x1ec0c0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1ec0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1ec0c4: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x1ec0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1ec0c8:
    // 0x1ec0c8: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x1ec0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1ec0cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ec0ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec0d0: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x1ec0d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1ec0d4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1EC0D4u;
    SET_GPR_U32(ctx, 31, 0x1EC0DCu);
    ctx->pc = 0x1EC0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC0D4u;
            // 0x1ec0d8: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC0DCu; }
        if (ctx->pc != 0x1EC0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC0DCu; }
        if (ctx->pc != 0x1EC0DCu) { return; }
    }
    ctx->pc = 0x1EC0DCu;
label_1ec0dc:
    // 0x1ec0dc: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x1ec0dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1ec0e0: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x1ec0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1ec0e4: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x1ec0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1ec0e8: 0x240600c6  addiu       $a2, $zero, 0xC6
    ctx->pc = 0x1ec0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
    // 0x1ec0ec: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1EC0ECu;
    SET_GPR_U32(ctx, 31, 0x1EC0F4u);
    ctx->pc = 0x1EC0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC0ECu;
            // 0x1ec0f0: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC0F4u; }
        if (ctx->pc != 0x1EC0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC0F4u; }
        if (ctx->pc != 0x1EC0F4u) { return; }
    }
    ctx->pc = 0x1EC0F4u;
label_1ec0f4:
    // 0x1ec0f4: 0x92020045  lbu         $v0, 0x45($s0)
    ctx->pc = 0x1ec0f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x1ec0f8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC0F8u;
    {
        const bool branch_taken_0x1ec0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC0F8u;
            // 0x1ec0fc: 0x820c0042  lb          $t4, 0x42($s0) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 66)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec0f8) {
            ctx->pc = 0x1EC10Cu;
            goto label_1ec10c;
        }
    }
    ctx->pc = 0x1EC100u;
    // 0x1ec100: 0xafa001f0  sw          $zero, 0x1F0($sp)
    ctx->pc = 0x1ec100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 0));
    // 0x1ec104: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x1EC104u;
    {
        const bool branch_taken_0x1ec104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC104u;
            // 0x1ec108: 0xafa001f4  sw          $zero, 0x1F4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec104) {
            ctx->pc = 0x1EC2A8u;
            goto label_1ec2a8;
        }
    }
    ctx->pc = 0x1EC10Cu;
label_1ec10c:
    // 0x1ec10c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1ec10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ec110: 0x27a301f8  addiu       $v1, $sp, 0x1F8
    ctx->pc = 0x1ec110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
    // 0x1ec114: 0x182001a  div         $zero, $t4, $v0
    ctx->pc = 0x1ec114u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ec118: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x1ec118u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ec11c: 0x8fa801f0  lw          $t0, 0x1F0($sp)
    ctx->pc = 0x1ec11cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1ec120: 0x27a601fc  addiu       $a2, $sp, 0x1FC
    ctx->pc = 0x1ec120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 508));
    // 0x1ec124: 0xc57c2  srl         $t2, $t4, 31
    ctx->pc = 0x1ec124u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
    // 0x1ec128: 0x5810  mfhi        $t3
    ctx->pc = 0x1ec128u;
    SET_GPR_U64(ctx, 11, ctx->hi);
    // 0x1ec12c: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x1ec12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x1ec130: 0x34476667  ori         $a3, $v0, 0x6667
    ctx->pc = 0x1ec130u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x1ec134: 0x27a201f4  addiu       $v0, $sp, 0x1F4
    ctx->pc = 0x1ec134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
    // 0x1ec138: 0x12b4818  mult        $t1, $t1, $t3
    ctx->pc = 0x1ec138u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x1ec13c: 0xec0018  mult        $zero, $a3, $t4
    ctx->pc = 0x1ec13cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1ec140: 0x1093821  addu        $a3, $t0, $t1
    ctx->pc = 0x1ec140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1ec144: 0xafa701f0  sw          $a3, 0x1F0($sp)
    ctx->pc = 0x1ec144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 7));
    // 0x1ec148: 0x4810  mfhi        $t1
    ctx->pc = 0x1ec148u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x1ec14c: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x1ec14cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ec150: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1ec150u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ec154: 0x94843  sra         $t1, $t1, 1
    ctx->pc = 0x1ec154u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 1));
    // 0x1ec158: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x1ec158u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1ec15c: 0x71094018  mult1       $t0, $t0, $t1
    ctx->pc = 0x1ec15cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1ec160: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1ec160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1ec164: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x1ec164u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x1ec168: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x1ec168u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ec16c: 0x30e70002  andi        $a3, $a3, 0x2
    ctx->pc = 0x1ec16cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
    // 0x1ec170: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC170u;
    {
        const bool branch_taken_0x1ec170 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec170) {
            ctx->pc = 0x1EC184u;
            goto label_1ec184;
        }
    }
    ctx->pc = 0x1EC178u;
    // 0x1ec178: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x1ec178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1ec17c: 0xafa701f0  sw          $a3, 0x1F0($sp)
    ctx->pc = 0x1ec17cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 7));
    // 0x1ec180: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1ec180u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1ec184:
    // 0x1ec184: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x1ec184u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ec188: 0x30e70004  andi        $a3, $a3, 0x4
    ctx->pc = 0x1ec188u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x1ec18c: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC18Cu;
    {
        const bool branch_taken_0x1ec18c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec18c) {
            ctx->pc = 0x1EC1A0u;
            goto label_1ec1a0;
        }
    }
    ctx->pc = 0x1EC194u;
    // 0x1ec194: 0x240700c0  addiu       $a3, $zero, 0xC0
    ctx->pc = 0x1ec194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1ec198: 0xafa701f0  sw          $a3, 0x1F0($sp)
    ctx->pc = 0x1ec198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 7));
    // 0x1ec19c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1ec19cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1ec1a0:
    // 0x1ec1a0: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x1ec1a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ec1a4: 0x31070010  andi        $a3, $t0, 0x10
    ctx->pc = 0x1ec1a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16);
    // 0x1ec1a8: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC1A8u;
    {
        const bool branch_taken_0x1ec1a8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec1a8) {
            ctx->pc = 0x1EC1BCu;
            goto label_1ec1bc;
        }
    }
    ctx->pc = 0x1EC1B0u;
    // 0x1ec1b0: 0x31070008  andi        $a3, $t0, 0x8
    ctx->pc = 0x1ec1b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8);
    // 0x1ec1b4: 0x10e0002d  beqz        $a3, . + 4 + (0x2D << 2)
    ctx->pc = 0x1EC1B4u;
    {
        const bool branch_taken_0x1ec1b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec1b4) {
            ctx->pc = 0x1EC26Cu;
            goto label_1ec26c;
        }
    }
    ctx->pc = 0x1EC1BCu;
label_1ec1bc:
    // 0x1ec1bc: 0x820b0042  lb          $t3, 0x42($s0)
    ctx->pc = 0x1ec1bcu;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 66)));
    // 0x1ec1c0: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1ec1c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ec1c4: 0x3c075555  lui         $a3, 0x5555
    ctx->pc = 0x1ec1c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21845 << 16));
    // 0x1ec1c8: 0x8fa90200  lw          $t1, 0x200($sp)
    ctx->pc = 0x1ec1c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1ec1cc: 0x34e85556  ori         $t0, $a3, 0x5556
    ctx->pc = 0x1ec1ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)21846);
    // 0x1ec1d0: 0x8fa70204  lw          $a3, 0x204($sp)
    ctx->pc = 0x1ec1d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x1ec1d4: 0x16a001a  div         $zero, $t3, $t2
    ctx->pc = 0x1ec1d4u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 11);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ec1d8: 0x0  nop
    ctx->pc = 0x1ec1d8u;
    // NOP
    // 0x1ec1dc: 0x0  nop
    ctx->pc = 0x1ec1dcu;
    // NOP
    // 0x1ec1e0: 0x5810  mfhi        $t3
    ctx->pc = 0x1ec1e0u;
    SET_GPR_U64(ctx, 11, ctx->hi);
    // 0x1ec1e4: 0xb5040  sll         $t2, $t3, 1
    ctx->pc = 0x1ec1e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x1ec1e8: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x1ec1e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x1ec1ec: 0xa5140  sll         $t2, $t2, 5
    ctx->pc = 0x1ec1ecu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x1ec1f0: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x1ec1f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1ec1f4: 0xafa901f0  sw          $t1, 0x1F0($sp)
    ctx->pc = 0x1ec1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 9));
    // 0x1ec1f8: 0x82090042  lb          $t1, 0x42($s0)
    ctx->pc = 0x1ec1f8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 66)));
    // 0x1ec1fc: 0x1090018  mult        $zero, $t0, $t1
    ctx->pc = 0x1ec1fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1ec200: 0x0  nop
    ctx->pc = 0x1ec200u;
    // NOP
    // 0x1ec204: 0x0  nop
    ctx->pc = 0x1ec204u;
    // NOP
    // 0x1ec208: 0x4010  mfhi        $t0
    ctx->pc = 0x1ec208u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x1ec20c: 0x94fc2  srl         $t1, $t1, 31
    ctx->pc = 0x1ec20cu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1ec210: 0x1094821  addu        $t1, $t0, $t1
    ctx->pc = 0x1ec210u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1ec214: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x1ec214u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1ec218: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x1ec218u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1ec21c: 0x84140  sll         $t0, $t0, 5
    ctx->pc = 0x1ec21cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x1ec220: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1ec220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1ec224: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x1ec224u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x1ec228: 0x8fa70208  lw          $a3, 0x208($sp)
    ctx->pc = 0x1ec228u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x1ec22c: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1ec22cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x1ec230: 0x8fa3020c  lw          $v1, 0x20C($sp)
    ctx->pc = 0x1ec230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x1ec234: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1ec234u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1ec238: 0x82020042  lb          $v0, 0x42($s0)
    ctx->pc = 0x1ec238u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 66)));
    // 0x1ec23c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x1ec23cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1ec240: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC240u;
    {
        const bool branch_taken_0x1ec240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec240) {
            ctx->pc = 0x1EC250u;
            goto label_1ec250;
        }
    }
    ctx->pc = 0x1EC248u;
    // 0x1ec248: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1ec248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1ec24c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1ec24cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1ec250:
    // 0x1ec250: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x1ec250u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ec254: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ec254u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec258: 0x0  nop
    ctx->pc = 0x1ec258u;
    // NOP
    // 0x1ec25c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ec25cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ec260: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ec260u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ec264: 0xe6810000  swc1        $f1, 0x0($s4)
    ctx->pc = 0x1ec264u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x1ec268: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1ec268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1ec26c:
    // 0x1ec26c: 0x8602003e  lh          $v0, 0x3E($s0)
    ctx->pc = 0x1ec26cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
    // 0x1ec270: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1ec270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec274: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ec274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ec278: 0x0  nop
    ctx->pc = 0x1ec278u;
    // NOP
    // 0x1ec27c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ec27cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ec280: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x1ec280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x1ec284: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ec284u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ec288: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1ec288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1ec28c: 0x86030040  lh          $v1, 0x40($s0)
    ctx->pc = 0x1ec28cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1ec290: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ec290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec294: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ec294u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ec298: 0x0  nop
    ctx->pc = 0x1ec298u;
    // NOP
    // 0x1ec29c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ec29cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ec2a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ec2a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ec2a4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1ec2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1ec2a8:
    // 0x1ec2a8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1ec2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x1ec2ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec2acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec2b0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1EC2B0u;
    SET_GPR_U32(ctx, 31, 0x1EC2B8u);
    ctx->pc = 0x1EC2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC2B0u;
            // 0x1ec2b4: 0x46150302  mul.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC2B8u; }
        if (ctx->pc != 0x1EC2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC2B8u; }
        if (ctx->pc != 0x1EC2B8u) { return; }
    }
    ctx->pc = 0x1EC2B8u;
label_1ec2b8:
    // 0x1ec2b8: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x1ec2b8u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec2bc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ec2bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec2c0: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1ec2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1ec2c4: 0x8634000c  lh          $s4, 0xC($s1)
    ctx->pc = 0x1ec2c4u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ec2c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ec2c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ec2cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ec2ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ec2d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ec2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ec2d4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1ec2d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ec2d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ec2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec2dc: 0x1682000e  bne         $s4, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1EC2DCu;
    {
        const bool branch_taken_0x1ec2dc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EC2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC2DCu;
            // 0x1ec2e0: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec2dc) {
            ctx->pc = 0x1EC318u;
            goto label_1ec318;
        }
    }
    ctx->pc = 0x1EC2E4u;
    // 0x1ec2e4: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x1ec2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x1ec2e8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EC2E8u;
    {
        const bool branch_taken_0x1ec2e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec2e8) {
            ctx->pc = 0x1EC318u;
            goto label_1ec318;
        }
    }
    ctx->pc = 0x1EC2F0u;
    // 0x1ec2f0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1ec2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1ec2f4: 0x10500008  beq         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EC2F4u;
    {
        const bool branch_taken_0x1ec2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1ec2f4) {
            ctx->pc = 0x1EC318u;
            goto label_1ec318;
        }
    }
    ctx->pc = 0x1EC2FCu;
    // 0x1ec2fc: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x1ec2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x1ec300: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec304: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1EC304u;
    SET_GPR_U32(ctx, 31, 0x1EC30Cu);
    ctx->pc = 0x1EC308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC304u;
            // 0x1ec308: 0x46150302  mul.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC30Cu; }
        if (ctx->pc != 0x1EC30Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC30Cu; }
        if (ctx->pc != 0x1EC30Cu) { return; }
    }
    ctx->pc = 0x1EC30Cu;
label_1ec30c:
    // 0x1ec30c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ec30cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec310: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ec310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1ec314: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1ec314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1ec318:
    // 0x1ec318: 0x16800011  bnez        $s4, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EC318u;
    {
        const bool branch_taken_0x1ec318 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec318) {
            ctx->pc = 0x1EC360u;
            goto label_1ec360;
        }
    }
    ctx->pc = 0x1EC320u;
    // 0x1ec320: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1EC320u;
    SET_GPR_U32(ctx, 31, 0x1EC328u);
    ctx->pc = 0x1EC324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC320u;
            // 0x1ec324: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC328u; }
        if (ctx->pc != 0x1EC328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC328u; }
        if (ctx->pc != 0x1EC328u) { return; }
    }
    ctx->pc = 0x1EC328u;
label_1ec328:
    // 0x1ec328: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1ec328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec32c: 0x8e2400d8  lw          $a0, 0xD8($s1)
    ctx->pc = 0x1ec32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x1ec330: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1ec330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1ec334: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x1ec334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1ec338: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ec338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ec33c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ec33cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec340: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x1ec340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec344: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ec344u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec348: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x1ec348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x1ec34c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ec34cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec350: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ec350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec354: 0x46011300  add.s       $f12, $f2, $f1
    ctx->pc = 0x1ec354u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1ec358: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x1EC358u;
    SET_GPR_U32(ctx, 31, 0x1EC360u);
    ctx->pc = 0x1EC35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC358u;
            // 0x1ec35c: 0x46001340  add.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC360u; }
        if (ctx->pc != 0x1EC360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC360u; }
        if (ctx->pc != 0x1EC360u) { return; }
    }
    ctx->pc = 0x1EC360u;
label_1ec360:
    // 0x1ec360: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec364: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x1EC364u;
    SET_GPR_U32(ctx, 31, 0x1EC36Cu);
    ctx->pc = 0x1EC368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC364u;
            // 0x1ec368: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC36Cu; }
        if (ctx->pc != 0x1EC36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC36Cu; }
        if (ctx->pc != 0x1EC36Cu) { return; }
    }
    ctx->pc = 0x1EC36Cu;
label_1ec36c:
    // 0x1ec36c: 0x8626000c  lh          $a2, 0xC($s1)
    ctx->pc = 0x1ec36cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ec370: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1ec370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1ec374: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ec374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ec378: 0x27838140  addiu       $v1, $gp, -0x7EC0
    ctx->pc = 0x1ec378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934848));
    // 0x1ec37c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ec37cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ec380: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x1ec380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec384: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1ec384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1ec388: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ec388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ec38c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1ec38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec390: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1ec390u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ec394: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1ec394u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec398: 0x0  nop
    ctx->pc = 0x1ec398u;
    // NOP
    // 0x1ec39c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1EC39Cu;
    {
        const bool branch_taken_0x1ec39c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EC3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC39Cu;
            // 0x1ec3a0: 0xe6010048  swc1        $f1, 0x48($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec39c) {
            ctx->pc = 0x1EC3BCu;
            goto label_1ec3bc;
        }
    }
    ctx->pc = 0x1EC3A4u;
    // 0x1ec3a4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1ec3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1ec3a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ec3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ec3ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec3acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec3b0: 0x0  nop
    ctx->pc = 0x1ec3b0u;
    // NOP
    // 0x1ec3b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ec3b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ec3b8: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x1ec3b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_1ec3bc:
    // 0x1ec3bc: 0x92020046  lbu         $v0, 0x46($s0)
    ctx->pc = 0x1ec3bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x1ec3c0: 0x241400c0  addiu       $s4, $zero, 0xC0
    ctx->pc = 0x1ec3c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1ec3c4: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x1ec3c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec3c8: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1EC3C8u;
    {
        const bool branch_taken_0x1ec3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC3C8u;
            // 0x1ec3cc: 0x280a82d  daddu       $s5, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec3c8) {
            ctx->pc = 0x1EC4B0u;
            goto label_1ec4b0;
        }
    }
    ctx->pc = 0x1EC3D0u;
    // 0x1ec3d0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1ec3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1ec3d4: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1ec3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ec3d8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1ec3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1ec3dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ec3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ec3e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ec3e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ec3e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec3e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec3e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EC3E8u;
    {
        const bool branch_taken_0x1ec3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC3E8u;
            // 0x1ec3ec: 0xc6020048  lwc1        $f2, 0x48($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec3e8) {
            ctx->pc = 0x1EC3F4u;
            goto label_1ec3f4;
        }
    }
    ctx->pc = 0x1EC3F0u;
label_1ec3f0:
    // 0x1ec3f0: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1ec3f0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1ec3f4:
    // 0x1ec3f4: 0x0  nop
    ctx->pc = 0x1ec3f4u;
    // NOP
    // 0x1ec3f8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1ec3f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec3fc: 0x0  nop
    ctx->pc = 0x1ec3fcu;
    // NOP
    // 0x1ec400: 0x0  nop
    ctx->pc = 0x1ec400u;
    // NOP
    // 0x1ec404: 0x0  nop
    ctx->pc = 0x1ec404u;
    // NOP
    // 0x1ec408: 0x4500fff9  bc1f        . + 4 + (-0x7 << 2)
    ctx->pc = 0x1EC408u;
    {
        const bool branch_taken_0x1ec408 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec408) {
            ctx->pc = 0x1EC3F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ec3f0;
        }
    }
    ctx->pc = 0x1EC410u;
    // 0x1ec410: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1ec410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1ec414: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1ec414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1ec418: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1ec418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1ec41c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ec41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ec420: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ec420u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ec424: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec428: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EC428u;
    {
        const bool branch_taken_0x1ec428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec428) {
            ctx->pc = 0x1EC434u;
            goto label_1ec434;
        }
    }
    ctx->pc = 0x1EC430u;
label_1ec430:
    // 0x1ec430: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1ec430u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1ec434:
    // 0x1ec434: 0x0  nop
    ctx->pc = 0x1ec434u;
    // NOP
    // 0x1ec438: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1ec438u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec43c: 0x0  nop
    ctx->pc = 0x1ec43cu;
    // NOP
    // 0x1ec440: 0x0  nop
    ctx->pc = 0x1ec440u;
    // NOP
    // 0x1ec444: 0x0  nop
    ctx->pc = 0x1ec444u;
    // NOP
    // 0x1ec448: 0x4501fff9  bc1t        . + 4 + (-0x7 << 2)
    ctx->pc = 0x1EC448u;
    {
        const bool branch_taken_0x1ec448 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec448) {
            ctx->pc = 0x1EC430u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ec430;
        }
    }
    ctx->pc = 0x1EC450u;
    // 0x1ec450: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ec450u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec454: 0x0  nop
    ctx->pc = 0x1ec454u;
    // NOP
    // 0x1ec458: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1ec458u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec45c: 0x0  nop
    ctx->pc = 0x1ec45cu;
    // NOP
    // 0x1ec460: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x1EC460u;
    {
        const bool branch_taken_0x1ec460 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec460) {
            ctx->pc = 0x1EC4BCu;
            goto label_1ec4bc;
        }
    }
    ctx->pc = 0x1EC468u;
    // 0x1ec468: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x1ec468u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec46c: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x1ec46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x1ec470: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ec470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ec474: 0x0  nop
    ctx->pc = 0x1ec474u;
    // NOP
    // 0x1ec478: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ec478u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ec47c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1ec47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1ec480: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ec480u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ec484: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec488: 0x0  nop
    ctx->pc = 0x1ec488u;
    // NOP
    // 0x1ec48c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1ec48cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ec490: 0x0  nop
    ctx->pc = 0x1ec490u;
    // NOP
    // 0x1ec494: 0x0  nop
    ctx->pc = 0x1ec494u;
    // NOP
    // 0x1ec498: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1EC498u;
    SET_GPR_U32(ctx, 31, 0x1EC4A0u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC4A0u; }
        if (ctx->pc != 0x1EC4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC4A0u; }
        if (ctx->pc != 0x1EC4A0u) { return; }
    }
    ctx->pc = 0x1EC4A0u;
label_1ec4a0:
    // 0x1ec4a0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1ec4a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec4a4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ec4a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec4a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC4A8u;
    {
        const bool branch_taken_0x1ec4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC4A8u;
            // 0x1ec4ac: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec4a8) {
            ctx->pc = 0x1EC4BCu;
            goto label_1ec4bc;
        }
    }
    ctx->pc = 0x1EC4B0u;
label_1ec4b0:
    // 0x1ec4b0: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x1ec4b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec4b4: 0x260b02d  daddu       $s6, $s3, $zero
    ctx->pc = 0x1ec4b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec4b8: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x1ec4b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ec4bc:
    // 0x1ec4bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec4c0: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1EC4C0u;
    SET_GPR_U32(ctx, 31, 0x1EC4C8u);
    ctx->pc = 0x1EC4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC4C0u;
            // 0x1ec4c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC4C8u; }
        if (ctx->pc != 0x1EC4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC4C8u; }
        if (ctx->pc != 0x1EC4C8u) { return; }
    }
    ctx->pc = 0x1EC4C8u;
label_1ec4c8:
    // 0x1ec4c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec4cc: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1EC4CCu;
    SET_GPR_U32(ctx, 31, 0x1EC4D4u);
    ctx->pc = 0x1EC4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC4CCu;
            // 0x1ec4d0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC4D4u; }
        if (ctx->pc != 0x1EC4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC4D4u; }
        if (ctx->pc != 0x1EC4D4u) { return; }
    }
    ctx->pc = 0x1EC4D4u;
label_1ec4d4:
    // 0x1ec4d4: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x1ec4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x1ec4d8: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1EC4D8u;
    SET_GPR_U32(ctx, 31, 0x1EC4E0u);
    ctx->pc = 0x1EC4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC4D8u;
            // 0x1ec4dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC4E0u; }
        if (ctx->pc != 0x1EC4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC4E0u; }
        if (ctx->pc != 0x1EC4E0u) { return; }
    }
    ctx->pc = 0x1EC4E0u;
label_1ec4e0:
    // 0x1ec4e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec4e4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ec4e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec4e8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1ec4e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec4ec: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1ec4ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec4f0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1EC4F0u;
    SET_GPR_U32(ctx, 31, 0x1EC4F8u);
    ctx->pc = 0x1EC4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC4F0u;
            // 0x1ec4f4: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC4F8u; }
        if (ctx->pc != 0x1EC4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC4F8u; }
        if (ctx->pc != 0x1EC4F8u) { return; }
    }
    ctx->pc = 0x1EC4F8u;
label_1ec4f8:
    // 0x1ec4f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec4fc: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1ec4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1ec500: 0xc08ca30  jal         func_2328C0
    ctx->pc = 0x1EC500u;
    SET_GPR_U32(ctx, 31, 0x1EC508u);
    ctx->pc = 0x1EC504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC500u;
            // 0x1ec504: 0x27a601f0  addiu       $a2, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2328C0u;
    if (runtime->hasFunction(0x2328C0u)) {
        auto targetFn = runtime->lookupFunction(0x2328C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC508u; }
        if (ctx->pc != 0x1EC508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad_f___FP11mgCDrawPrim9mgRect_f_9mgRect_i__0x2328c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC508u; }
        if (ctx->pc != 0x1EC508u) { return; }
    }
    ctx->pc = 0x1EC508u;
label_1ec508:
    // 0x1ec508: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1EC508u;
    SET_GPR_U32(ctx, 31, 0x1EC510u);
    ctx->pc = 0x1EC50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC508u;
            // 0x1ec50c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC510u; }
        if (ctx->pc != 0x1EC510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC510u; }
        if (ctx->pc != 0x1EC510u) { return; }
    }
    ctx->pc = 0x1EC510u;
label_1ec510:
    // 0x1ec510: 0x92030045  lbu         $v1, 0x45($s0)
    ctx->pc = 0x1ec510u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x1ec514: 0x1460003e  bnez        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x1EC514u;
    {
        const bool branch_taken_0x1ec514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec514) {
            ctx->pc = 0x1EC610u;
            goto label_1ec610;
        }
    }
    ctx->pc = 0x1EC51Cu;
    // 0x1ec51c: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x1ec51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x1ec520: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x1EC520u;
    {
        const bool branch_taken_0x1ec520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec520) {
            ctx->pc = 0x1EC610u;
            goto label_1ec610;
        }
    }
    ctx->pc = 0x1EC528u;
    // 0x1ec528: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1ec528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1ec52c: 0x10700038  beq         $v1, $s0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1EC52Cu;
    {
        const bool branch_taken_0x1ec52c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x1ec52c) {
            ctx->pc = 0x1EC610u;
            goto label_1ec610;
        }
    }
    ctx->pc = 0x1EC534u;
    // 0x1ec534: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1ec534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec538: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1ec538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1ec53c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ec53cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ec540: 0x0  nop
    ctx->pc = 0x1ec540u;
    // NOP
    // 0x1ec544: 0x46000d40  add.s       $f21, $f1, $f0
    ctx->pc = 0x1ec544u;
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ec548: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1EC548u;
    SET_GPR_U32(ctx, 31, 0x1EC550u);
    ctx->pc = 0x1EC54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC548u;
            // 0x1ec54c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC550u; }
        if (ctx->pc != 0x1EC550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC550u; }
        if (ctx->pc != 0x1EC550u) { return; }
    }
    ctx->pc = 0x1EC550u;
label_1ec550:
    // 0x1ec550: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x1ec550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x1ec554: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x1ec554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x1ec558: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ec558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ec55c: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x1ec55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x1ec560: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ec560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec564: 0x46000d80  add.s       $f22, $f1, $f0
    ctx->pc = 0x1ec564u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ec568: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1EC568u;
    SET_GPR_U32(ctx, 31, 0x1EC570u);
    ctx->pc = 0x1EC56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC568u;
            // 0x1ec56c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC570u; }
        if (ctx->pc != 0x1EC570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC570u; }
        if (ctx->pc != 0x1EC570u) { return; }
    }
    ctx->pc = 0x1EC570u;
label_1ec570:
    // 0x1ec570: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x1ec570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x1ec574: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1ec574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1ec578: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec57c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1EC57Cu;
    SET_GPR_U32(ctx, 31, 0x1EC584u);
    ctx->pc = 0x1EC580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC57Cu;
            // 0x1ec580: 0x46150300  add.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC584u; }
        if (ctx->pc != 0x1EC584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC584u; }
        if (ctx->pc != 0x1EC584u) { return; }
    }
    ctx->pc = 0x1EC584u;
label_1ec584:
    // 0x1ec584: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1ec584u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec588: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1ec588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1ec58c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec58cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec590: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1EC590u;
    SET_GPR_U32(ctx, 31, 0x1EC598u);
    ctx->pc = 0x1EC594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC590u;
            // 0x1ec594: 0x46160300  add.s       $f12, $f0, $f22 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC598u; }
        if (ctx->pc != 0x1EC598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC598u; }
        if (ctx->pc != 0x1EC598u) { return; }
    }
    ctx->pc = 0x1EC598u;
label_1ec598:
    // 0x1ec598: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ec598u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec59c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec5a0: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1EC5A0u;
    SET_GPR_U32(ctx, 31, 0x1EC5A8u);
    ctx->pc = 0x1EC5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC5A0u;
            // 0x1ec5a4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC5A8u; }
        if (ctx->pc != 0x1EC5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC5A8u; }
        if (ctx->pc != 0x1EC5A8u) { return; }
    }
    ctx->pc = 0x1EC5A8u;
label_1ec5a8:
    // 0x1ec5a8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ec5a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec5ac: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1ec5acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec5b0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1ec5b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec5b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec5b8: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1EC5B8u;
    SET_GPR_U32(ctx, 31, 0x1EC5C0u);
    ctx->pc = 0x1EC5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC5B8u;
            // 0x1ec5bc: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC5C0u; }
        if (ctx->pc != 0x1EC5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC5C0u; }
        if (ctx->pc != 0x1EC5C0u) { return; }
    }
    ctx->pc = 0x1EC5C0u;
label_1ec5c0:
    // 0x1ec5c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec5c4: 0x240501ec  addiu       $a1, $zero, 0x1EC
    ctx->pc = 0x1ec5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 492));
    // 0x1ec5c8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1EC5C8u;
    SET_GPR_U32(ctx, 31, 0x1EC5D0u);
    ctx->pc = 0x1EC5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC5C8u;
            // 0x1ec5cc: 0x24060042  addiu       $a2, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC5D0u; }
        if (ctx->pc != 0x1EC5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC5D0u; }
        if (ctx->pc != 0x1EC5D0u) { return; }
    }
    ctx->pc = 0x1EC5D0u;
label_1ec5d0:
    // 0x1ec5d0: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x1ec5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1ec5d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec5d8: 0x8fa600bc  lw          $a2, 0xBC($sp)
    ctx->pc = 0x1ec5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1ec5dc: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1EC5DCu;
    SET_GPR_U32(ctx, 31, 0x1EC5E4u);
    ctx->pc = 0x1EC5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC5DCu;
            // 0x1ec5e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC5E4u; }
        if (ctx->pc != 0x1EC5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC5E4u; }
        if (ctx->pc != 0x1EC5E4u) { return; }
    }
    ctx->pc = 0x1EC5E4u;
label_1ec5e4:
    // 0x1ec5e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec5e8: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x1ec5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1ec5ec: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1EC5ECu;
    SET_GPR_U32(ctx, 31, 0x1EC5F4u);
    ctx->pc = 0x1EC5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC5ECu;
            // 0x1ec5f0: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC5F4u; }
        if (ctx->pc != 0x1EC5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC5F4u; }
        if (ctx->pc != 0x1EC5F4u) { return; }
    }
    ctx->pc = 0x1EC5F4u;
label_1ec5f4:
    // 0x1ec5f4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1ec5f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec5f8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ec5f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec5fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec600: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1EC600u;
    SET_GPR_U32(ctx, 31, 0x1EC608u);
    ctx->pc = 0x1EC604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC600u;
            // 0x1ec604: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC608u; }
        if (ctx->pc != 0x1EC608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC608u; }
        if (ctx->pc != 0x1EC608u) { return; }
    }
    ctx->pc = 0x1EC608u;
label_1ec608:
    // 0x1ec608: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1EC608u;
    SET_GPR_U32(ctx, 31, 0x1EC610u);
    ctx->pc = 0x1EC60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC608u;
            // 0x1ec60c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC610u; }
        if (ctx->pc != 0x1EC610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC610u; }
        if (ctx->pc != 0x1EC610u) { return; }
    }
    ctx->pc = 0x1EC610u;
label_1ec610:
    // 0x1ec610: 0x92030046  lbu         $v1, 0x46($s0)
    ctx->pc = 0x1ec610u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x1ec614: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1EC614u;
    {
        const bool branch_taken_0x1ec614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC614u;
            // 0x1ec618: 0x3c044300  lui         $a0, 0x4300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17152 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec614) {
            ctx->pc = 0x1EC6CCu;
            goto label_1ec6cc;
        }
    }
    ctx->pc = 0x1EC61Cu;
    // 0x1ec61c: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x1ec61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec620: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1EC620u;
    SET_GPR_U32(ctx, 31, 0x1EC628u);
    ctx->pc = 0x1EC624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC620u;
            // 0x1ec624: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC628u; }
        if (ctx->pc != 0x1EC628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC628u; }
        if (ctx->pc != 0x1EC628u) { return; }
    }
    ctx->pc = 0x1EC628u;
label_1ec628:
    // 0x1ec628: 0x3c0440c0  lui         $a0, 0x40C0
    ctx->pc = 0x1ec628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16576 << 16));
    // 0x1ec62c: 0x3c033f38  lui         $v1, 0x3F38
    ctx->pc = 0x1ec62cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16184 << 16));
    // 0x1ec630: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x1ec630u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ec634: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x1ec634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1ec638: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1ec638u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ec63c: 0x3c064280  lui         $a2, 0x4280
    ctx->pc = 0x1ec63cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17024 << 16));
    // 0x1ec640: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1ec640u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1ec644: 0x3c044238  lui         $a0, 0x4238
    ctx->pc = 0x1ec644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16952 << 16));
    // 0x1ec648: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1ec648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1ec64c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1ec64cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1ec650: 0x46001102  mul.s       $f4, $f2, $f0
    ctx->pc = 0x1ec650u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1ec654: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x1ec654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1ec658: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x1ec658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec65c: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x1ec65cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ec660: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1ec660u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ec664: 0x27a300d4  addiu       $v1, $sp, 0xD4
    ctx->pc = 0x1ec664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x1ec668: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x1ec668u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1ec66c: 0xe4a00040  swc1        $f0, 0x40($a1)
    ctx->pc = 0x1ec66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
    // 0x1ec670: 0x46041040  add.s       $f1, $f2, $f4
    ctx->pc = 0x1ec670u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x1ec674: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1ec674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ec678: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ec678u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec67c: 0x0  nop
    ctx->pc = 0x1ec67cu;
    // NOP
    // 0x1ec680: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1ec680u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x1ec684: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x1ec684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1ec688: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1ec688u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1ec68c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1ec68cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x1ec690: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ec690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ec694: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1ec694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1ec698: 0xe4620044  swc1        $f2, 0x44($v1)
    ctx->pc = 0x1ec698u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x1ec69c: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x1ec69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1ec6a0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ec6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ec6a4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1ec6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1ec6a8: 0xe4610048  swc1        $f1, 0x48($v1)
    ctx->pc = 0x1ec6a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x1ec6ac: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x1ec6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1ec6b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ec6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ec6b4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1ec6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1ec6b8: 0xe460004c  swc1        $f0, 0x4C($v1)
    ctx->pc = 0x1ec6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 76), bits); }
    // 0x1ec6bc: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x1ec6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1ec6c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ec6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ec6c4: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x1ec6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
    // 0x1ec6c8: 0x3c044300  lui         $a0, 0x4300
    ctx->pc = 0x1ec6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17152 << 16));
label_1ec6cc:
    // 0x1ec6cc: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x1ec6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x1ec6d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ec6d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec6d4: 0x10600050  beqz        $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x1EC6D4u;
    {
        const bool branch_taken_0x1ec6d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC6D4u;
            // 0x1ec6d8: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec6d4) {
            ctx->pc = 0x1EC818u;
            goto label_1ec818;
        }
    }
    ctx->pc = 0x1EC6DCu;
    // 0x1ec6dc: 0x92040045  lbu         $a0, 0x45($s0)
    ctx->pc = 0x1ec6dcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x1ec6e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ec6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec6e4: 0x1483004c  bne         $a0, $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x1EC6E4u;
    {
        const bool branch_taken_0x1ec6e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ec6e4) {
            ctx->pc = 0x1EC818u;
            goto label_1ec818;
        }
    }
    ctx->pc = 0x1EC6ECu;
    // 0x1ec6ec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ec6ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec6f0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ec6f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec6f4:
    // 0x1ec6f4: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x1ec6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1ec6f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ec6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec6fc: 0x832004  sllv        $a0, $v1, $a0
    ctx->pc = 0x1ec6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1ec700: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1ec700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ec704: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1ec704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1ec708: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x1EC708u;
    {
        const bool branch_taken_0x1ec708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec708) {
            ctx->pc = 0x1EC808u;
            goto label_1ec808;
        }
    }
    ctx->pc = 0x1EC710u;
    // 0x1ec710: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x1ec710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x1ec714: 0x142040  sll         $a0, $s4, 1
    ctx->pc = 0x1ec714u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1ec718: 0x2463dbe0  addiu       $v1, $v1, -0x2420
    ctx->pc = 0x1ec718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958048));
    // 0x1ec71c: 0x64a821  addu        $s5, $v1, $a0
    ctx->pc = 0x1ec71cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ec720: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x1ec720u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1ec724: 0x4600038  bltz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x1EC724u;
    {
        const bool branch_taken_0x1ec724 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1ec724) {
            ctx->pc = 0x1EC808u;
            goto label_1ec808;
        }
    }
    ctx->pc = 0x1EC72Cu;
    // 0x1ec72c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x1ec72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x1ec730: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x1ec730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1ec734: 0x2442dc00  addiu       $v0, $v0, -0x2400
    ctx->pc = 0x1ec734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958080));
    // 0x1ec738: 0x26b60004  addiu       $s6, $s5, 0x4
    ctx->pc = 0x1ec738u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x1ec73c: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x1ec73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1ec740: 0x26b70006  addiu       $s7, $s5, 0x6
    ctx->pc = 0x1ec740u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 6));
    // 0x1ec744: 0x84650002  lh          $a1, 0x2($v1)
    ctx->pc = 0x1ec744u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1ec748: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x1ec748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x1ec74c: 0x84660000  lh          $a2, 0x0($v1)
    ctx->pc = 0x1ec74cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ec750: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ec750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec754: 0xc7a300d0  lwc1        $f3, 0xD0($sp)
    ctx->pc = 0x1ec754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ec758: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1ec758u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ec75c: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x1ec75cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ec760: 0x86a30004  lh          $v1, 0x4($s5)
    ctx->pc = 0x1ec760u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1ec764: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ec764u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ec768: 0x86a20006  lh          $v0, 0x6($s5)
    ctx->pc = 0x1ec768u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x1ec76c: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x1ec76cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ec770: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1ec770u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ec774: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ec774u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ec778: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec77c: 0x0  nop
    ctx->pc = 0x1ec77cu;
    // NOP
    // 0x1ec780: 0x46800ba0  cvt.s.w     $f14, $f1
    ctx->pc = 0x1ec780u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x1ec784: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x1ec784u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x1ec788: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x1EC788u;
    SET_GPR_U32(ctx, 31, 0x1EC790u);
    ctx->pc = 0x1EC78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC788u;
            // 0x1ec78c: 0x46021b00  add.s       $f12, $f3, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC790u; }
        if (ctx->pc != 0x1EC790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC790u; }
        if (ctx->pc != 0x1EC790u) { return; }
    }
    ctx->pc = 0x1EC790u;
label_1ec790:
    // 0x1ec790: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec794: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x1EC794u;
    SET_GPR_U32(ctx, 31, 0x1EC79Cu);
    ctx->pc = 0x1EC798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC794u;
            // 0x1ec798: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC79Cu; }
        if (ctx->pc != 0x1EC79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC79Cu; }
        if (ctx->pc != 0x1EC79Cu) { return; }
    }
    ctx->pc = 0x1EC79Cu;
label_1ec79c:
    // 0x1ec79c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec7a0: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1EC7A0u;
    SET_GPR_U32(ctx, 31, 0x1EC7A8u);
    ctx->pc = 0x1EC7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC7A0u;
            // 0x1ec7a4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC7A8u; }
        if (ctx->pc != 0x1EC7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC7A8u; }
        if (ctx->pc != 0x1EC7A8u) { return; }
    }
    ctx->pc = 0x1EC7A8u;
label_1ec7a8:
    // 0x1ec7a8: 0x8e2500d4  lw          $a1, 0xD4($s1)
    ctx->pc = 0x1ec7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x1ec7ac: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1EC7ACu;
    SET_GPR_U32(ctx, 31, 0x1EC7B4u);
    ctx->pc = 0x1EC7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC7ACu;
            // 0x1ec7b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC7B4u; }
        if (ctx->pc != 0x1EC7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC7B4u; }
        if (ctx->pc != 0x1EC7B4u) { return; }
    }
    ctx->pc = 0x1EC7B4u;
label_1ec7b4:
    // 0x1ec7b4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1EC7B4u;
    SET_GPR_U32(ctx, 31, 0x1EC7BCu);
    ctx->pc = 0x1EC7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC7B4u;
            // 0x1ec7b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC7BCu; }
        if (ctx->pc != 0x1EC7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC7BCu; }
        if (ctx->pc != 0x1EC7BCu) { return; }
    }
    ctx->pc = 0x1EC7BCu;
label_1ec7bc:
    // 0x1ec7bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec7c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ec7c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec7c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1ec7c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec7c8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1ec7c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec7cc: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1EC7CCu;
    SET_GPR_U32(ctx, 31, 0x1EC7D4u);
    ctx->pc = 0x1EC7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC7CCu;
            // 0x1ec7d0: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC7D4u; }
        if (ctx->pc != 0x1EC7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC7D4u; }
        if (ctx->pc != 0x1EC7D4u) { return; }
    }
    ctx->pc = 0x1EC7D4u;
label_1ec7d4:
    // 0x1ec7d4: 0x86c70000  lh          $a3, 0x0($s6)
    ctx->pc = 0x1ec7d4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1ec7d8: 0x86e80000  lh          $t0, 0x0($s7)
    ctx->pc = 0x1ec7d8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1ec7dc: 0x86a50000  lh          $a1, 0x0($s5)
    ctx->pc = 0x1ec7dcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1ec7e0: 0x86a60002  lh          $a2, 0x2($s5)
    ctx->pc = 0x1ec7e0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x1ec7e4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1EC7E4u;
    SET_GPR_U32(ctx, 31, 0x1EC7ECu);
    ctx->pc = 0x1EC7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC7E4u;
            // 0x1ec7e8: 0x27a40220  addiu       $a0, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC7ECu; }
        if (ctx->pc != 0x1EC7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC7ECu; }
        if (ctx->pc != 0x1EC7ECu) { return; }
    }
    ctx->pc = 0x1EC7ECu;
label_1ec7ec:
    // 0x1ec7ec: 0xc7ac0210  lwc1        $f12, 0x210($sp)
    ctx->pc = 0x1ec7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ec7f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec7f4: 0xc7ad0214  lwc1        $f13, 0x214($sp)
    ctx->pc = 0x1ec7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ec7f8: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x1EC7F8u;
    SET_GPR_U32(ctx, 31, 0x1EC800u);
    ctx->pc = 0x1EC7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC7F8u;
            // 0x1ec7fc: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC800u; }
        if (ctx->pc != 0x1EC800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC800u; }
        if (ctx->pc != 0x1EC800u) { return; }
    }
    ctx->pc = 0x1EC800u;
label_1ec800:
    // 0x1ec800: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1EC800u;
    SET_GPR_U32(ctx, 31, 0x1EC808u);
    ctx->pc = 0x1EC804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC800u;
            // 0x1ec804: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC808u; }
        if (ctx->pc != 0x1EC808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC808u; }
        if (ctx->pc != 0x1EC808u) { return; }
    }
    ctx->pc = 0x1EC808u;
label_1ec808:
    // 0x1ec808: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ec808u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1ec80c: 0x2a630003  slti        $v1, $s3, 0x3
    ctx->pc = 0x1ec80cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1ec810: 0x1460ffb8  bnez        $v1, . + 4 + (-0x48 << 2)
    ctx->pc = 0x1EC810u;
    {
        const bool branch_taken_0x1ec810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC810u;
            // 0x1ec814: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec810) {
            ctx->pc = 0x1EC6F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ec6f4;
        }
    }
    ctx->pc = 0x1EC818u;
label_1ec818:
    // 0x1ec818: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1ec818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1ec81c:
    // 0x1ec81c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1ec81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1ec820: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1ec820u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ec824: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1ec824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ec828: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1ec828u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ec82c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1ec82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ec830: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1ec830u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ec834: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1ec834u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ec838: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1ec838u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ec83c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1ec83cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ec840: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1ec840u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ec844: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ec844u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec848: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ec848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec84c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC84Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC84Cu;
            // 0x1ec850: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EC854u;
}
