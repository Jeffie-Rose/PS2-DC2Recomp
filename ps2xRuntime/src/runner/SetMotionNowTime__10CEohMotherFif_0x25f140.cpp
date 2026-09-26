#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMotionNowTime__10CEohMotherFif
// Address: 0x25f140 - 0x25f210
void SetMotionNowTime__10CEohMotherFif_0x25f140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMotionNowTime__10CEohMotherFif_0x25f140");
#endif

    switch (ctx->pc) {
        case 0x25f140u: goto label_25f140;
        case 0x25f144u: goto label_25f144;
        case 0x25f148u: goto label_25f148;
        case 0x25f14cu: goto label_25f14c;
        case 0x25f150u: goto label_25f150;
        case 0x25f154u: goto label_25f154;
        case 0x25f158u: goto label_25f158;
        case 0x25f15cu: goto label_25f15c;
        case 0x25f160u: goto label_25f160;
        case 0x25f164u: goto label_25f164;
        case 0x25f168u: goto label_25f168;
        case 0x25f16cu: goto label_25f16c;
        case 0x25f170u: goto label_25f170;
        case 0x25f174u: goto label_25f174;
        case 0x25f178u: goto label_25f178;
        case 0x25f17cu: goto label_25f17c;
        case 0x25f180u: goto label_25f180;
        case 0x25f184u: goto label_25f184;
        case 0x25f188u: goto label_25f188;
        case 0x25f18cu: goto label_25f18c;
        case 0x25f190u: goto label_25f190;
        case 0x25f194u: goto label_25f194;
        case 0x25f198u: goto label_25f198;
        case 0x25f19cu: goto label_25f19c;
        case 0x25f1a0u: goto label_25f1a0;
        case 0x25f1a4u: goto label_25f1a4;
        case 0x25f1a8u: goto label_25f1a8;
        case 0x25f1acu: goto label_25f1ac;
        case 0x25f1b0u: goto label_25f1b0;
        case 0x25f1b4u: goto label_25f1b4;
        case 0x25f1b8u: goto label_25f1b8;
        case 0x25f1bcu: goto label_25f1bc;
        case 0x25f1c0u: goto label_25f1c0;
        case 0x25f1c4u: goto label_25f1c4;
        case 0x25f1c8u: goto label_25f1c8;
        case 0x25f1ccu: goto label_25f1cc;
        case 0x25f1d0u: goto label_25f1d0;
        case 0x25f1d4u: goto label_25f1d4;
        case 0x25f1d8u: goto label_25f1d8;
        case 0x25f1dcu: goto label_25f1dc;
        case 0x25f1e0u: goto label_25f1e0;
        case 0x25f1e4u: goto label_25f1e4;
        case 0x25f1e8u: goto label_25f1e8;
        case 0x25f1ecu: goto label_25f1ec;
        case 0x25f1f0u: goto label_25f1f0;
        case 0x25f1f4u: goto label_25f1f4;
        case 0x25f1f8u: goto label_25f1f8;
        case 0x25f1fcu: goto label_25f1fc;
        case 0x25f200u: goto label_25f200;
        case 0x25f204u: goto label_25f204;
        case 0x25f208u: goto label_25f208;
        case 0x25f20cu: goto label_25f20c;
        default: break;
    }

    ctx->pc = 0x25f140u;

label_25f140:
    // 0x25f140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25f140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_25f144:
    // 0x25f144: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25f144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_25f148:
    // 0x25f148: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25f148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_25f14c:
    // 0x25f14c: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_25f150:
    if (ctx->pc == 0x25F150u) {
        ctx->pc = 0x25F150u;
            // 0x25f150: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x25F154u;
        goto label_25f154;
    }
    ctx->pc = 0x25F14Cu;
    {
        const bool branch_taken_0x25f14c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25F150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F14Cu;
            // 0x25f150: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f14c) {
            ctx->pc = 0x25F160u;
            goto label_25f160;
        }
    }
    ctx->pc = 0x25F154u;
label_25f154:
    // 0x25f154: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25f154u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_25f158:
    // 0x25f158: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25f15c:
    if (ctx->pc == 0x25F15Cu) {
        ctx->pc = 0x25F15Cu;
            // 0x25f15c: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x25F160u;
        goto label_25f160;
    }
    ctx->pc = 0x25F158u;
    {
        const bool branch_taken_0x25f158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F15Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F158u;
            // 0x25f15c: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f158) {
            ctx->pc = 0x25F168u;
            goto label_25f168;
        }
    }
    ctx->pc = 0x25F160u;
label_25f160:
    // 0x25f160: 0x10000026  b           . + 4 + (0x26 << 2)
label_25f164:
    if (ctx->pc == 0x25F164u) {
        ctx->pc = 0x25F164u;
            // 0x25f164: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F168u;
        goto label_25f168;
    }
    ctx->pc = 0x25F160u;
    {
        const bool branch_taken_0x25f160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F160u;
            // 0x25f164: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f160) {
            ctx->pc = 0x25F1FCu;
            goto label_25f1fc;
        }
    }
    ctx->pc = 0x25F168u;
label_25f168:
    // 0x25f168: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x25f168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_25f16c:
    // 0x25f16c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25f16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25f170:
    // 0x25f170: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_25f174:
    if (ctx->pc == 0x25F174u) {
        ctx->pc = 0x25F178u;
        goto label_25f178;
    }
    ctx->pc = 0x25F170u;
    {
        const bool branch_taken_0x25f170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f170) {
            ctx->pc = 0x25F180u;
            goto label_25f180;
        }
    }
    ctx->pc = 0x25F178u;
label_25f178:
    // 0x25f178: 0x10000020  b           . + 4 + (0x20 << 2)
label_25f17c:
    if (ctx->pc == 0x25F17Cu) {
        ctx->pc = 0x25F17Cu;
            // 0x25f17c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F180u;
        goto label_25f180;
    }
    ctx->pc = 0x25F178u;
    {
        const bool branch_taken_0x25f178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F178u;
            // 0x25f17c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f178) {
            ctx->pc = 0x25F1FCu;
            goto label_25f1fc;
        }
    }
    ctx->pc = 0x25F180u;
label_25f180:
    // 0x25f180: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x25f180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_25f184:
    // 0x25f184: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25f188:
    if (ctx->pc == 0x25F188u) {
        ctx->pc = 0x25F188u;
            // 0x25f188: 0x2470000c  addiu       $s0, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->pc = 0x25F18Cu;
        goto label_25f18c;
    }
    ctx->pc = 0x25F184u;
    {
        const bool branch_taken_0x25f184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F184u;
            // 0x25f188: 0x2470000c  addiu       $s0, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f184) {
            ctx->pc = 0x25F194u;
            goto label_25f194;
        }
    }
    ctx->pc = 0x25F18Cu;
label_25f18c:
    // 0x25f18c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_25f190:
    if (ctx->pc == 0x25F190u) {
        ctx->pc = 0x25F190u;
            // 0x25f190: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F194u;
        goto label_25f194;
    }
    ctx->pc = 0x25F18Cu;
    {
        const bool branch_taken_0x25f18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F18Cu;
            // 0x25f190: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f18c) {
            ctx->pc = 0x25F1FCu;
            goto label_25f1fc;
        }
    }
    ctx->pc = 0x25F194u;
label_25f194:
    // 0x25f194: 0x8c430374  lw          $v1, 0x374($v0)
    ctx->pc = 0x25f194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 884)));
label_25f198:
    // 0x25f198: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_25f19c:
    if (ctx->pc == 0x25F19Cu) {
        ctx->pc = 0x25F1A0u;
        goto label_25f1a0;
    }
    ctx->pc = 0x25F198u;
    {
        const bool branch_taken_0x25f198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f198) {
            ctx->pc = 0x25F1F0u;
            goto label_25f1f0;
        }
    }
    ctx->pc = 0x25F1A0u;
label_25f1a0:
    // 0x25f1a0: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x25f1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25f1a4:
    // 0x25f1a4: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x25f1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25f1a8:
    // 0x25f1a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25f1a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_25f1ac:
    // 0x25f1ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25f1acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_25f1b0:
    // 0x25f1b0: 0x46016500  add.s       $f20, $f12, $f1
    ctx->pc = 0x25f1b0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
label_25f1b4:
    // 0x25f1b4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x25f1b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25f1b8:
    // 0x25f1b8: 0x0  nop
    ctx->pc = 0x25f1b8u;
    // NOP
label_25f1bc:
    // 0x25f1bc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_25f1c0:
    if (ctx->pc == 0x25F1C0u) {
        ctx->pc = 0x25F1C4u;
        goto label_25f1c4;
    }
    ctx->pc = 0x25F1BCu;
    {
        const bool branch_taken_0x25f1bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25f1bc) {
            ctx->pc = 0x25F1CCu;
            goto label_25f1cc;
        }
    }
    ctx->pc = 0x25F1C4u;
label_25f1c4:
    // 0x25f1c4: 0x1000000d  b           . + 4 + (0xD << 2)
label_25f1c8:
    if (ctx->pc == 0x25F1C8u) {
        ctx->pc = 0x25F1C8u;
            // 0x25f1c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F1CCu;
        goto label_25f1cc;
    }
    ctx->pc = 0x25F1C4u;
    {
        const bool branch_taken_0x25f1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F1C4u;
            // 0x25f1c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f1c4) {
            ctx->pc = 0x25F1FCu;
            goto label_25f1fc;
        }
    }
    ctx->pc = 0x25F1CCu;
label_25f1cc:
    // 0x25f1cc: 0xe4540388  swc1        $f20, 0x388($v0)
    ctx->pc = 0x25f1ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 904), bits); }
label_25f1d0:
    // 0x25f1d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x25f1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25f1d4:
    // 0x25f1d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25f1d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25f1d8:
    // 0x25f1d8: 0x8f3900d0  lw          $t9, 0xD0($t9)
    ctx->pc = 0x25f1d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 208)));
label_25f1dc:
    // 0x25f1dc: 0x320f809  jalr        $t9
label_25f1e0:
    if (ctx->pc == 0x25F1E0u) {
        ctx->pc = 0x25F1E4u;
        goto label_25f1e4;
    }
    ctx->pc = 0x25F1DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25F1E4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x25F1E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25F1E4u; }
            if (ctx->pc != 0x25F1E4u) { return; }
        }
        }
    }
    ctx->pc = 0x25F1E4u;
label_25f1e4:
    // 0x25f1e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x25f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25f1e8:
    // 0x25f1e8: 0x10000003  b           . + 4 + (0x3 << 2)
label_25f1ec:
    if (ctx->pc == 0x25F1ECu) {
        ctx->pc = 0x25F1ECu;
            // 0x25f1ec: 0xe4540388  swc1        $f20, 0x388($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 904), bits); }
        ctx->pc = 0x25F1F0u;
        goto label_25f1f0;
    }
    ctx->pc = 0x25F1E8u;
    {
        const bool branch_taken_0x25f1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F1E8u;
            // 0x25f1ec: 0xe4540388  swc1        $f20, 0x388($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 904), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f1e8) {
            ctx->pc = 0x25F1F8u;
            goto label_25f1f8;
        }
    }
    ctx->pc = 0x25F1F0u;
label_25f1f0:
    // 0x25f1f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_25f1f4:
    if (ctx->pc == 0x25F1F4u) {
        ctx->pc = 0x25F1F4u;
            // 0x25f1f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25F1F8u;
        goto label_25f1f8;
    }
    ctx->pc = 0x25F1F0u;
    {
        const bool branch_taken_0x25f1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F1F0u;
            // 0x25f1f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f1f0) {
            ctx->pc = 0x25F1FCu;
            goto label_25f1fc;
        }
    }
    ctx->pc = 0x25F1F8u;
label_25f1f8:
    // 0x25f1f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25f1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25f1fc:
    // 0x25f1fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25f1fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25f200:
    // 0x25f200: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25f200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25f204:
    // 0x25f204: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25f204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25f208:
    // 0x25f208: 0x3e00008  jr          $ra
label_25f20c:
    if (ctx->pc == 0x25F20Cu) {
        ctx->pc = 0x25F20Cu;
            // 0x25f20c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x25F210u;
        goto label_fallthrough_0x25f208;
    }
    ctx->pc = 0x25F208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F208u;
            // 0x25f20c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x25f208:
    ctx->pc = 0x25F210u;
}
