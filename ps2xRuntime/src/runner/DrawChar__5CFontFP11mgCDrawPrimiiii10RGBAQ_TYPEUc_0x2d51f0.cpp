#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawChar__5CFontFP11mgCDrawPrimiiii10RGBAQ_TYPEUc
// Address: 0x2d51f0 - 0x2d53fc
void DrawChar__5CFontFP11mgCDrawPrimiiii10RGBAQ_TYPEUc_0x2d51f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawChar__5CFontFP11mgCDrawPrimiiii10RGBAQ_TYPEUc_0x2d51f0");
#endif

    switch (ctx->pc) {
        case 0x2d525cu: goto label_2d525c;
        case 0x2d5288u: goto label_2d5288;
        case 0x2d529cu: goto label_2d529c;
        case 0x2d52c8u: goto label_2d52c8;
        case 0x2d530cu: goto label_2d530c;
        case 0x2d5364u: goto label_2d5364;
        case 0x2d53a0u: goto label_2d53a0;
        case 0x2d53b8u: goto label_2d53b8;
        case 0x2d53ccu: goto label_2d53cc;
        default: break;
    }

    ctx->pc = 0x2d51f0u;

    // 0x2d51f0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2d51f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x2d51f4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2d51f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2d51f8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2d51f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2d51fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2d51fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2d5200: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2d5200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2d5204: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d5204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d5208: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x2d5208u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d520c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d520cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d5210: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2d5210u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5214: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d5214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d5218: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2d5218u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d521c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d521cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d5220: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x2d5220u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5224: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d5224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d5228: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2d5228u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d522c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d522cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d5230: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d5230u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5234: 0xffaa00a8  sd          $t2, 0xA8($sp)
    ctx->pc = 0x2d5234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 10));
    // 0x2d5238: 0x6400064  bltz        $s2, . + 4 + (0x64 << 2)
    ctx->pc = 0x2D5238u;
    {
        const bool branch_taken_0x2d5238 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2D523Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5238u;
            // 0x2d523c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5238) {
            ctx->pc = 0x2D53CCu;
            goto label_2d53cc;
        }
    }
    ctx->pc = 0x2D5240u;
    // 0x2d5240: 0x8e2200ac  lw          $v0, 0xAC($s1)
    ctx->pc = 0x2d5240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x2d5244: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D5244u;
    {
        const bool branch_taken_0x2d5244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5244u;
            // 0x2d5248: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5244) {
            ctx->pc = 0x2D5290u;
            goto label_2d5290;
        }
    }
    ctx->pc = 0x2D524Cu;
    // 0x2d524c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2d524cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2d5250: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d5250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5254: 0xc0b50c0  jal         func_2D4300
    ctx->pc = 0x2D5254u;
    SET_GPR_U32(ctx, 31, 0x2D525Cu);
    ctx->pc = 0x2D5258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5254u;
            // 0x2d5258: 0x27a6011c  addiu       $a2, $sp, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4300u;
    if (runtime->hasFunction(0x2D4300u)) {
        auto targetFn = runtime->lookupFunction(0x2D4300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D525Cu; }
        if (ctx->pc != 0x2D525Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRectFontTexMini__FiPi_0x2d4300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D525Cu; }
        if (ctx->pc != 0x2D525Cu) { return; }
    }
    ctx->pc = 0x2D525Cu;
label_2d525c:
    // 0x2d525c: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x2d525cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d5260: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d5260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5264: 0x8fa600d4  lw          $a2, 0xD4($sp)
    ctx->pc = 0x2d5264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2d5268: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x2d5268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2d526c: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x2d526cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2d5270: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x2d5270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x2d5274: 0xafa700b0  sw          $a3, 0xB0($sp)
    ctx->pc = 0x2d5274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 7));
    // 0x2d5278: 0xafa600b4  sw          $a2, 0xB4($sp)
    ctx->pc = 0x2d5278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 6));
    // 0x2d527c: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x2d527cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
    // 0x2d5280: 0xc0b50a0  jal         func_2D4280
    ctx->pc = 0x2D5280u;
    SET_GPR_U32(ctx, 31, 0x2D5288u);
    ctx->pc = 0x2D5284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5280u;
            // 0x2d5284: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4280u;
    if (runtime->hasFunction(0x2D4280u)) {
        auto targetFn = runtime->lookupFunction(0x2D4280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5288u; }
        if (ctx->pc != 0x2D5288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MySetTexMini__FiP11mgCDrawPrim_0x2d4280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5288u; }
        if (ctx->pc != 0x2D5288u) { return; }
    }
    ctx->pc = 0x2D5288u;
label_2d5288:
    // 0x2d5288: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2D5288u;
    {
        const bool branch_taken_0x2d5288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5288) {
            ctx->pc = 0x2D52C8u;
            goto label_2d52c8;
        }
    }
    ctx->pc = 0x2D5290u;
label_2d5290:
    // 0x2d5290: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d5290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5294: 0xc0b504c  jal         func_2D4130
    ctx->pc = 0x2D5294u;
    SET_GPR_U32(ctx, 31, 0x2D529Cu);
    ctx->pc = 0x2D5298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5294u;
            // 0x2d5298: 0x27a6011c  addiu       $a2, $sp, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4130u;
    if (runtime->hasFunction(0x2D4130u)) {
        auto targetFn = runtime->lookupFunction(0x2D4130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D529Cu; }
        if (ctx->pc != 0x2D529Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRectFontTex__FiPi_0x2d4130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D529Cu; }
        if (ctx->pc != 0x2D529Cu) { return; }
    }
    ctx->pc = 0x2D529Cu;
label_2d529c:
    // 0x2d529c: 0x8fa700e0  lw          $a3, 0xE0($sp)
    ctx->pc = 0x2d529cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d52a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d52a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d52a4: 0x8fa600e4  lw          $a2, 0xE4($sp)
    ctx->pc = 0x2d52a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2d52a8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2d52a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d52ac: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x2d52acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2d52b0: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x2d52b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x2d52b4: 0xafa700b0  sw          $a3, 0xB0($sp)
    ctx->pc = 0x2d52b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 7));
    // 0x2d52b8: 0xafa600b4  sw          $a2, 0xB4($sp)
    ctx->pc = 0x2d52b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 6));
    // 0x2d52bc: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x2d52bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
    // 0x2d52c0: 0xc0b5530  jal         func_2D54C0
    ctx->pc = 0x2D52C0u;
    SET_GPR_U32(ctx, 31, 0x2D52C8u);
    ctx->pc = 0x2D52C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D52C0u;
            // 0x2d52c4: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D54C0u;
    if (runtime->hasFunction(0x2D54C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D54C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D52C8u; }
        if (ctx->pc != 0x2D52C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MySetTex__FiP11mgCDrawPrim_0x2d54c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D52C8u; }
        if (ctx->pc != 0x2D52C8u) { return; }
    }
    ctx->pc = 0x2D52C8u;
label_2d52c8:
    // 0x2d52c8: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2d52c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
    // 0x2d52cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d52ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d52d0: 0x244268a0  addiu       $v0, $v0, 0x68A0
    ctx->pc = 0x2d52d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26784));
    // 0x2d52d4: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x2d52d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2d52d8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2d52d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d52dc: 0x27be00c4  addiu       $fp, $sp, 0xC4
    ctx->pc = 0x2d52dcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x2d52e0: 0x27b200c8  addiu       $s2, $sp, 0xC8
    ctx->pc = 0x2d52e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x2d52e4: 0x27b700cc  addiu       $s7, $sp, 0xCC
    ctx->pc = 0x2d52e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x2d52e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d52e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d52ec: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2d52ecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2d52f0: 0xafb500c0  sw          $s5, 0xC0($sp)
    ctx->pc = 0x2d52f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 21));
    // 0x2d52f4: 0xafd40000  sw          $s4, 0x0($fp)
    ctx->pc = 0x2d52f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 20));
    // 0x2d52f8: 0x8e2200a4  lw          $v0, 0xA4($s1)
    ctx->pc = 0x2d52f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x2d52fc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2d52fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2d5300: 0x8e2200a8  lw          $v0, 0xA8($s1)
    ctx->pc = 0x2d5300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
    // 0x2d5304: 0xc0b5110  jal         func_2D4440
    ctx->pc = 0x2D5304u;
    SET_GPR_U32(ctx, 31, 0x2D530Cu);
    ctx->pc = 0x2D5308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5304u;
            // 0x2d5308: 0xaee20000  sw          $v0, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4440u;
    if (runtime->hasFunction(0x2D4440u)) {
        auto targetFn = runtime->lookupFunction(0x2D4440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D530Cu; }
        if (ctx->pc != 0x2D530Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHalfFont__5CFontFi_0x2d4440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D530Cu; }
        if (ctx->pc != 0x2D530Cu) { return; }
    }
    ctx->pc = 0x2D530Cu;
label_2d530c:
    // 0x2d530c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D530Cu;
    {
        const bool branch_taken_0x2d530c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d530c) {
            ctx->pc = 0x2D5344u;
            goto label_2d5344;
        }
    }
    ctx->pc = 0x2D5314u;
    // 0x2d5314: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2d5314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d5318: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D5318u;
    {
        const bool branch_taken_0x2d5318 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2D531Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5318u;
            // 0x2d531c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5318) {
            ctx->pc = 0x2D5328u;
            goto label_2d5328;
        }
    }
    ctx->pc = 0x2D5320u;
    // 0x2d5320: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2d5320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d5324: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2d5324u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_2d5328:
    // 0x2d5328: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x2d5328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x2d532c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2d532cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d5330: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D5330u;
    {
        const bool branch_taken_0x2d5330 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2D5334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5330u;
            // 0x2d5334: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5330) {
            ctx->pc = 0x2D5340u;
            goto label_2d5340;
        }
    }
    ctx->pc = 0x2D5338u;
    // 0x2d5338: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2d5338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d533c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2d533cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_2d5340:
    // 0x2d5340: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2d5340u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2d5344:
    // 0x2d5344: 0x12c00008  beqz        $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D5344u;
    {
        const bool branch_taken_0x2d5344 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5344u;
            // 0x2d5348: 0x27a400ab  addiu       $a0, $sp, 0xAB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 171));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5344) {
            ctx->pc = 0x2D5368u;
            goto label_2d5368;
        }
    }
    ctx->pc = 0x2D534Cu;
    // 0x2d534c: 0x8e270080  lw          $a3, 0x80($s1)
    ctx->pc = 0x2d534cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x2d5350: 0x326800ff  andi        $t0, $s3, 0xFF
    ctx->pc = 0x2d5350u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2d5354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d5354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5358: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2d5358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2d535c: 0xc0b52d0  jal         func_2D4B40
    ctx->pc = 0x2D535Cu;
    SET_GPR_U32(ctx, 31, 0x2D5364u);
    ctx->pc = 0x2D5360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D535Cu;
            // 0x2d5360: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4B40u;
    if (runtime->hasFunction(0x2D4B40u)) {
        auto targetFn = runtime->lookupFunction(0x2D4B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5364u; }
        if (ctx->pc != 0x2D5364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite_Fuchi__FP11mgCDrawPrim4RECT4RECTii_0x2d4b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5364u; }
        if (ctx->pc != 0x2D5364u) { return; }
    }
    ctx->pc = 0x2D5364u;
label_2d5364:
    // 0x2d5364: 0x27a400ab  addiu       $a0, $sp, 0xAB
    ctx->pc = 0x2d5364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 171));
label_2d5368:
    // 0x2d5368: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x2d5368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2d536c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2d536cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d5370: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2d5370u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2d5374: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D5374u;
    {
        const bool branch_taken_0x2d5374 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2D5378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5374u;
            // 0x2d5378: 0x311c3  sra         $v0, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5374) {
            ctx->pc = 0x2D5384u;
            goto label_2d5384;
        }
    }
    ctx->pc = 0x2D537Cu;
    // 0x2d537c: 0x2462007f  addiu       $v0, $v1, 0x7F
    ctx->pc = 0x2d537cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x2d5380: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x2d5380u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_2d5384:
    // 0x2d5384: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2d5384u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d5388: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2d5388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d538c: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x2d538cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x2d5390: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x2d5390u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d5394: 0x8fa800bc  lw          $t0, 0xBC($sp)
    ctx->pc = 0x2d5394u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2d5398: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D5398u;
    SET_GPR_U32(ctx, 31, 0x2D53A0u);
    ctx->pc = 0x2D539Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5398u;
            // 0x2d539c: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D53A0u; }
        if (ctx->pc != 0x2D53A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D53A0u; }
        if (ctx->pc != 0x2D53A0u) { return; }
    }
    ctx->pc = 0x2D53A0u;
label_2d53a0:
    // 0x2d53a0: 0x8fc60000  lw          $a2, 0x0($fp)
    ctx->pc = 0x2d53a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2d53a4: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x2d53a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d53a8: 0x8ee80000  lw          $t0, 0x0($s7)
    ctx->pc = 0x2d53a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2d53ac: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x2d53acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d53b0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D53B0u;
    SET_GPR_U32(ctx, 31, 0x2D53B8u);
    ctx->pc = 0x2D53B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D53B0u;
            // 0x2d53b4: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D53B8u; }
        if (ctx->pc != 0x2D53B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D53B8u; }
        if (ctx->pc != 0x2D53B8u) { return; }
    }
    ctx->pc = 0x2D53B8u;
label_2d53b8:
    // 0x2d53b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d53b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d53bc: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x2d53bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2d53c0: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2d53c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2d53c4: 0xc0b5280  jal         func_2D4A00
    ctx->pc = 0x2D53C4u;
    SET_GPR_U32(ctx, 31, 0x2D53CCu);
    ctx->pc = 0x2D53C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D53C4u;
            // 0x2d53c8: 0x27a700a8  addiu       $a3, $sp, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4A00u;
    if (runtime->hasFunction(0x2D4A00u)) {
        auto targetFn = runtime->lookupFunction(0x2D4A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D53CCu; }
        if (ctx->pc != 0x2D53CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSpriteEasyFont__FP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x2d4a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D53CCu; }
        if (ctx->pc != 0x2D53CCu) { return; }
    }
    ctx->pc = 0x2D53CCu;
label_2d53cc:
    // 0x2d53cc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2d53ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d53d0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2d53d0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d53d4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2d53d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d53d8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2d53d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d53dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d53dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d53e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d53e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d53e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d53e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d53e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d53e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d53ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d53ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d53f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d53f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d53f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D53F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D53F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D53F4u;
            // 0x2d53f8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D53FCu;
}
