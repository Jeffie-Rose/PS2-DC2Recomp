#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuMainFrameStep__Fv
// Address: 0x2240f0 - 0x2248b8
void MenuMainFrameStep__Fv_0x2240f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuMainFrameStep__Fv_0x2240f0");
#endif

    switch (ctx->pc) {
        case 0x224124u: goto label_224124;
        case 0x22413cu: goto label_22413c;
        case 0x2241d4u: goto label_2241d4;
        case 0x224218u: goto label_224218;
        case 0x22423cu: goto label_22423c;
        case 0x2242fcu: goto label_2242fc;
        case 0x224320u: goto label_224320;
        case 0x224338u: goto label_224338;
        case 0x224350u: goto label_224350;
        case 0x224368u: goto label_224368;
        case 0x224394u: goto label_224394;
        case 0x2243b4u: goto label_2243b4;
        case 0x2243d4u: goto label_2243d4;
        case 0x224408u: goto label_224408;
        case 0x224444u: goto label_224444;
        case 0x224470u: goto label_224470;
        case 0x224588u: goto label_224588;
        case 0x22466cu: goto label_22466c;
        case 0x22475cu: goto label_22475c;
        case 0x224850u: goto label_224850;
        case 0x224874u: goto label_224874;
        default: break;
    }

    ctx->pc = 0x2240f0u;

    // 0x2240f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2240f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2240f4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2240f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x2240f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2240f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2240fc: 0x2484ce60  addiu       $a0, $a0, -0x31A0
    ctx->pc = 0x2240fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954592));
    // 0x224100: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x224100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x224104: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224108: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x224108u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x22410c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22410cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224110: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x224110u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x224114: 0x240702c0  addiu       $a3, $zero, 0x2C0
    ctx->pc = 0x224114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
    // 0x224118: 0x240801a0  addiu       $t0, $zero, 0x1A0
    ctx->pc = 0x224118u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    // 0x22411c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x22411Cu;
    SET_GPR_U32(ctx, 31, 0x224124u);
    ctx->pc = 0x224120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22411Cu;
            // 0x224120: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224124u; }
        if (ctx->pc != 0x224124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224124u; }
        if (ctx->pc != 0x224124u) { return; }
    }
    ctx->pc = 0x224124u;
label_224124:
    // 0x224124: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x224124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x224128: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x224128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22412c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22412cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224130: 0x240702c0  addiu       $a3, $zero, 0x2C0
    ctx->pc = 0x224130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
    // 0x224134: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x224134u;
    SET_GPR_U32(ctx, 31, 0x22413Cu);
    ctx->pc = 0x224138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224134u;
            // 0x224138: 0x240801a0  addiu       $t0, $zero, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22413Cu; }
        if (ctx->pc != 0x22413Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22413Cu; }
        if (ctx->pc != 0x22413Cu) { return; }
    }
    ctx->pc = 0x22413Cu;
label_22413c:
    // 0x22413c: 0xc78293b8  lwc1        $f2, -0x6C48($gp)
    ctx->pc = 0x22413cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x224140: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x224140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x224144: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x224144u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x224148: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x224148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x22414c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x22414cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x224150: 0x0  nop
    ctx->pc = 0x224150u;
    // NOP
    // 0x224154: 0x46011503  div.s       $f20, $f2, $f1
    ctx->pc = 0x224154u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x224158: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x224158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x22415c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22415cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224160: 0x838393e4  lb          $v1, -0x6C1C($gp)
    ctx->pc = 0x224160u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939620)));
    // 0x224164: 0x0  nop
    ctx->pc = 0x224164u;
    // NOP
    // 0x224168: 0x46141842  mul.s       $f1, $f3, $f20
    ctx->pc = 0x224168u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x22416c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22416Cu;
    {
        const bool branch_taken_0x22416c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x224170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22416Cu;
            // 0x224170: 0x46010541  sub.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22416c) {
            ctx->pc = 0x224180u;
            goto label_224180;
        }
    }
    ctx->pc = 0x224174u;
    // 0x224174: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x224174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224178: 0xa38093e0  sb          $zero, -0x6C20($gp)
    ctx->pc = 0x224178u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939616), (uint8_t)GPR_U32(ctx, 0));
    // 0x22417c: 0xa38393e4  sb          $v1, -0x6C1C($gp)
    ctx->pc = 0x22417cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939620), (uint8_t)GPR_U32(ctx, 3));
label_224180:
    // 0x224180: 0x878793b4  lh          $a3, -0x6C4C($gp)
    ctx->pc = 0x224180u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939572)));
    // 0x224184: 0x2ce1000a  sltiu       $at, $a3, 0xA
    ctx->pc = 0x224184u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x224188: 0x102001a7  beqz        $at, . + 4 + (0x1A7 << 2)
    ctx->pc = 0x224188u;
    {
        const bool branch_taken_0x224188 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22418Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224188u;
            // 0x22418c: 0x3c060037  lui         $a2, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224188) {
            ctx->pc = 0x224828u;
            goto label_224828;
        }
    }
    ctx->pc = 0x224190u;
    // 0x224190: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x224190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x224194: 0x24c6a640  addiu       $a2, $a2, -0x59C0
    ctx->pc = 0x224194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944320));
    // 0x224198: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x224198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x22419c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22419cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2241a0: 0x600008  jr          $v1
    ctx->pc = 0x2241A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2241A8u: goto label_2241a8;
            case 0x2244F0u: goto label_2244f0;
            case 0x22452Cu: goto label_22452c;
            case 0x224568u: goto label_224568;
            case 0x22464Cu: goto label_22464c;
            case 0x22473Cu: goto label_22473c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2241A8u;
label_2241a8:
    // 0x2241a8: 0x14e0002a  bnez        $a3, . + 4 + (0x2A << 2)
    ctx->pc = 0x2241A8u;
    {
        const bool branch_taken_0x2241a8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2241ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2241A8u;
            // 0x2241ac: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2241a8) {
            ctx->pc = 0x224254u;
            goto label_224254;
        }
    }
    ctx->pc = 0x2241B0u;
    // 0x2241b0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2241b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2241b4: 0x0  nop
    ctx->pc = 0x2241b4u;
    // NOP
    // 0x2241b8: 0x460d1034  c.lt.s      $f2, $f13
    ctx->pc = 0x2241b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2241bc: 0x0  nop
    ctx->pc = 0x2241bcu;
    // NOP
    // 0x2241c0: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x2241C0u;
    {
        const bool branch_taken_0x2241c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2241C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2241C0u;
            // 0x2241c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2241c0) {
            ctx->pc = 0x224248u;
            goto label_224248;
        }
    }
    ctx->pc = 0x2241C8u;
    // 0x2241c8: 0xc78c93bc  lwc1        $f12, -0x6C44($gp)
    ctx->pc = 0x2241c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2241cc: 0xc094570  jal         func_2515C0
    ctx->pc = 0x2241CCu;
    SET_GPR_U32(ctx, 31, 0x2241D4u);
    ctx->pc = 0x2241D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2241CCu;
            // 0x2241d0: 0x278493b8  addiu       $a0, $gp, -0x6C48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2515C0u;
    if (runtime->hasFunction(0x2515C0u)) {
        auto targetFn = runtime->lookupFunction(0x2515C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2241D4u; }
        if (ctx->pc != 0x2241D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPfff_0x2515c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2241D4u; }
        if (ctx->pc != 0x2241D4u) { return; }
    }
    ctx->pc = 0x2241D4u;
label_2241d4:
    // 0x2241d4: 0xc78193b8  lwc1        $f1, -0x6C48($gp)
    ctx->pc = 0x2241d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2241d8: 0x3c0240e4  lui         $v0, 0x40E4
    ctx->pc = 0x2241d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16612 << 16));
    // 0x2241dc: 0x34429249  ori         $v0, $v0, 0x9249
    ctx->pc = 0x2241dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37449);
    // 0x2241e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2241e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2241e4: 0x0  nop
    ctx->pc = 0x2241e4u;
    // NOP
    // 0x2241e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2241e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2241ec: 0x0  nop
    ctx->pc = 0x2241ecu;
    // NOP
    // 0x2241f0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2241F0u;
    {
        const bool branch_taken_0x2241f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2241F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2241F0u;
            // 0x2241f4: 0x3c03be99  lui         $v1, 0xBE99 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48793 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2241f0) {
            ctx->pc = 0x224220u;
            goto label_224220;
        }
    }
    ctx->pc = 0x2241F8u;
    // 0x2241f8: 0x3c033fb3  lui         $v1, 0x3FB3
    ctx->pc = 0x2241f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16307 << 16));
    // 0x2241fc: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x2241fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x224200: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x224200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x224204: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x224204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x224208: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x224208u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x22420c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22420cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x224210: 0xc094570  jal         func_2515C0
    ctx->pc = 0x224210u;
    SET_GPR_U32(ctx, 31, 0x224218u);
    ctx->pc = 0x224214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224210u;
            // 0x224214: 0x278493bc  addiu       $a0, $gp, -0x6C44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939580));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2515C0u;
    if (runtime->hasFunction(0x2515C0u)) {
        auto targetFn = runtime->lookupFunction(0x2515C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224218u; }
        if (ctx->pc != 0x224218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPfff_0x2515c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224218u; }
        if (ctx->pc != 0x224218u) { return; }
    }
    ctx->pc = 0x224218u;
label_224218:
    // 0x224218: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x224218u;
    {
        const bool branch_taken_0x224218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22421Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224218u;
            // 0x22421c: 0xa38093e0  sb          $zero, -0x6C20($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939616), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224218) {
            ctx->pc = 0x224240u;
            goto label_224240;
        }
    }
    ctx->pc = 0x224220u;
label_224220:
    // 0x224220: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x224220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x224224: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x224224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x224228: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x224228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x22422c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x22422cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x224230: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x224230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x224234: 0xc094570  jal         func_2515C0
    ctx->pc = 0x224234u;
    SET_GPR_U32(ctx, 31, 0x22423Cu);
    ctx->pc = 0x224238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224234u;
            // 0x224238: 0x278493bc  addiu       $a0, $gp, -0x6C44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939580));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2515C0u;
    if (runtime->hasFunction(0x2515C0u)) {
        auto targetFn = runtime->lookupFunction(0x2515C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22423Cu; }
        if (ctx->pc != 0x22423Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPfff_0x2515c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22423Cu; }
        if (ctx->pc != 0x22423Cu) { return; }
    }
    ctx->pc = 0x22423Cu;
label_22423c:
    // 0x22423c: 0xa38093e0  sb          $zero, -0x6C20($gp)
    ctx->pc = 0x22423cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939616), (uint8_t)GPR_U32(ctx, 0));
label_224240:
    // 0x224240: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x224240u;
    {
        const bool branch_taken_0x224240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224240u;
            // 0x224244: 0x879093b4  lh          $s0, -0x6C4C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939572)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224240) {
            ctx->pc = 0x224258u;
            goto label_224258;
        }
    }
    ctx->pc = 0x224248u;
label_224248:
    // 0x224248: 0xa38093e0  sb          $zero, -0x6C20($gp)
    ctx->pc = 0x224248u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939616), (uint8_t)GPR_U32(ctx, 0));
    // 0x22424c: 0xe78d93b8  swc1        $f13, -0x6C48($gp)
    ctx->pc = 0x22424cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939576), bits); }
    // 0x224250: 0xa38293b0  sb          $v0, -0x6C50($gp)
    ctx->pc = 0x224250u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939568), (uint8_t)GPR_U32(ctx, 2));
label_224254:
    // 0x224254: 0x879093b4  lh          $s0, -0x6C4C($gp)
    ctx->pc = 0x224254u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939572)));
label_224258:
    // 0x224258: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22425c: 0x16020019  bne         $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x22425Cu;
    {
        const bool branch_taken_0x22425c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x224260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22425Cu;
            // 0x224260: 0x3c0242bc  lui         $v0, 0x42BC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17084 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22425c) {
            ctx->pc = 0x2242C4u;
            goto label_2242c4;
        }
    }
    ctx->pc = 0x224264u;
    // 0x224264: 0xc78193b8  lwc1        $f1, -0x6C48($gp)
    ctx->pc = 0x224264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224268: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x224268u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22426c: 0x0  nop
    ctx->pc = 0x22426cu;
    // NOP
    // 0x224270: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x224270u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224274: 0x0  nop
    ctx->pc = 0x224274u;
    // NOP
    // 0x224278: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x224278u;
    {
        const bool branch_taken_0x224278 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22427Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224278u;
            // 0x22427c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224278) {
            ctx->pc = 0x224290u;
            goto label_224290;
        }
    }
    ctx->pc = 0x224280u;
    // 0x224280: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224284: 0x0  nop
    ctx->pc = 0x224284u;
    // NOP
    // 0x224288: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x224288u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22428c: 0xe78093b8  swc1        $f0, -0x6C48($gp)
    ctx->pc = 0x22428cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939576), bits); }
label_224290:
    // 0x224290: 0x838293e0  lb          $v0, -0x6C20($gp)
    ctx->pc = 0x224290u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939616)));
    // 0x224294: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x224294u;
    {
        const bool branch_taken_0x224294 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x224298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224294u;
            // 0x224298: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224294) {
            ctx->pc = 0x2242A0u;
            goto label_2242a0;
        }
    }
    ctx->pc = 0x22429Cu;
    // 0x22429c: 0xa38293b0  sb          $v0, -0x6C50($gp)
    ctx->pc = 0x22429cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939568), (uint8_t)GPR_U32(ctx, 2));
label_2242a0:
    // 0x2242a0: 0xc78193b8  lwc1        $f1, -0x6C48($gp)
    ctx->pc = 0x2242a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2242a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2242a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2242a8: 0x0  nop
    ctx->pc = 0x2242a8u;
    // NOP
    // 0x2242ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2242acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2242b0: 0x0  nop
    ctx->pc = 0x2242b0u;
    // NOP
    // 0x2242b4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2242B4u;
    {
        const bool branch_taken_0x2242b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2242b4) {
            ctx->pc = 0x2242C0u;
            goto label_2242c0;
        }
    }
    ctx->pc = 0x2242BCu;
    // 0x2242bc: 0xe78093b8  swc1        $f0, -0x6C48($gp)
    ctx->pc = 0x2242bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939576), bits); }
label_2242c0:
    // 0x2242c0: 0x3c0242bc  lui         $v0, 0x42BC
    ctx->pc = 0x2242c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17084 << 16));
label_2242c4:
    // 0x2242c4: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x2242c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x2242c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2242c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2242cc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2242ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2242d0: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2242d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2242d4: 0x3c0243af  lui         $v0, 0x43AF
    ctx->pc = 0x2242d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17327 << 16));
    // 0x2242d8: 0x3c034350  lui         $v1, 0x4350
    ctx->pc = 0x2242d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17232 << 16));
    // 0x2242dc: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x2242dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2242e0: 0xe78193c0  swc1        $f1, -0x6C40($gp)
    ctx->pc = 0x2242e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939584), bits); }
    // 0x2242e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2242e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2242e8: 0xaf8393c4  sw          $v1, -0x6C3C($gp)
    ctx->pc = 0x2242e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939588), GPR_U32(ctx, 3));
    // 0x2242ec: 0xc79493c0  lwc1        $f20, -0x6C40($gp)
    ctx->pc = 0x2242ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2242f0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2242f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2242f4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2242F4u;
    SET_GPR_U32(ctx, 31, 0x2242FCu);
    ctx->pc = 0x2242F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2242F4u;
            // 0x2242f8: 0x4600a301  sub.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2242FCu; }
        if (ctx->pc != 0x2242FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2242FCu; }
        if (ctx->pc != 0x2242FCu) { return; }
    }
    ctx->pc = 0x2242FCu;
label_2242fc:
    // 0x2242fc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2242fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x224300: 0xac22ce60  sw          $v0, -0x31A0($at)
    ctx->pc = 0x224300u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954592), GPR_U32(ctx, 2));
    // 0x224304: 0xc79693c4  lwc1        $f22, -0x6C3C($gp)
    ctx->pc = 0x224304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x224308: 0x3c024350  lui         $v0, 0x4350
    ctx->pc = 0x224308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17232 << 16));
    // 0x22430c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22430cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224310: 0x0  nop
    ctx->pc = 0x224310u;
    // NOP
    // 0x224314: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x224314u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x224318: 0xc0a248c  jal         func_289230
    ctx->pc = 0x224318u;
    SET_GPR_U32(ctx, 31, 0x224320u);
    ctx->pc = 0x22431Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224318u;
            // 0x22431c: 0x4600b301  sub.s       $f12, $f22, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224320u; }
        if (ctx->pc != 0x224320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224320u; }
        if (ctx->pc != 0x224320u) { return; }
    }
    ctx->pc = 0x224320u;
label_224320:
    // 0x224320: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x224320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224324: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x224324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x224328: 0xac22ce64  sw          $v0, -0x319C($at)
    ctx->pc = 0x224328u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954596), GPR_U32(ctx, 2));
    // 0x22432c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22432cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x224330: 0xc0a248c  jal         func_289230
    ctx->pc = 0x224330u;
    SET_GPR_U32(ctx, 31, 0x224338u);
    ctx->pc = 0x224334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224330u;
            // 0x224334: 0x46150302  mul.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224338u; }
        if (ctx->pc != 0x224338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224338u; }
        if (ctx->pc != 0x224338u) { return; }
    }
    ctx->pc = 0x224338u;
label_224338:
    // 0x224338: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x224338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22433c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x22433cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x224340: 0xac22ce68  sw          $v0, -0x3198($at)
    ctx->pc = 0x224340u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954600), GPR_U32(ctx, 2));
    // 0x224344: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x224344u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x224348: 0xc0a248c  jal         func_289230
    ctx->pc = 0x224348u;
    SET_GPR_U32(ctx, 31, 0x224350u);
    ctx->pc = 0x22434Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224348u;
            // 0x22434c: 0x46150302  mul.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224350u; }
        if (ctx->pc != 0x224350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224350u; }
        if (ctx->pc != 0x224350u) { return; }
    }
    ctx->pc = 0x224350u;
label_224350:
    // 0x224350: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x224350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x224354: 0xac22ce6c  sw          $v0, -0x3194($at)
    ctx->pc = 0x224354u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954604), GPR_U32(ctx, 2));
    // 0x224358: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x224358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
    // 0x22435c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22435cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224360: 0xc0a248c  jal         func_289230
    ctx->pc = 0x224360u;
    SET_GPR_U32(ctx, 31, 0x224368u);
    ctx->pc = 0x224364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224360u;
            // 0x224364: 0x46150302  mul.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224368u; }
        if (ctx->pc != 0x224368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224368u; }
        if (ctx->pc != 0x224368u) { return; }
    }
    ctx->pc = 0x224368u;
label_224368:
    // 0x224368: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x224368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x22436c: 0xac22ce7c  sw          $v0, -0x3184($at)
    ctx->pc = 0x22436cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954620), GPR_U32(ctx, 2));
    // 0x224370: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x224370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x224374: 0x3c023f9d  lui         $v0, 0x3F9D
    ctx->pc = 0x224374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16285 << 16));
    // 0x224378: 0xc420ce7c  lwc1        $f0, -0x3184($at)
    ctx->pc = 0x224378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22437c: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x22437cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x224380: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x224380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x224384: 0x0  nop
    ctx->pc = 0x224384u;
    // NOP
    // 0x224388: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x224388u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22438c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x22438Cu;
    SET_GPR_U32(ctx, 31, 0x224394u);
    ctx->pc = 0x224390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22438Cu;
            // 0x224390: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224394u; }
        if (ctx->pc != 0x224394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224394u; }
        if (ctx->pc != 0x224394u) { return; }
    }
    ctx->pc = 0x224394u;
label_224394:
    // 0x224394: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x224394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x224398: 0xac22ce78  sw          $v0, -0x3188($at)
    ctx->pc = 0x224398u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954616), GPR_U32(ctx, 2));
    // 0x22439c: 0x3c024346  lui         $v0, 0x4346
    ctx->pc = 0x22439cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17222 << 16));
    // 0x2243a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2243a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2243a4: 0x0  nop
    ctx->pc = 0x2243a4u;
    // NOP
    // 0x2243a8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2243a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2243ac: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2243ACu;
    SET_GPR_U32(ctx, 31, 0x2243B4u);
    ctx->pc = 0x2243B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2243ACu;
            // 0x2243b0: 0x4600a301  sub.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2243B4u; }
        if (ctx->pc != 0x2243B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2243B4u; }
        if (ctx->pc != 0x2243B4u) { return; }
    }
    ctx->pc = 0x2243B4u;
label_2243b4:
    // 0x2243b4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2243b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2243b8: 0xac22ce70  sw          $v0, -0x3190($at)
    ctx->pc = 0x2243b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954608), GPR_U32(ctx, 2));
    // 0x2243bc: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x2243bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x2243c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2243c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2243c4: 0x0  nop
    ctx->pc = 0x2243c4u;
    // NOP
    // 0x2243c8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2243c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2243cc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2243CCu;
    SET_GPR_U32(ctx, 31, 0x2243D4u);
    ctx->pc = 0x2243D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2243CCu;
            // 0x2243d0: 0x4600b301  sub.s       $f12, $f22, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2243D4u; }
        if (ctx->pc != 0x2243D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2243D4u; }
        if (ctx->pc != 0x2243D4u) { return; }
    }
    ctx->pc = 0x2243D4u;
label_2243d4:
    // 0x2243d4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2243d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2243d8: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2243D8u;
    {
        const bool branch_taken_0x2243d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2243DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2243D8u;
            // 0x2243dc: 0xac22ce74  sw          $v0, -0x318C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2243d8) {
            ctx->pc = 0x224410u;
            goto label_224410;
        }
    }
    ctx->pc = 0x2243E0u;
    // 0x2243e0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2243e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2243e4: 0x3c023efa  lui         $v0, 0x3EFA
    ctx->pc = 0x2243e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16122 << 16));
    // 0x2243e8: 0xc420ce78  lwc1        $f0, -0x3188($at)
    ctx->pc = 0x2243e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2243ec: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2243ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2243f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2243f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2243f4: 0x0  nop
    ctx->pc = 0x2243f4u;
    // NOP
    // 0x2243f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2243f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2243fc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2243fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x224400: 0xc0a248c  jal         func_289230
    ctx->pc = 0x224400u;
    SET_GPR_U32(ctx, 31, 0x224408u);
    ctx->pc = 0x224404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224400u;
            // 0x224404: 0x4600a301  sub.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224408u; }
        if (ctx->pc != 0x224408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224408u; }
        if (ctx->pc != 0x224408u) { return; }
    }
    ctx->pc = 0x224408u;
label_224408:
    // 0x224408: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x224408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x22440c: 0xac22ce70  sw          $v0, -0x3190($at)
    ctx->pc = 0x22440cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954608), GPR_U32(ctx, 2));
label_224410:
    // 0x224410: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x224410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224414: 0x16030018  bne         $s0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x224414u;
    {
        const bool branch_taken_0x224414 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x224414) {
            ctx->pc = 0x224478u;
            goto label_224478;
        }
    }
    ctx->pc = 0x22441Cu;
    // 0x22441c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x22441cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x224420: 0x3c023f0c  lui         $v0, 0x3F0C
    ctx->pc = 0x224420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16140 << 16));
    // 0x224424: 0xc420ce78  lwc1        $f0, -0x3188($at)
    ctx->pc = 0x224424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224428: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x224428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x22442c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22442cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x224430: 0x0  nop
    ctx->pc = 0x224430u;
    // NOP
    // 0x224434: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x224434u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x224438: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x224438u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22443c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x22443Cu;
    SET_GPR_U32(ctx, 31, 0x224444u);
    ctx->pc = 0x224440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22443Cu;
            // 0x224440: 0x4600a301  sub.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224444u; }
        if (ctx->pc != 0x224444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224444u; }
        if (ctx->pc != 0x224444u) { return; }
    }
    ctx->pc = 0x224444u;
label_224444:
    // 0x224444: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x224444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x224448: 0xac22ce70  sw          $v0, -0x3190($at)
    ctx->pc = 0x224448u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954608), GPR_U32(ctx, 2));
    // 0x22444c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x22444cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x224450: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x224450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x224454: 0xc420ce7c  lwc1        $f0, -0x3184($at)
    ctx->pc = 0x224454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224458: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x224458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22445c: 0x0  nop
    ctx->pc = 0x22445cu;
    // NOP
    // 0x224460: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x224460u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x224464: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x224464u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x224468: 0xc0a248c  jal         func_289230
    ctx->pc = 0x224468u;
    SET_GPR_U32(ctx, 31, 0x224470u);
    ctx->pc = 0x22446Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224468u;
            // 0x22446c: 0x4600b301  sub.s       $f12, $f22, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224470u; }
        if (ctx->pc != 0x224470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224470u; }
        if (ctx->pc != 0x224470u) { return; }
    }
    ctx->pc = 0x224470u;
label_224470:
    // 0x224470: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x224470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x224474: 0xac22ce74  sw          $v0, -0x318C($at)
    ctx->pc = 0x224474u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954612), GPR_U32(ctx, 2));
label_224478:
    // 0x224478: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x224478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x22447c: 0x8f868780  lw          $a2, -0x7880($gp)
    ctx->pc = 0x22447cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x224480: 0x8c23ce78  lw          $v1, -0x3188($at)
    ctx->pc = 0x224480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954616)));
    // 0x224484: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x224484u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x224488: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x224488u;
    {
        const bool branch_taken_0x224488 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x224488) {
            ctx->pc = 0x2244A0u;
            goto label_2244a0;
        }
    }
    ctx->pc = 0x224490u;
    // 0x224490: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x224490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x224494: 0xac26ce78  sw          $a2, -0x3188($at)
    ctx->pc = 0x224494u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954616), GPR_U32(ctx, 6));
    // 0x224498: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x224498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x22449c: 0xac20ce70  sw          $zero, -0x3190($at)
    ctx->pc = 0x22449cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954608), GPR_U32(ctx, 0));
label_2244a0:
    // 0x2244a0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2244a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2244a4: 0x8f868784  lw          $a2, -0x787C($gp)
    ctx->pc = 0x2244a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x2244a8: 0x8c23ce7c  lw          $v1, -0x3184($at)
    ctx->pc = 0x2244a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954620)));
    // 0x2244ac: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x2244acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2244b0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2244B0u;
    {
        const bool branch_taken_0x2244b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2244b0) {
            ctx->pc = 0x2244C8u;
            goto label_2244c8;
        }
    }
    ctx->pc = 0x2244B8u;
    // 0x2244b8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2244b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2244bc: 0xac26ce7c  sw          $a2, -0x3184($at)
    ctx->pc = 0x2244bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954620), GPR_U32(ctx, 6));
    // 0x2244c0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2244c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2244c4: 0xac20ce74  sw          $zero, -0x318C($at)
    ctx->pc = 0x2244c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954612), GPR_U32(ctx, 0));
label_2244c8:
    // 0x2244c8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2244c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2244cc: 0x8c23ce70  lw          $v1, -0x3190($at)
    ctx->pc = 0x2244ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954608)));
    // 0x2244d0: 0x1c6000d5  bgtz        $v1, . + 4 + (0xD5 << 2)
    ctx->pc = 0x2244D0u;
    {
        const bool branch_taken_0x2244d0 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2244d0) {
            ctx->pc = 0x224828u;
            goto label_224828;
        }
    }
    ctx->pc = 0x2244D8u;
    // 0x2244d8: 0x838393e0  lb          $v1, -0x6C20($gp)
    ctx->pc = 0x2244d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939616)));
    // 0x2244dc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2244dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2244e0: 0xac20ce70  sw          $zero, -0x3190($at)
    ctx->pc = 0x2244e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954608), GPR_U32(ctx, 0));
    // 0x2244e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2244e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2244e8: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x2244E8u;
    {
        const bool branch_taken_0x2244e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2244ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2244E8u;
            // 0x2244ec: 0xa38393e0  sb          $v1, -0x6C20($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939616), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2244e8) {
            ctx->pc = 0x224828u;
            goto label_224828;
        }
    }
    ctx->pc = 0x2244F0u;
label_2244f0:
    // 0x2244f0: 0xc78193c0  lwc1        $f1, -0x6C40($gp)
    ctx->pc = 0x2244f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2244f4: 0x3c034134  lui         $v1, 0x4134
    ctx->pc = 0x2244f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16692 << 16));
    // 0x2244f8: 0x34669249  ori         $a2, $v1, 0x9249
    ctx->pc = 0x2244f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37449);
    // 0x2244fc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2244fcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224500: 0x3c03431e  lui         $v1, 0x431E
    ctx->pc = 0x224500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17182 << 16));
    // 0x224504: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x224504u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x224508: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x224508u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22450c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x22450cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224510: 0x0  nop
    ctx->pc = 0x224510u;
    // NOP
    // 0x224514: 0x450000c4  bc1f        . + 4 + (0xC4 << 2)
    ctx->pc = 0x224514u;
    {
        const bool branch_taken_0x224514 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x224518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224514u;
            // 0x224518: 0xe78093c0  swc1        $f0, -0x6C40($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939584), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x224514) {
            ctx->pc = 0x224828u;
            goto label_224828;
        }
    }
    ctx->pc = 0x22451Cu;
    // 0x22451c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22451cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224520: 0xe78293c0  swc1        $f2, -0x6C40($gp)
    ctx->pc = 0x224520u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939584), bits); }
    // 0x224524: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x224524u;
    {
        const bool branch_taken_0x224524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224524u;
            // 0x224528: 0xa38393b0  sb          $v1, -0x6C50($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939568), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224524) {
            ctx->pc = 0x224828u;
            goto label_224828;
        }
    }
    ctx->pc = 0x22452Cu;
label_22452c:
    // 0x22452c: 0xc78193c0  lwc1        $f1, -0x6C40($gp)
    ctx->pc = 0x22452cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224530: 0x3c034134  lui         $v1, 0x4134
    ctx->pc = 0x224530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16692 << 16));
    // 0x224534: 0x34669249  ori         $a2, $v1, 0x9249
    ctx->pc = 0x224534u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37449);
    // 0x224538: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x224538u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22453c: 0x3c0343af  lui         $v1, 0x43AF
    ctx->pc = 0x22453cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17327 << 16));
    // 0x224540: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x224540u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x224544: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x224544u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x224548: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x224548u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22454c: 0x0  nop
    ctx->pc = 0x22454cu;
    // NOP
    // 0x224550: 0x450100b5  bc1t        . + 4 + (0xB5 << 2)
    ctx->pc = 0x224550u;
    {
        const bool branch_taken_0x224550 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x224554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224550u;
            // 0x224554: 0xe78093c0  swc1        $f0, -0x6C40($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939584), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x224550) {
            ctx->pc = 0x224828u;
            goto label_224828;
        }
    }
    ctx->pc = 0x224558u;
    // 0x224558: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x224558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22455c: 0xe78293c0  swc1        $f2, -0x6C40($gp)
    ctx->pc = 0x22455cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939584), bits); }
    // 0x224560: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x224560u;
    {
        const bool branch_taken_0x224560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224560u;
            // 0x224564: 0xa38393b0  sb          $v1, -0x6C50($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939568), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224560) {
            ctx->pc = 0x224828u;
            goto label_224828;
        }
    }
    ctx->pc = 0x224568u;
label_224568:
    // 0x224568: 0xc78193d0  lwc1        $f1, -0x6C30($gp)
    ctx->pc = 0x224568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22456c: 0x3c023db2  lui         $v0, 0x3DB2
    ctx->pc = 0x22456cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15794 << 16));
    // 0x224570: 0x3442b8c3  ori         $v0, $v0, 0xB8C3
    ctx->pc = 0x224570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47299);
    // 0x224574: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224578: 0x0  nop
    ctx->pc = 0x224578u;
    // NOP
    // 0x22457c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x22457cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x224580: 0xc047a42  jal         func_11E908
    ctx->pc = 0x224580u;
    SET_GPR_U32(ctx, 31, 0x224588u);
    ctx->pc = 0x224584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224580u;
            // 0x224584: 0xe78c93d0  swc1        $f12, -0x6C30($gp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939600), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224588u; }
        if (ctx->pc != 0x224588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224588u; }
        if (ctx->pc != 0x224588u) { return; }
    }
    ctx->pc = 0x224588u;
label_224588:
    // 0x224588: 0xc78193c8  lwc1        $f1, -0x6C38($gp)
    ctx->pc = 0x224588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22458c: 0x878693b4  lh          $a2, -0x6C4C($gp)
    ctx->pc = 0x22458cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939572)));
    // 0x224590: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x224590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x224594: 0x14c30008  bne         $a2, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x224594u;
    {
        const bool branch_taken_0x224594 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x224598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224594u;
            // 0x224598: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x224594) {
            ctx->pc = 0x2245B8u;
            goto label_2245b8;
        }
    }
    ctx->pc = 0x22459Cu;
    // 0x22459c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22459cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2245a0: 0x0  nop
    ctx->pc = 0x2245a0u;
    // NOP
    // 0x2245a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2245a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2245a8: 0x0  nop
    ctx->pc = 0x2245a8u;
    // NOP
    // 0x2245ac: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2245ACu;
    {
        const bool branch_taken_0x2245ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2245B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2245ACu;
            // 0x2245b0: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2245ac) {
            ctx->pc = 0x2245BCu;
            goto label_2245bc;
        }
    }
    ctx->pc = 0x2245B4u;
    // 0x2245b4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2245b4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2245b8:
    // 0x2245b8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2245b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2245bc:
    // 0x2245bc: 0x14c30008  bne         $a2, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2245BCu;
    {
        const bool branch_taken_0x2245bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x2245bc) {
            ctx->pc = 0x2245E0u;
            goto label_2245e0;
        }
    }
    ctx->pc = 0x2245C4u;
    // 0x2245c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2245c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2245c8: 0x0  nop
    ctx->pc = 0x2245c8u;
    // NOP
    // 0x2245cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2245ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2245d0: 0x0  nop
    ctx->pc = 0x2245d0u;
    // NOP
    // 0x2245d4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2245D4u;
    {
        const bool branch_taken_0x2245d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2245d4) {
            ctx->pc = 0x2245E0u;
            goto label_2245e0;
        }
    }
    ctx->pc = 0x2245DCu;
    // 0x2245dc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2245dcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2245e0:
    // 0x2245e0: 0xc78093c0  lwc1        $f0, -0x6C40($gp)
    ctx->pc = 0x2245e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2245e4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2245e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2245e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2245e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2245ec: 0x14c3000c  bne         $a2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2245ECu;
    {
        const bool branch_taken_0x2245ec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x2245F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2245ECu;
            // 0x2245f0: 0xe78093c0  swc1        $f0, -0x6C40($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939584), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2245ec) {
            ctx->pc = 0x224620u;
            goto label_224620;
        }
    }
    ctx->pc = 0x2245F4u;
    // 0x2245f4: 0xc78093c0  lwc1        $f0, -0x6C40($gp)
    ctx->pc = 0x2245f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2245f8: 0x3c034457  lui         $v1, 0x4457
    ctx->pc = 0x2245f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17495 << 16));
    // 0x2245fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2245fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x224600: 0x0  nop
    ctx->pc = 0x224600u;
    // NOP
    // 0x224604: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x224604u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224608: 0x0  nop
    ctx->pc = 0x224608u;
    // NOP
    // 0x22460c: 0x45010086  bc1t        . + 4 + (0x86 << 2)
    ctx->pc = 0x22460Cu;
    {
        const bool branch_taken_0x22460c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x224610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22460Cu;
            // 0x224610: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22460c) {
            ctx->pc = 0x224828u;
            goto label_224828;
        }
    }
    ctx->pc = 0x224614u;
    // 0x224614: 0xe78193c0  swc1        $f1, -0x6C40($gp)
    ctx->pc = 0x224614u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939584), bits); }
    // 0x224618: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x224618u;
    {
        const bool branch_taken_0x224618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22461Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224618u;
            // 0x22461c: 0xa38393b0  sb          $v1, -0x6C50($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939568), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224618) {
            ctx->pc = 0x224828u;
            goto label_224828;
        }
    }
    ctx->pc = 0x224620u;
label_224620:
    // 0x224620: 0xc78093c0  lwc1        $f0, -0x6C40($gp)
    ctx->pc = 0x224620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224624: 0x3c0343af  lui         $v1, 0x43AF
    ctx->pc = 0x224624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17327 << 16));
    // 0x224628: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x224628u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22462c: 0x0  nop
    ctx->pc = 0x22462cu;
    // NOP
    // 0x224630: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x224630u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224634: 0x0  nop
    ctx->pc = 0x224634u;
    // NOP
    // 0x224638: 0x4500007b  bc1f        . + 4 + (0x7B << 2)
    ctx->pc = 0x224638u;
    {
        const bool branch_taken_0x224638 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22463Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224638u;
            // 0x22463c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224638) {
            ctx->pc = 0x224828u;
            goto label_224828;
        }
    }
    ctx->pc = 0x224640u;
    // 0x224640: 0xe78193c0  swc1        $f1, -0x6C40($gp)
    ctx->pc = 0x224640u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939584), bits); }
    // 0x224644: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x224644u;
    {
        const bool branch_taken_0x224644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224644u;
            // 0x224648: 0xa38393b0  sb          $v1, -0x6C50($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939568), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224644) {
            ctx->pc = 0x224828u;
            goto label_224828;
        }
    }
    ctx->pc = 0x22464Cu;
label_22464c:
    // 0x22464c: 0xc78193d0  lwc1        $f1, -0x6C30($gp)
    ctx->pc = 0x22464cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224650: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x224650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x224654: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x224654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x224658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22465c: 0x0  nop
    ctx->pc = 0x22465cu;
    // NOP
    // 0x224660: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x224660u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x224664: 0xc047a42  jal         func_11E908
    ctx->pc = 0x224664u;
    SET_GPR_U32(ctx, 31, 0x22466Cu);
    ctx->pc = 0x224668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224664u;
            // 0x224668: 0xe78c93d0  swc1        $f12, -0x6C30($gp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939600), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22466Cu; }
        if (ctx->pc != 0x22466Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22466Cu; }
        if (ctx->pc != 0x22466Cu) { return; }
    }
    ctx->pc = 0x22466Cu;
label_22466c:
    // 0x22466c: 0xc78193cc  lwc1        $f1, -0x6C34($gp)
    ctx->pc = 0x22466cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224670: 0x878693b4  lh          $a2, -0x6C4C($gp)
    ctx->pc = 0x224670u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939572)));
    // 0x224674: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x224674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x224678: 0x14c30008  bne         $a2, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x224678u;
    {
        const bool branch_taken_0x224678 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x22467Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224678u;
            // 0x22467c: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x224678) {
            ctx->pc = 0x22469Cu;
            goto label_22469c;
        }
    }
    ctx->pc = 0x224680u;
    // 0x224680: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x224680u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224684: 0x0  nop
    ctx->pc = 0x224684u;
    // NOP
    // 0x224688: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x224688u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22468c: 0x0  nop
    ctx->pc = 0x22468cu;
    // NOP
    // 0x224690: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x224690u;
    {
        const bool branch_taken_0x224690 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x224694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224690u;
            // 0x224694: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224690) {
            ctx->pc = 0x2246A0u;
            goto label_2246a0;
        }
    }
    ctx->pc = 0x224698u;
    // 0x224698: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x224698u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_22469c:
    // 0x22469c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x22469cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2246a0:
    // 0x2246a0: 0x14c30008  bne         $a2, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2246A0u;
    {
        const bool branch_taken_0x2246a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x2246a0) {
            ctx->pc = 0x2246C4u;
            goto label_2246c4;
        }
    }
    ctx->pc = 0x2246A8u;
    // 0x2246a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2246a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2246ac: 0x0  nop
    ctx->pc = 0x2246acu;
    // NOP
    // 0x2246b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2246b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2246b4: 0x0  nop
    ctx->pc = 0x2246b4u;
    // NOP
    // 0x2246b8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2246B8u;
    {
        const bool branch_taken_0x2246b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2246b8) {
            ctx->pc = 0x2246C4u;
            goto label_2246c4;
        }
    }
    ctx->pc = 0x2246C0u;
    // 0x2246c0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2246c0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2246c4:
    // 0x2246c4: 0xc78093c4  lwc1        $f0, -0x6C3C($gp)
    ctx->pc = 0x2246c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2246c8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2246c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2246cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2246ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2246d0: 0x14c3000c  bne         $a2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2246D0u;
    {
        const bool branch_taken_0x2246d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x2246D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2246D0u;
            // 0x2246d4: 0xe78093c4  swc1        $f0, -0x6C3C($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2246d0) {
            ctx->pc = 0x224704u;
            goto label_224704;
        }
    }
    ctx->pc = 0x2246D8u;
    // 0x2246d8: 0xc78093c4  lwc1        $f0, -0x6C3C($gp)
    ctx->pc = 0x2246d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2246dc: 0x3c03441c  lui         $v1, 0x441C
    ctx->pc = 0x2246dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17436 << 16));
    // 0x2246e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2246e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2246e4: 0x0  nop
    ctx->pc = 0x2246e4u;
    // NOP
    // 0x2246e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2246e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2246ec: 0x0  nop
    ctx->pc = 0x2246ecu;
    // NOP
    // 0x2246f0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2246F0u;
    {
        const bool branch_taken_0x2246f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2246F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2246F0u;
            // 0x2246f4: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2246f0) {
            ctx->pc = 0x224708u;
            goto label_224708;
        }
    }
    ctx->pc = 0x2246F8u;
    // 0x2246f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2246f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2246fc: 0xe78193c4  swc1        $f1, -0x6C3C($gp)
    ctx->pc = 0x2246fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939588), bits); }
    // 0x224700: 0xa38393b0  sb          $v1, -0x6C50($gp)
    ctx->pc = 0x224700u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939568), (uint8_t)GPR_U32(ctx, 3));
label_224704:
    // 0x224704: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x224704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_224708:
    // 0x224708: 0x14c30047  bne         $a2, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x224708u;
    {
        const bool branch_taken_0x224708 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x224708) {
            ctx->pc = 0x224828u;
            goto label_224828;
        }
    }
    ctx->pc = 0x224710u;
    // 0x224710: 0xc78093c4  lwc1        $f0, -0x6C3C($gp)
    ctx->pc = 0x224710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224714: 0x3c034350  lui         $v1, 0x4350
    ctx->pc = 0x224714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17232 << 16));
    // 0x224718: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x224718u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22471c: 0x0  nop
    ctx->pc = 0x22471cu;
    // NOP
    // 0x224720: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x224720u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224724: 0x0  nop
    ctx->pc = 0x224724u;
    // NOP
    // 0x224728: 0x4500003f  bc1f        . + 4 + (0x3F << 2)
    ctx->pc = 0x224728u;
    {
        const bool branch_taken_0x224728 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22472Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224728u;
            // 0x22472c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224728) {
            ctx->pc = 0x224828u;
            goto label_224828;
        }
    }
    ctx->pc = 0x224730u;
    // 0x224730: 0xe78193c4  swc1        $f1, -0x6C3C($gp)
    ctx->pc = 0x224730u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939588), bits); }
    // 0x224734: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x224734u;
    {
        const bool branch_taken_0x224734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224734u;
            // 0x224738: 0xa38393b0  sb          $v1, -0x6C50($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939568), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224734) {
            ctx->pc = 0x224828u;
            goto label_224828;
        }
    }
    ctx->pc = 0x22473Cu;
label_22473c:
    // 0x22473c: 0xc78193d0  lwc1        $f1, -0x6C30($gp)
    ctx->pc = 0x22473cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224740: 0x3c023db2  lui         $v0, 0x3DB2
    ctx->pc = 0x224740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15794 << 16));
    // 0x224744: 0x3442b8c3  ori         $v0, $v0, 0xB8C3
    ctx->pc = 0x224744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47299);
    // 0x224748: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22474c: 0x0  nop
    ctx->pc = 0x22474cu;
    // NOP
    // 0x224750: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x224750u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x224754: 0xc047a42  jal         func_11E908
    ctx->pc = 0x224754u;
    SET_GPR_U32(ctx, 31, 0x22475Cu);
    ctx->pc = 0x224758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224754u;
            // 0x224758: 0xe78c93d0  swc1        $f12, -0x6C30($gp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939600), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22475Cu; }
        if (ctx->pc != 0x22475Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22475Cu; }
        if (ctx->pc != 0x22475Cu) { return; }
    }
    ctx->pc = 0x22475Cu;
label_22475c:
    // 0x22475c: 0xc78193cc  lwc1        $f1, -0x6C34($gp)
    ctx->pc = 0x22475cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224760: 0x878693b4  lh          $a2, -0x6C4C($gp)
    ctx->pc = 0x224760u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939572)));
    // 0x224764: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x224764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x224768: 0x14c30008  bne         $a2, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x224768u;
    {
        const bool branch_taken_0x224768 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x22476Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224768u;
            // 0x22476c: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x224768) {
            ctx->pc = 0x22478Cu;
            goto label_22478c;
        }
    }
    ctx->pc = 0x224770u;
    // 0x224770: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x224770u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224774: 0x0  nop
    ctx->pc = 0x224774u;
    // NOP
    // 0x224778: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x224778u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22477c: 0x0  nop
    ctx->pc = 0x22477cu;
    // NOP
    // 0x224780: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x224780u;
    {
        const bool branch_taken_0x224780 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x224784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224780u;
            // 0x224784: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224780) {
            ctx->pc = 0x224790u;
            goto label_224790;
        }
    }
    ctx->pc = 0x224788u;
    // 0x224788: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x224788u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_22478c:
    // 0x22478c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x22478cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_224790:
    // 0x224790: 0x14c30008  bne         $a2, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x224790u;
    {
        const bool branch_taken_0x224790 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x224790) {
            ctx->pc = 0x2247B4u;
            goto label_2247b4;
        }
    }
    ctx->pc = 0x224798u;
    // 0x224798: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x224798u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22479c: 0x0  nop
    ctx->pc = 0x22479cu;
    // NOP
    // 0x2247a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2247a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2247a4: 0x0  nop
    ctx->pc = 0x2247a4u;
    // NOP
    // 0x2247a8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2247A8u;
    {
        const bool branch_taken_0x2247a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2247a8) {
            ctx->pc = 0x2247B4u;
            goto label_2247b4;
        }
    }
    ctx->pc = 0x2247B0u;
    // 0x2247b0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2247b0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2247b4:
    // 0x2247b4: 0xc78093c4  lwc1        $f0, -0x6C3C($gp)
    ctx->pc = 0x2247b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2247b8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2247b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2247bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2247bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2247c0: 0x14c3000c  bne         $a2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2247C0u;
    {
        const bool branch_taken_0x2247c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x2247C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2247C0u;
            // 0x2247c4: 0xe78093c4  swc1        $f0, -0x6C3C($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2247c0) {
            ctx->pc = 0x2247F4u;
            goto label_2247f4;
        }
    }
    ctx->pc = 0x2247C8u;
    // 0x2247c8: 0xc78093c4  lwc1        $f0, -0x6C3C($gp)
    ctx->pc = 0x2247c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2247cc: 0x3c03c364  lui         $v1, 0xC364
    ctx->pc = 0x2247ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50020 << 16));
    // 0x2247d0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2247d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2247d4: 0x0  nop
    ctx->pc = 0x2247d4u;
    // NOP
    // 0x2247d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2247d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2247dc: 0x0  nop
    ctx->pc = 0x2247dcu;
    // NOP
    // 0x2247e0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2247E0u;
    {
        const bool branch_taken_0x2247e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2247E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2247E0u;
            // 0x2247e4: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2247e0) {
            ctx->pc = 0x2247F8u;
            goto label_2247f8;
        }
    }
    ctx->pc = 0x2247E8u;
    // 0x2247e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2247e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2247ec: 0xe78193c4  swc1        $f1, -0x6C3C($gp)
    ctx->pc = 0x2247ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939588), bits); }
    // 0x2247f0: 0xa38393b0  sb          $v1, -0x6C50($gp)
    ctx->pc = 0x2247f0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939568), (uint8_t)GPR_U32(ctx, 3));
label_2247f4:
    // 0x2247f4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2247f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2247f8:
    // 0x2247f8: 0x14c3000b  bne         $a2, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2247F8u;
    {
        const bool branch_taken_0x2247f8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x2247f8) {
            ctx->pc = 0x224828u;
            goto label_224828;
        }
    }
    ctx->pc = 0x224800u;
    // 0x224800: 0xc78093c4  lwc1        $f0, -0x6C3C($gp)
    ctx->pc = 0x224800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224804: 0x3c034350  lui         $v1, 0x4350
    ctx->pc = 0x224804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17232 << 16));
    // 0x224808: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x224808u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22480c: 0x0  nop
    ctx->pc = 0x22480cu;
    // NOP
    // 0x224810: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x224810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224814: 0x0  nop
    ctx->pc = 0x224814u;
    // NOP
    // 0x224818: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x224818u;
    {
        const bool branch_taken_0x224818 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22481Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224818u;
            // 0x22481c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224818) {
            ctx->pc = 0x224828u;
            goto label_224828;
        }
    }
    ctx->pc = 0x224820u;
    // 0x224820: 0xe78193c4  swc1        $f1, -0x6C3C($gp)
    ctx->pc = 0x224820u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939588), bits); }
    // 0x224824: 0xa38393b0  sb          $v1, -0x6C50($gp)
    ctx->pc = 0x224824u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939568), (uint8_t)GPR_U32(ctx, 3));
label_224828:
    // 0x224828: 0x878393b4  lh          $v1, -0x6C4C($gp)
    ctx->pc = 0x224828u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939572)));
    // 0x22482c: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x22482cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x224830: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x224830u;
    {
        const bool branch_taken_0x224830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x224830) {
            ctx->pc = 0x22487Cu;
            goto label_22487c;
        }
    }
    ctx->pc = 0x224838u;
    // 0x224838: 0x3c0243af  lui         $v0, 0x43AF
    ctx->pc = 0x224838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17327 << 16));
    // 0x22483c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22483cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224840: 0xc78193c0  lwc1        $f1, -0x6C40($gp)
    ctx->pc = 0x224840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224844: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x224844u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x224848: 0xc0a248c  jal         func_289230
    ctx->pc = 0x224848u;
    SET_GPR_U32(ctx, 31, 0x224850u);
    ctx->pc = 0x22484Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224848u;
            // 0x22484c: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224850u; }
        if (ctx->pc != 0x224850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224850u; }
        if (ctx->pc != 0x224850u) { return; }
    }
    ctx->pc = 0x224850u;
label_224850:
    // 0x224850: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x224850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x224854: 0xac22ce60  sw          $v0, -0x31A0($at)
    ctx->pc = 0x224854u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954592), GPR_U32(ctx, 2));
    // 0x224858: 0xc78193c4  lwc1        $f1, -0x6C3C($gp)
    ctx->pc = 0x224858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22485c: 0x3c024350  lui         $v0, 0x4350
    ctx->pc = 0x22485cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17232 << 16));
    // 0x224860: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224864: 0x0  nop
    ctx->pc = 0x224864u;
    // NOP
    // 0x224868: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x224868u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x22486c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x22486Cu;
    SET_GPR_U32(ctx, 31, 0x224874u);
    ctx->pc = 0x224870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22486Cu;
            // 0x224870: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224874u; }
        if (ctx->pc != 0x224874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224874u; }
        if (ctx->pc != 0x224874u) { return; }
    }
    ctx->pc = 0x224874u;
label_224874:
    // 0x224874: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x224874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x224878: 0xac22ce64  sw          $v0, -0x319C($at)
    ctx->pc = 0x224878u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954596), GPR_U32(ctx, 2));
label_22487c:
    // 0x22487c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x22487cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x224880: 0xc421ce60  lwc1        $f1, -0x31A0($at)
    ctx->pc = 0x224880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224884: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x224884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x224888: 0xc420ce64  lwc1        $f0, -0x319C($at)
    ctx->pc = 0x224888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294954596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22488c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22488cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x224890: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x224890u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x224894: 0xe78193d8  swc1        $f1, -0x6C28($gp)
    ctx->pc = 0x224894u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939608), bits); }
    // 0x224898: 0xe78093dc  swc1        $f0, -0x6C24($gp)
    ctx->pc = 0x224898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939612), bits); }
    // 0x22489c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22489cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2248a0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2248a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2248a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2248a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2248a8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2248a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2248ac: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2248acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2248b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2248B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2248B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2248B0u;
            // 0x2248b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2248B8u;
}
