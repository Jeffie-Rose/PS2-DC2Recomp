#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNowPosRGBA__16CMenuPosDataFormFP18MENUFORMPARTS_TYPEP16MENU_BASETEXINFOPfPUc
// Address: 0x226100 - 0x226770
void GetNowPosRGBA__16CMenuPosDataFormFP18MENUFORMPARTS_TYPEP16MENU_BASETEXINFOPfPUc_0x226100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNowPosRGBA__16CMenuPosDataFormFP18MENUFORMPARTS_TYPEP16MENU_BASETEXINFOPfPUc_0x226100");
#endif

    switch (ctx->pc) {
        case 0x2261b0u: goto label_2261b0;
        case 0x2261e0u: goto label_2261e0;
        case 0x2261ecu: goto label_2261ec;
        case 0x2261f8u: goto label_2261f8;
        case 0x226204u: goto label_226204;
        case 0x22621cu: goto label_22621c;
        case 0x226248u: goto label_226248;
        case 0x226254u: goto label_226254;
        case 0x226378u: goto label_226378;
        case 0x226384u: goto label_226384;
        case 0x2263d4u: goto label_2263d4;
        case 0x2263ecu: goto label_2263ec;
        case 0x226400u: goto label_226400;
        case 0x226600u: goto label_226600;
        default: break;
    }

    ctx->pc = 0x226100u;

    // 0x226100: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x226100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x226104: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x226104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x226108: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x226108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x22610c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x22610cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x226110: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x226110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x226114: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x226114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x226118: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x226118u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22611c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x22611cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x226120: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x226120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x226124: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x226124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x226128: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x226128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x22612c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22612cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x226130: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x226130u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x226134: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x226134u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x226138: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x226138u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x22613c: 0xafa500cc  sw          $a1, 0xCC($sp)
    ctx->pc = 0x22613cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 5));
    // 0x226140: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x226140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x226144: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x226144u;
    {
        const bool branch_taken_0x226144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226144u;
            // 0x226148: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226144) {
            ctx->pc = 0x226154u;
            goto label_226154;
        }
    }
    ctx->pc = 0x22614Cu;
    // 0x22614c: 0x10000179  b           . + 4 + (0x179 << 2)
    ctx->pc = 0x22614Cu;
    {
        const bool branch_taken_0x22614c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22614Cu;
            // 0x226150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22614c) {
            ctx->pc = 0x226734u;
            goto label_226734;
        }
    }
    ctx->pc = 0x226154u;
label_226154:
    // 0x226154: 0x8c500040  lw          $s0, 0x40($v0)
    ctx->pc = 0x226154u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x226158: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x226158u;
    {
        const bool branch_taken_0x226158 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x226158) {
            ctx->pc = 0x22616Cu;
            goto label_22616c;
        }
    }
    ctx->pc = 0x226160u;
    // 0x226160: 0x90420044  lbu         $v0, 0x44($v0)
    ctx->pc = 0x226160u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x226164: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x226164u;
    {
        const bool branch_taken_0x226164 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x226164) {
            ctx->pc = 0x226174u;
            goto label_226174;
        }
    }
    ctx->pc = 0x22616Cu;
label_22616c:
    // 0x22616c: 0x10000171  b           . + 4 + (0x171 << 2)
    ctx->pc = 0x22616Cu;
    {
        const bool branch_taken_0x22616c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22616Cu;
            // 0x226170: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22616c) {
            ctx->pc = 0x226734u;
            goto label_226734;
        }
    }
    ctx->pc = 0x226174u;
label_226174:
    // 0x226174: 0xc485000c  lwc1        $f5, 0xC($a0)
    ctx->pc = 0x226174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x226178: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x226178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x22617c: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x22617cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x226180: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x226180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x226184: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x226184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226188: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x226188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22618c: 0xc444001c  lwc1        $f4, 0x1C($v0)
    ctx->pc = 0x22618cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x226190: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x226190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x226194: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x226194u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x226198: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x226198u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22619c: 0x468018a0  cvt.s.w     $f2, $f3
    ctx->pc = 0x22619cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2261a0: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x2261a0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x2261a4: 0x46041500  add.s       $f20, $f2, $f4
    ctx->pc = 0x2261a4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x2261a8: 0x10000159  b           . + 4 + (0x159 << 2)
    ctx->pc = 0x2261A8u;
    {
        const bool branch_taken_0x2261a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2261ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2261A8u;
            // 0x2261ac: 0x46010540  add.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2261a8) {
            ctx->pc = 0x226710u;
            goto label_226710;
        }
    }
    ctx->pc = 0x2261B0u;
label_2261b0:
    // 0x2261b0: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x2261b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2261b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2261b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2261b8: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2261B8u;
    {
        const bool branch_taken_0x2261b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2261b8) {
            ctx->pc = 0x22620Cu;
            goto label_22620c;
        }
    }
    ctx->pc = 0x2261C0u;
    // 0x2261c0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2261c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2261c4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2261c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2261c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2261c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2261cc: 0x0  nop
    ctx->pc = 0x2261ccu;
    // NOP
    // 0x2261d0: 0x4500014b  bc1f        . + 4 + (0x14B << 2)
    ctx->pc = 0x2261D0u;
    {
        const bool branch_taken_0x2261d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2261d0) {
            ctx->pc = 0x226700u;
            goto label_226700;
        }
    }
    ctx->pc = 0x2261D8u;
    // 0x2261d8: 0xc0a24b0  jal         func_2892C0
    ctx->pc = 0x2261D8u;
    SET_GPR_U32(ctx, 31, 0x2261E0u);
    ctx->pc = 0x2261DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2261D8u;
            // 0x2261dc: 0xc60c000c  lwc1        $f12, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2261E0u; }
        if (ctx->pc != 0x2261E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2261E0u; }
        if (ctx->pc != 0x2261E0u) { return; }
    }
    ctx->pc = 0x2261E0u;
label_2261e0:
    // 0x2261e0: 0xa2c20000  sb          $v0, 0x0($s6)
    ctx->pc = 0x2261e0u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2261e4: 0xc0a24b0  jal         func_2892C0
    ctx->pc = 0x2261E4u;
    SET_GPR_U32(ctx, 31, 0x2261ECu);
    ctx->pc = 0x2261E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2261E4u;
            // 0x2261e8: 0xc60c0010  lwc1        $f12, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2261ECu; }
        if (ctx->pc != 0x2261ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2261ECu; }
        if (ctx->pc != 0x2261ECu) { return; }
    }
    ctx->pc = 0x2261ECu;
label_2261ec:
    // 0x2261ec: 0xa2c20001  sb          $v0, 0x1($s6)
    ctx->pc = 0x2261ecu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2261f0: 0xc0a24b0  jal         func_2892C0
    ctx->pc = 0x2261F0u;
    SET_GPR_U32(ctx, 31, 0x2261F8u);
    ctx->pc = 0x2261F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2261F0u;
            // 0x2261f4: 0xc60c0014  lwc1        $f12, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2261F8u; }
        if (ctx->pc != 0x2261F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2261F8u; }
        if (ctx->pc != 0x2261F8u) { return; }
    }
    ctx->pc = 0x2261F8u;
label_2261f8:
    // 0x2261f8: 0xa2c20002  sb          $v0, 0x2($s6)
    ctx->pc = 0x2261f8u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2261fc: 0xc0a24b0  jal         func_2892C0
    ctx->pc = 0x2261FCu;
    SET_GPR_U32(ctx, 31, 0x226204u);
    ctx->pc = 0x226200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2261FCu;
            // 0x226200: 0xc60c0018  lwc1        $f12, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226204u; }
        if (ctx->pc != 0x226204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226204u; }
        if (ctx->pc != 0x226204u) { return; }
    }
    ctx->pc = 0x226204u;
label_226204:
    // 0x226204: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x226204u;
    {
        const bool branch_taken_0x226204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226204u;
            // 0x226208: 0xa2c20003  sb          $v0, 0x3($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226204) {
            ctx->pc = 0x226700u;
            goto label_226700;
        }
    }
    ctx->pc = 0x22620Cu;
label_22620c:
    // 0x22620c: 0x0  nop
    ctx->pc = 0x22620cu;
    // NOP
    // 0x226210: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x226210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x226214: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x226214u;
    {
        const bool branch_taken_0x226214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x226218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226214u;
            // 0x226218: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226214) {
            ctx->pc = 0x226280u;
            goto label_226280;
        }
    }
    ctx->pc = 0x22621Cu;
label_22621c:
    // 0x22621c: 0x0  nop
    ctx->pc = 0x22621cu;
    // NOP
    // 0x226220: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x226220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x226224: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x226224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226228: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x226228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22622c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22622cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x226230: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x226230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226234: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x226234u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x226238: 0x0  nop
    ctx->pc = 0x226238u;
    // NOP
    // 0x22623c: 0x0  nop
    ctx->pc = 0x22623cu;
    // NOP
    // 0x226240: 0xc047964  jal         func_11E590
    ctx->pc = 0x226240u;
    SET_GPR_U32(ctx, 31, 0x226248u);
    ctx->pc = 0x226244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226240u;
            // 0x226244: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226248u; }
        if (ctx->pc != 0x226248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226248u; }
        if (ctx->pc != 0x226248u) { return; }
    }
    ctx->pc = 0x226248u;
label_226248:
    // 0x226248: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x226248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22624c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x22624Cu;
    SET_GPR_U32(ctx, 31, 0x226254u);
    ctx->pc = 0x226250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22624Cu;
            // 0x226250: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226254u; }
        if (ctx->pc != 0x226254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226254u; }
        if (ctx->pc != 0x226254u) { return; }
    }
    ctx->pc = 0x226254u;
label_226254:
    // 0x226254: 0x2d13821  addu        $a3, $s6, $s1
    ctx->pc = 0x226254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x226258: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x226258u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x22625c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22625cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x226260: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x226260u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x226264: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x226264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x226268: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x226268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22626c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22626cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x226270: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x226270u;
    {
        const bool branch_taken_0x226270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x226274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226270u;
            // 0x226274: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226270) {
            ctx->pc = 0x22621Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22621c;
        }
    }
    ctx->pc = 0x226278u;
    // 0x226278: 0x10000121  b           . + 4 + (0x121 << 2)
    ctx->pc = 0x226278u;
    {
        const bool branch_taken_0x226278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226278) {
            ctx->pc = 0x226700u;
            goto label_226700;
        }
    }
    ctx->pc = 0x226280u;
label_226280:
    // 0x226280: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x226280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x226284: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x226284u;
    {
        const bool branch_taken_0x226284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x226288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226284u;
            // 0x226288: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226284) {
            ctx->pc = 0x226294u;
            goto label_226294;
        }
    }
    ctx->pc = 0x22628Cu;
    // 0x22628c: 0x14620075  bne         $v1, $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x22628Cu;
    {
        const bool branch_taken_0x22628c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22628c) {
            ctx->pc = 0x226464u;
            goto label_226464;
        }
    }
    ctx->pc = 0x226294u;
label_226294:
    // 0x226294: 0x0  nop
    ctx->pc = 0x226294u;
    // NOP
    // 0x226298: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x226298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22629c: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x22629cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2262a0: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2262A0u;
    {
        const bool branch_taken_0x2262a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2262A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2262A0u;
            // 0x2262a4: 0xc6010004  lwc1        $f1, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2262a0) {
            ctx->pc = 0x226320u;
            goto label_226320;
        }
    }
    ctx->pc = 0x2262A8u;
    // 0x2262a8: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x2262a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2262ac: 0x46161036  c.le.s      $f2, $f22
    ctx->pc = 0x2262acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2262b0: 0x0  nop
    ctx->pc = 0x2262b0u;
    // NOP
    // 0x2262b4: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x2262B4u;
    {
        const bool branch_taken_0x2262b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2262B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2262B4u;
            // 0x2262b8: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2262b4) {
            ctx->pc = 0x2262E8u;
            goto label_2262e8;
        }
    }
    ctx->pc = 0x2262BCu;
    // 0x2262bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2262bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2262c0: 0x0  nop
    ctx->pc = 0x2262c0u;
    // NOP
    // 0x2262c4: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2262c4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2262c8: 0x0  nop
    ctx->pc = 0x2262c8u;
    // NOP
    // 0x2262cc: 0x0  nop
    ctx->pc = 0x2262ccu;
    // NOP
    // 0x2262d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2262d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2262d4: 0x0  nop
    ctx->pc = 0x2262d4u;
    // NOP
    // 0x2262d8: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x2262D8u;
    {
        const bool branch_taken_0x2262d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2262d8) {
            ctx->pc = 0x226320u;
            goto label_226320;
        }
    }
    ctx->pc = 0x2262E0u;
    // 0x2262e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2262E0u;
    {
        const bool branch_taken_0x2262e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2262E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2262E0u;
            // 0x2262e4: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2262e0) {
            ctx->pc = 0x226320u;
            goto label_226320;
        }
    }
    ctx->pc = 0x2262E8u;
label_2262e8:
    // 0x2262e8: 0x46161034  c.lt.s      $f2, $f22
    ctx->pc = 0x2262e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2262ec: 0x0  nop
    ctx->pc = 0x2262ecu;
    // NOP
    // 0x2262f0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2262F0u;
    {
        const bool branch_taken_0x2262f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2262F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2262F0u;
            // 0x2262f4: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2262f0) {
            ctx->pc = 0x226320u;
            goto label_226320;
        }
    }
    ctx->pc = 0x2262F8u;
    // 0x2262f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2262f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2262fc: 0x0  nop
    ctx->pc = 0x2262fcu;
    // NOP
    // 0x226300: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x226300u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x226304: 0x0  nop
    ctx->pc = 0x226304u;
    // NOP
    // 0x226308: 0x0  nop
    ctx->pc = 0x226308u;
    // NOP
    // 0x22630c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22630cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x226310: 0x0  nop
    ctx->pc = 0x226310u;
    // NOP
    // 0x226314: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x226314u;
    {
        const bool branch_taken_0x226314 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x226314) {
            ctx->pc = 0x226320u;
            goto label_226320;
        }
    }
    ctx->pc = 0x22631Cu;
    // 0x22631c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x22631cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_226320:
    // 0x226320: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x226320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x226324: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226324u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226328: 0x0  nop
    ctx->pc = 0x226328u;
    // NOP
    // 0x22632c: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x22632cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x226330: 0x0  nop
    ctx->pc = 0x226330u;
    // NOP
    // 0x226334: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x226334u;
    {
        const bool branch_taken_0x226334 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x226338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226334u;
            // 0x226338: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226334) {
            ctx->pc = 0x226350u;
            goto label_226350;
        }
    }
    ctx->pc = 0x22633Cu;
    // 0x22633c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22633cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x226340: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x226340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226344: 0x0  nop
    ctx->pc = 0x226344u;
    // NOP
    // 0x226348: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x226348u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x22634c: 0x46010582  mul.s       $f22, $f0, $f1
    ctx->pc = 0x22634cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_226350:
    // 0x226350: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x226350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x226354: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x226354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226358: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x226358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22635c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22635cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x226360: 0x0  nop
    ctx->pc = 0x226360u;
    // NOP
    // 0x226364: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x226364u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x226368: 0x0  nop
    ctx->pc = 0x226368u;
    // NOP
    // 0x22636c: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x22636cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x226370: 0xc047964  jal         func_11E590
    ctx->pc = 0x226370u;
    SET_GPR_U32(ctx, 31, 0x226378u);
    ctx->pc = 0x226374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226370u;
            // 0x226374: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226378u; }
        if (ctx->pc != 0x226378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226378u; }
        if (ctx->pc != 0x226378u) { return; }
    }
    ctx->pc = 0x226378u;
label_226378:
    // 0x226378: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x226378u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x22637c: 0xc047a42  jal         func_11E908
    ctx->pc = 0x22637Cu;
    SET_GPR_U32(ctx, 31, 0x226384u);
    ctx->pc = 0x226380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22637Cu;
            // 0x226380: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226384u; }
        if (ctx->pc != 0x226384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226384u; }
        if (ctx->pc != 0x226384u) { return; }
    }
    ctx->pc = 0x226384u;
label_226384:
    // 0x226384: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x226384u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x226388: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x226388u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22638c: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x22638cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x226390: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x226390u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226394: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x226394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x226398: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x226398u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22639c: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x22639cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2263a0: 0xe7b600dc  swc1        $f22, 0xDC($sp)
    ctx->pc = 0x2263a0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2263a4: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x2263a4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2263a8: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2263a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2263ac: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x2263acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2263b0: 0xe7b600ec  swc1        $f22, 0xEC($sp)
    ctx->pc = 0x2263b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x2263b4: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x2263b4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2263b8: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x2263b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2263bc: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x2263bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x2263c0: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x2263c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2263c4: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x2263c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2263c8: 0xe7b600fc  swc1        $f22, 0xFC($sp)
    ctx->pc = 0x2263c8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x2263cc: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x2263ccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2263d0: 0xe7b6010c  swc1        $f22, 0x10C($sp)
    ctx->pc = 0x2263d0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_2263d4:
    // 0x2263d4: 0x0  nop
    ctx->pc = 0x2263d4u;
    // NOP
    // 0x2263d8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2263d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2263dc: 0x2a29821  addu        $s3, $s5, $v0
    ctx->pc = 0x2263dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2263e0: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2263e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2263e4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2263E4u;
    SET_GPR_U32(ctx, 31, 0x2263ECu);
    ctx->pc = 0x2263E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2263E4u;
            // 0x2263e8: 0x46140301  sub.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2263ECu; }
        if (ctx->pc != 0x2263ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2263ECu; }
        if (ctx->pc != 0x2263ECu) { return; }
    }
    ctx->pc = 0x2263ECu;
label_2263ec:
    // 0x2263ec: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x2263ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2263f0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2263f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2263f4: 0x26770004  addiu       $s7, $s3, 0x4
    ctx->pc = 0x2263f4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2263f8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2263F8u;
    SET_GPR_U32(ctx, 31, 0x226400u);
    ctx->pc = 0x2263FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2263F8u;
            // 0x2263fc: 0x46150301  sub.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226400u; }
        if (ctx->pc != 0x226400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226400u; }
        if (ctx->pc != 0x226400u) { return; }
    }
    ctx->pc = 0x226400u;
label_226400:
    // 0x226400: 0x25d1821  addu        $v1, $s2, $sp
    ctx->pc = 0x226400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x226404: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x226404u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x226408: 0x246600d0  addiu       $a2, $v1, 0xD0
    ctx->pc = 0x226408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x22640c: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x22640cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x226410: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x226410u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226414: 0x2a830004  slti        $v1, $s4, 0x4
    ctx->pc = 0x226414u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x226418: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x226418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22641c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x22641cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x226420: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x226420u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x226424: 0x4601181a  mula.s      $f3, $f1
    ctx->pc = 0x226424u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x226428: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x226428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22642c: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x22642cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226430: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x226430u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x226434: 0x4600101c  madd.s      $f0, $f2, $f0
    ctx->pc = 0x226434u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x226438: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x226438u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x22643c: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x22643cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x226440: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x226440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226444: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x226444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226448: 0x4601181a  mula.s      $f3, $f1
    ctx->pc = 0x226448u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x22644c: 0x4600101c  madd.s      $f0, $f2, $f0
    ctx->pc = 0x22644cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x226450: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x226450u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x226454: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x226454u;
    {
        const bool branch_taken_0x226454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x226458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226454u;
            // 0x226458: 0xe6e00000  swc1        $f0, 0x0($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x226454) {
            ctx->pc = 0x2263D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2263d4;
        }
    }
    ctx->pc = 0x22645Cu;
    // 0x22645c: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x22645Cu;
    {
        const bool branch_taken_0x22645c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22645c) {
            ctx->pc = 0x226700u;
            goto label_226700;
        }
    }
    ctx->pc = 0x226464u;
label_226464:
    // 0x226464: 0x0  nop
    ctx->pc = 0x226464u;
    // NOP
    // 0x226468: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x226468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x22646c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22646Cu;
    {
        const bool branch_taken_0x22646c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x226470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22646Cu;
            // 0x226470: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22646c) {
            ctx->pc = 0x22647Cu;
            goto label_22647c;
        }
    }
    ctx->pc = 0x226474u;
    // 0x226474: 0x14620053  bne         $v1, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x226474u;
    {
        const bool branch_taken_0x226474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x226474) {
            ctx->pc = 0x2265C4u;
            goto label_2265c4;
        }
    }
    ctx->pc = 0x22647Cu;
label_22647c:
    // 0x22647c: 0x0  nop
    ctx->pc = 0x22647cu;
    // NOP
    // 0x226480: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x226480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x226484: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x226484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226488: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x226488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22648c: 0xc6040014  lwc1        $f4, 0x14($s0)
    ctx->pc = 0x22648cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x226490: 0xc6050018  lwc1        $f5, 0x18($s0)
    ctx->pc = 0x226490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x226494: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x226494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x226498: 0x46010183  div.s       $f6, $f0, $f1
    ctx->pc = 0x226498u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x22649c: 0x0  nop
    ctx->pc = 0x22649cu;
    // NOP
    // 0x2264a0: 0x46062000  add.s       $f0, $f4, $f6
    ctx->pc = 0x2264a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x2264a4: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2264A4u;
    {
        const bool branch_taken_0x2264a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2264A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2264A4u;
            // 0x2264a8: 0x46062840  add.s       $f1, $f5, $f6 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2264a4) {
            ctx->pc = 0x2264F8u;
            goto label_2264f8;
        }
    }
    ctx->pc = 0x2264ACu;
    // 0x2264ac: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x2264acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2264b0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2264b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2264b4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2264b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2264b8: 0x0  nop
    ctx->pc = 0x2264b8u;
    // NOP
    // 0x2264bc: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x2264bcu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x2264c0: 0x0  nop
    ctx->pc = 0x2264c0u;
    // NOP
    // 0x2264c4: 0x0  nop
    ctx->pc = 0x2264c4u;
    // NOP
    // 0x2264c8: 0x46023036  c.le.s      $f6, $f2
    ctx->pc = 0x2264c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2264cc: 0x0  nop
    ctx->pc = 0x2264ccu;
    // NOP
    // 0x2264d0: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x2264D0u;
    {
        const bool branch_taken_0x2264d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2264d0) {
            ctx->pc = 0x2264F8u;
            goto label_2264f8;
        }
    }
    ctx->pc = 0x2264D8u;
    // 0x2264d8: 0x46061841  sub.s       $f1, $f3, $f6
    ctx->pc = 0x2264d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x2264dc: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2264dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2264e0: 0x46012001  sub.s       $f0, $f4, $f1
    ctx->pc = 0x2264e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2264e4: 0x46012841  sub.s       $f1, $f5, $f1
    ctx->pc = 0x2264e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x2264e8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2264e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2264ec: 0x0  nop
    ctx->pc = 0x2264ecu;
    // NOP
    // 0x2264f0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2264f0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x2264f4: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2264f4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
label_2264f8:
    // 0x2264f8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2264f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2264fc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2264fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x226500: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x226500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x226504: 0xc4430024  lwc1        $f3, 0x24($v0)
    ctx->pc = 0x226504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x226508: 0x460218c3  div.s       $f3, $f3, $f2
    ctx->pc = 0x226508u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x22650c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x22650cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x226510: 0x4603a0c0  add.s       $f3, $f20, $f3
    ctx->pc = 0x226510u;
    ctx->f[3] = FPU_ADD_S(ctx->f[20], ctx->f[3]);
    // 0x226514: 0xe6a30000  swc1        $f3, 0x0($s5)
    ctx->pc = 0x226514u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x226518: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x226518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x22651c: 0xc4430028  lwc1        $f3, 0x28($v0)
    ctx->pc = 0x22651cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x226520: 0x460218c3  div.s       $f3, $f3, $f2
    ctx->pc = 0x226520u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x226524: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x226524u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x226528: 0x4603a8c0  add.s       $f3, $f21, $f3
    ctx->pc = 0x226528u;
    ctx->f[3] = FPU_ADD_S(ctx->f[21], ctx->f[3]);
    // 0x22652c: 0xe6a30004  swc1        $f3, 0x4($s5)
    ctx->pc = 0x22652cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x226530: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x226530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x226534: 0xc4430024  lwc1        $f3, 0x24($v0)
    ctx->pc = 0x226534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x226538: 0x460218c3  div.s       $f3, $f3, $f2
    ctx->pc = 0x226538u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x22653c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x22653cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x226540: 0x4603a0c0  add.s       $f3, $f20, $f3
    ctx->pc = 0x226540u;
    ctx->f[3] = FPU_ADD_S(ctx->f[20], ctx->f[3]);
    // 0x226544: 0xe6a30008  swc1        $f3, 0x8($s5)
    ctx->pc = 0x226544u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x226548: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x226548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x22654c: 0xc4430028  lwc1        $f3, 0x28($v0)
    ctx->pc = 0x22654cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x226550: 0x460218c3  div.s       $f3, $f3, $f2
    ctx->pc = 0x226550u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x226554: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x226554u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x226558: 0x4603a8c0  add.s       $f3, $f21, $f3
    ctx->pc = 0x226558u;
    ctx->f[3] = FPU_ADD_S(ctx->f[21], ctx->f[3]);
    // 0x22655c: 0xe6a3000c  swc1        $f3, 0xC($s5)
    ctx->pc = 0x22655cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x226560: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x226560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x226564: 0xc4430024  lwc1        $f3, 0x24($v0)
    ctx->pc = 0x226564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x226568: 0x460218c3  div.s       $f3, $f3, $f2
    ctx->pc = 0x226568u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x22656c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x22656cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x226570: 0x4603a0c0  add.s       $f3, $f20, $f3
    ctx->pc = 0x226570u;
    ctx->f[3] = FPU_ADD_S(ctx->f[20], ctx->f[3]);
    // 0x226574: 0xe6a30010  swc1        $f3, 0x10($s5)
    ctx->pc = 0x226574u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
    // 0x226578: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x226578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x22657c: 0xc4430028  lwc1        $f3, 0x28($v0)
    ctx->pc = 0x22657cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x226580: 0x460218c3  div.s       $f3, $f3, $f2
    ctx->pc = 0x226580u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x226584: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x226584u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x226588: 0x4603a8c0  add.s       $f3, $f21, $f3
    ctx->pc = 0x226588u;
    ctx->f[3] = FPU_ADD_S(ctx->f[21], ctx->f[3]);
    // 0x22658c: 0xe6a30014  swc1        $f3, 0x14($s5)
    ctx->pc = 0x22658cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 20), bits); }
    // 0x226590: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x226590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x226594: 0xc4430024  lwc1        $f3, 0x24($v0)
    ctx->pc = 0x226594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x226598: 0x460218c3  div.s       $f3, $f3, $f2
    ctx->pc = 0x226598u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x22659c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x22659cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2265a0: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2265a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2265a4: 0xe6a00018  swc1        $f0, 0x18($s5)
    ctx->pc = 0x2265a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 24), bits); }
    // 0x2265a8: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x2265a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2265ac: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x2265acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2265b0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2265b0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x2265b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2265b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2265b8: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x2265b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x2265bc: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x2265BCu;
    {
        const bool branch_taken_0x2265bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2265C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2265BCu;
            // 0x2265c0: 0xe6a0001c  swc1        $f0, 0x1C($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2265bc) {
            ctx->pc = 0x226700u;
            goto label_226700;
        }
    }
    ctx->pc = 0x2265C4u;
label_2265c4:
    // 0x2265c4: 0x0  nop
    ctx->pc = 0x2265c4u;
    // NOP
    // 0x2265c8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2265c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2265cc: 0x1462004c  bne         $v1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x2265CCu;
    {
        const bool branch_taken_0x2265cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2265cc) {
            ctx->pc = 0x226700u;
            goto label_226700;
        }
    }
    ctx->pc = 0x2265D4u;
    // 0x2265d4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2265d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2265d8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x2265d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x2265dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2265dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2265e0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2265e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2265e4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2265e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2265e8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2265e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2265ec: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x2265ecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2265f0: 0x0  nop
    ctx->pc = 0x2265f0u;
    // NOP
    // 0x2265f4: 0x0  nop
    ctx->pc = 0x2265f4u;
    // NOP
    // 0x2265f8: 0xc047a42  jal         func_11E908
    ctx->pc = 0x2265F8u;
    SET_GPR_U32(ctx, 31, 0x226600u);
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226600u; }
        if (ctx->pc != 0x226600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226600u; }
        if (ctx->pc != 0x226600u) { return; }
    }
    ctx->pc = 0x226600u;
label_226600:
    // 0x226600: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x226600u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x226604: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x226604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x226608: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x226608u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x22660c: 0x27a30118  addiu       $v1, $sp, 0x118
    ctx->pc = 0x22660cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x226610: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x226610u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x226614: 0x27a6011c  addiu       $a2, $sp, 0x11C
    ctx->pc = 0x226614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x226618: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x226618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x22661c: 0x27a70120  addiu       $a3, $sp, 0x120
    ctx->pc = 0x22661cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x226620: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x226620u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x226624: 0x27a80124  addiu       $t0, $sp, 0x124
    ctx->pc = 0x226624u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x226628: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x226628u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x22662c: 0x27a90128  addiu       $t1, $sp, 0x128
    ctx->pc = 0x22662cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x226630: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x226630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x226634: 0x27aa012c  addiu       $t2, $sp, 0x12C
    ctx->pc = 0x226634u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x226638: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x226638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x22663c: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x22663cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x226640: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x226640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x226644: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x226644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226648: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x226648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22664c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x22664cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x226650: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x226650u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x226654: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x226654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x226658: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x226658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22665c: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x22665cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x226660: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x226660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226664: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x226664u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x226668: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x226668u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22666c: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x22666cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x226670: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x226670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226674: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x226674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x226678: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x226678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22667c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x22667cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x226680: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x226680u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x226684: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x226684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x226688: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x226688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22668c: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x22668cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x226690: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x226690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226694: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x226694u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x226698: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x226698u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22669c: 0xe6a0000c  swc1        $f0, 0xC($s5)
    ctx->pc = 0x22669cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x2266a0: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x2266a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2266a4: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x2266a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2266a8: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x2266a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2266ac: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2266acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2266b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2266b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2266b4: 0xe6a00010  swc1        $f0, 0x10($s5)
    ctx->pc = 0x2266b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
    // 0x2266b8: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x2266b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2266bc: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x2266bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2266c0: 0xc6a00014  lwc1        $f0, 0x14($s5)
    ctx->pc = 0x2266c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2266c4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2266c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2266c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2266c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2266cc: 0xe6a00014  swc1        $f0, 0x14($s5)
    ctx->pc = 0x2266ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 20), bits); }
    // 0x2266d0: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x2266d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2266d4: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x2266d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2266d8: 0xc6a00018  lwc1        $f0, 0x18($s5)
    ctx->pc = 0x2266d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2266dc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2266dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2266e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2266e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2266e4: 0xe6a00018  swc1        $f0, 0x18($s5)
    ctx->pc = 0x2266e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 24), bits); }
    // 0x2266e8: 0xc5410000  lwc1        $f1, 0x0($t2)
    ctx->pc = 0x2266e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2266ec: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x2266ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2266f0: 0xc6a0001c  lwc1        $f0, 0x1C($s5)
    ctx->pc = 0x2266f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2266f4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2266f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2266f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2266f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2266fc: 0xe6a0001c  swc1        $f0, 0x1C($s5)
    ctx->pc = 0x2266fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 28), bits); }
label_226700:
    // 0x226700: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x226700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x226704: 0x26100024  addiu       $s0, $s0, 0x24
    ctx->pc = 0x226704u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x226708: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x226708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22670c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x22670cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_226710:
    // 0x226710: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x226710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x226714: 0x90430044  lbu         $v1, 0x44($v0)
    ctx->pc = 0x226714u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x226718: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x226718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22671c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x22671cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x226720: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x226720u;
    {
        const bool branch_taken_0x226720 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x226720) {
            ctx->pc = 0x226730u;
            goto label_226730;
        }
    }
    ctx->pc = 0x226728u;
    // 0x226728: 0x1600fea1  bnez        $s0, . + 4 + (-0x15F << 2)
    ctx->pc = 0x226728u;
    {
        const bool branch_taken_0x226728 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x226728) {
            ctx->pc = 0x2261B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2261b0;
        }
    }
    ctx->pc = 0x226730u;
label_226730:
    // 0x226730: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x226730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_226734:
    // 0x226734: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x226734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x226738: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x226738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x22673c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x22673cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x226740: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x226740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x226744: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x226744u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x226748: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x226748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22674c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x22674cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x226750: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x226750u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x226754: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x226754u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x226758: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x226758u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22675c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x22675cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x226760: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x226760u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226764: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x226764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226768: 0x3e00008  jr          $ra
    ctx->pc = 0x226768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22676Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226768u;
            // 0x22676c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x226770u;
}
