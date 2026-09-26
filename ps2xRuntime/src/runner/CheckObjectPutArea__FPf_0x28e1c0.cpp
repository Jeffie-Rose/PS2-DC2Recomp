#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckObjectPutArea__FPf
// Address: 0x28e1c0 - 0x28e2a0
void CheckObjectPutArea__FPf_0x28e1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckObjectPutArea__FPf_0x28e1c0");
#endif

    switch (ctx->pc) {
        case 0x28e1c0u: goto label_28e1c0;
        case 0x28e1c4u: goto label_28e1c4;
        case 0x28e1c8u: goto label_28e1c8;
        case 0x28e1ccu: goto label_28e1cc;
        case 0x28e1d0u: goto label_28e1d0;
        case 0x28e1d4u: goto label_28e1d4;
        case 0x28e1d8u: goto label_28e1d8;
        case 0x28e1dcu: goto label_28e1dc;
        case 0x28e1e0u: goto label_28e1e0;
        case 0x28e1e4u: goto label_28e1e4;
        case 0x28e1e8u: goto label_28e1e8;
        case 0x28e1ecu: goto label_28e1ec;
        case 0x28e1f0u: goto label_28e1f0;
        case 0x28e1f4u: goto label_28e1f4;
        case 0x28e1f8u: goto label_28e1f8;
        case 0x28e1fcu: goto label_28e1fc;
        case 0x28e200u: goto label_28e200;
        case 0x28e204u: goto label_28e204;
        case 0x28e208u: goto label_28e208;
        case 0x28e20cu: goto label_28e20c;
        case 0x28e210u: goto label_28e210;
        case 0x28e214u: goto label_28e214;
        case 0x28e218u: goto label_28e218;
        case 0x28e21cu: goto label_28e21c;
        case 0x28e220u: goto label_28e220;
        case 0x28e224u: goto label_28e224;
        case 0x28e228u: goto label_28e228;
        case 0x28e22cu: goto label_28e22c;
        case 0x28e230u: goto label_28e230;
        case 0x28e234u: goto label_28e234;
        case 0x28e238u: goto label_28e238;
        case 0x28e23cu: goto label_28e23c;
        case 0x28e240u: goto label_28e240;
        case 0x28e244u: goto label_28e244;
        case 0x28e248u: goto label_28e248;
        case 0x28e24cu: goto label_28e24c;
        case 0x28e250u: goto label_28e250;
        case 0x28e254u: goto label_28e254;
        case 0x28e258u: goto label_28e258;
        case 0x28e25cu: goto label_28e25c;
        case 0x28e260u: goto label_28e260;
        case 0x28e264u: goto label_28e264;
        case 0x28e268u: goto label_28e268;
        case 0x28e26cu: goto label_28e26c;
        case 0x28e270u: goto label_28e270;
        case 0x28e274u: goto label_28e274;
        case 0x28e278u: goto label_28e278;
        case 0x28e27cu: goto label_28e27c;
        case 0x28e280u: goto label_28e280;
        case 0x28e284u: goto label_28e284;
        case 0x28e288u: goto label_28e288;
        case 0x28e28cu: goto label_28e28c;
        case 0x28e290u: goto label_28e290;
        case 0x28e294u: goto label_28e294;
        case 0x28e298u: goto label_28e298;
        case 0x28e29cu: goto label_28e29c;
        default: break;
    }

    ctx->pc = 0x28e1c0u;

label_28e1c0:
    // 0x28e1c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28e1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_28e1c4:
    // 0x28e1c4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x28e1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_28e1c8:
    // 0x28e1c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28e1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_28e1cc:
    // 0x28e1cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x28e1ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28e1d0:
    // 0x28e1d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28e1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_28e1d4:
    // 0x28e1d4: 0x8f838dac  lw          $v1, -0x7254($gp)
    ctx->pc = 0x28e1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_28e1d8:
    // 0x28e1d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28e1d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28e1dc:
    // 0x28e1dc: 0x8c64300c  lw          $a0, 0x300C($v1)
    ctx->pc = 0x28e1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12300)));
label_28e1e0:
    // 0x28e1e0: 0xc0a319c  jal         func_28C670
label_28e1e4:
    if (ctx->pc == 0x28E1E4u) {
        ctx->pc = 0x28E1E4u;
            // 0x28e1e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28E1E8u;
        goto label_28e1e8;
    }
    ctx->pc = 0x28E1E0u;
    SET_GPR_U32(ctx, 31, 0x28E1E8u);
    ctx->pc = 0x28E1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E1E0u;
            // 0x28e1e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C670u;
    if (runtime->hasFunction(0x28C670u)) {
        auto targetFn = runtime->lookupFunction(0x28C670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E1E8u; }
        if (ctx->pc != 0x28E1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckArea__19CTreasureBoxManagerFPff_0x28c670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E1E8u; }
        if (ctx->pc != 0x28E1E8u) { return; }
    }
    ctx->pc = 0x28E1E8u;
label_28e1e8:
    // 0x28e1e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_28e1ec:
    if (ctx->pc == 0x28E1ECu) {
        ctx->pc = 0x28E1ECu;
            // 0x28e1ec: 0x3c024220  lui         $v0, 0x4220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
        ctx->pc = 0x28E1F0u;
        goto label_28e1f0;
    }
    ctx->pc = 0x28E1E8u;
    {
        const bool branch_taken_0x28e1e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E1E8u;
            // 0x28e1ec: 0x3c024220  lui         $v0, 0x4220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e1e8) {
            ctx->pc = 0x28E1F8u;
            goto label_28e1f8;
        }
    }
    ctx->pc = 0x28E1F0u;
label_28e1f0:
    // 0x28e1f0: 0x10000027  b           . + 4 + (0x27 << 2)
label_28e1f4:
    if (ctx->pc == 0x28E1F4u) {
        ctx->pc = 0x28E1F4u;
            // 0x28e1f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28E1F8u;
        goto label_28e1f8;
    }
    ctx->pc = 0x28E1F0u;
    {
        const bool branch_taken_0x28e1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E1F0u;
            // 0x28e1f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e1f0) {
            ctx->pc = 0x28E290u;
            goto label_28e290;
        }
    }
    ctx->pc = 0x28E1F8u;
label_28e1f8:
    // 0x28e1f8: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x28e1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_28e1fc:
    // 0x28e1fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x28e1fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28e200:
    // 0x28e200: 0x24844b20  addiu       $a0, $a0, 0x4B20
    ctx->pc = 0x28e200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19232));
label_28e204:
    // 0x28e204: 0xc0a2fbc  jal         func_28BEF0
label_28e208:
    if (ctx->pc == 0x28E208u) {
        ctx->pc = 0x28E208u;
            // 0x28e208: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28E20Cu;
        goto label_28e20c;
    }
    ctx->pc = 0x28E204u;
    SET_GPR_U32(ctx, 31, 0x28E20Cu);
    ctx->pc = 0x28E208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E204u;
            // 0x28e208: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28BEF0u;
    if (runtime->hasFunction(0x28BEF0u)) {
        auto targetFn = runtime->lookupFunction(0x28BEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E20Cu; }
        if (ctx->pc != 0x28E20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckArea__13CRandomCircleFPff_0x28bef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E20Cu; }
        if (ctx->pc != 0x28E20Cu) { return; }
    }
    ctx->pc = 0x28E20Cu;
label_28e20c:
    // 0x28e20c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_28e210:
    if (ctx->pc == 0x28E210u) {
        ctx->pc = 0x28E210u;
            // 0x28e210: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x28E214u;
        goto label_28e214;
    }
    ctx->pc = 0x28E20Cu;
    {
        const bool branch_taken_0x28e20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E20Cu;
            // 0x28e210: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e20c) {
            ctx->pc = 0x28E21Cu;
            goto label_28e21c;
        }
    }
    ctx->pc = 0x28E214u;
label_28e214:
    // 0x28e214: 0x1000001e  b           . + 4 + (0x1E << 2)
label_28e218:
    if (ctx->pc == 0x28E218u) {
        ctx->pc = 0x28E218u;
            // 0x28e218: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28E21Cu;
        goto label_28e21c;
    }
    ctx->pc = 0x28E214u;
    {
        const bool branch_taken_0x28e214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E214u;
            // 0x28e218: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e214) {
            ctx->pc = 0x28E290u;
            goto label_28e290;
        }
    }
    ctx->pc = 0x28E21Cu;
label_28e21c:
    // 0x28e21c: 0x8c240480  lw          $a0, 0x480($at)
    ctx->pc = 0x28e21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1152)));
label_28e220:
    // 0x28e220: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
label_28e224:
    if (ctx->pc == 0x28E224u) {
        ctx->pc = 0x28E224u;
            // 0x28e224: 0x3c024220  lui         $v0, 0x4220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
        ctx->pc = 0x28E228u;
        goto label_28e228;
    }
    ctx->pc = 0x28E220u;
    {
        const bool branch_taken_0x28e220 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E220u;
            // 0x28e224: 0x3c024220  lui         $v0, 0x4220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e220) {
            ctx->pc = 0x28E274u;
            goto label_28e274;
        }
    }
    ctx->pc = 0x28E228u;
label_28e228:
    // 0x28e228: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x28e228u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28e22c:
    // 0x28e22c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x28e22cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_28e230:
    // 0x28e230: 0x320f809  jalr        $t9
label_28e234:
    if (ctx->pc == 0x28E234u) {
        ctx->pc = 0x28E234u;
            // 0x28e234: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x28E238u;
        goto label_28e238;
    }
    ctx->pc = 0x28E230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28E238u);
        ctx->pc = 0x28E234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E230u;
            // 0x28e234: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28E238u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28E238u; }
            if (ctx->pc != 0x28E238u) { return; }
        }
        }
    }
    ctx->pc = 0x28E238u;
label_28e238:
    // 0x28e238: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28e238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_28e23c:
    // 0x28e23c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x28e23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_28e240:
    // 0x28e240: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x28e240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_28e244:
    // 0x28e244: 0xc04c018  jal         func_130060
label_28e248:
    if (ctx->pc == 0x28E248u) {
        ctx->pc = 0x28E248u;
            // 0x28e248: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28E24Cu;
        goto label_28e24c;
    }
    ctx->pc = 0x28E244u;
    SET_GPR_U32(ctx, 31, 0x28E24Cu);
    ctx->pc = 0x28E248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E244u;
            // 0x28e248: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E24Cu; }
        if (ctx->pc != 0x28E24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E24Cu; }
        if (ctx->pc != 0x28E24Cu) { return; }
    }
    ctx->pc = 0x28E24Cu;
label_28e24c:
    // 0x28e24c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x28e24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_28e250:
    // 0x28e250: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28e250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28e254:
    // 0x28e254: 0x0  nop
    ctx->pc = 0x28e254u;
    // NOP
label_28e258:
    // 0x28e258: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x28e258u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28e25c:
    // 0x28e25c: 0x0  nop
    ctx->pc = 0x28e25cu;
    // NOP
label_28e260:
    // 0x28e260: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_28e264:
    if (ctx->pc == 0x28E264u) {
        ctx->pc = 0x28E264u;
            // 0x28e264: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28E268u;
        goto label_28e268;
    }
    ctx->pc = 0x28E260u;
    {
        const bool branch_taken_0x28e260 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28E264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E260u;
            // 0x28e264: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e260) {
            ctx->pc = 0x28E270u;
            goto label_28e270;
        }
    }
    ctx->pc = 0x28E268u;
label_28e268:
    // 0x28e268: 0x1000000a  b           . + 4 + (0xA << 2)
label_28e26c:
    if (ctx->pc == 0x28E26Cu) {
        ctx->pc = 0x28E26Cu;
            // 0x28e26c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x28E270u;
        goto label_28e270;
    }
    ctx->pc = 0x28E268u;
    {
        const bool branch_taken_0x28e268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E26Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E268u;
            // 0x28e26c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e268) {
            ctx->pc = 0x28E294u;
            goto label_28e294;
        }
    }
    ctx->pc = 0x28E270u;
label_28e270:
    // 0x28e270: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x28e270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_28e274:
    // 0x28e274: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x28e274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_28e278:
    // 0x28e278: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x28e278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28e27c:
    // 0x28e27c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28e27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28e280:
    // 0x28e280: 0xc0764fc  jal         func_1D93F0
label_28e284:
    if (ctx->pc == 0x28E284u) {
        ctx->pc = 0x28E284u;
            // 0x28e284: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->pc = 0x28E288u;
        goto label_28e288;
    }
    ctx->pc = 0x28E280u;
    SET_GPR_U32(ctx, 31, 0x28E288u);
    ctx->pc = 0x28E284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E280u;
            // 0x28e284: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D93F0u;
    if (runtime->hasFunction(0x1D93F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D93F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E288u; }
        if (ctx->pc != 0x28E288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchRandomStone__11CAutoMapGenFPff_0x1d93f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E288u; }
        if (ctx->pc != 0x28E288u) { return; }
    }
    ctx->pc = 0x28E288u;
label_28e288:
    // 0x28e288: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x28e288u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_28e28c:
    // 0x28e28c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x28e28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_28e290:
    // 0x28e290: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28e290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28e294:
    // 0x28e294: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28e294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_28e298:
    // 0x28e298: 0x3e00008  jr          $ra
label_28e29c:
    if (ctx->pc == 0x28E29Cu) {
        ctx->pc = 0x28E29Cu;
            // 0x28e29c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x28E2A0u;
        goto label_fallthrough_0x28e298;
    }
    ctx->pc = 0x28E298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E298u;
            // 0x28e29c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28e298:
    ctx->pc = 0x28E2A0u;
}
