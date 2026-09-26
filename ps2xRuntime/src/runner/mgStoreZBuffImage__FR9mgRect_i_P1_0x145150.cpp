#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgStoreZBuffImage__FR9mgRect<i>P1
// Address: 0x145150 - 0x145398
void mgStoreZBuffImage__FR9mgRect_i_P1_0x145150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgStoreZBuffImage__FR9mgRect_i_P1_0x145150");
#endif

    switch (ctx->pc) {
        case 0x145270u: goto label_145270;
        case 0x145278u: goto label_145278;
        case 0x145284u: goto label_145284;
        case 0x145290u: goto label_145290;
        case 0x1452b4u: goto label_1452b4;
        case 0x145348u: goto label_145348;
        default: break;
    }

    ctx->pc = 0x145150u;

    // 0x145150: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x145150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x145154: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x145154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x145158: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x145158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14515c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14515cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x145160: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x145160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x145164: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x145164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145168: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x145168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14516c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x14516cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x145170: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x145170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x145174: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x145174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x145178: 0xc32023  subu        $a0, $a2, $v1
    ctx->pc = 0x145178u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x14517c: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x14517cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x145180: 0x24910001  addiu       $s1, $a0, 0x1
    ctx->pc = 0x145180u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x145184: 0x24b20001  addiu       $s2, $a1, 0x1
    ctx->pc = 0x145184u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x145188: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x145188u;
    {
        const bool branch_taken_0x145188 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x14518Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145188u;
            // 0x14518c: 0x32240007  andi        $a0, $s1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x145188) {
            ctx->pc = 0x14519Cu;
            goto label_14519c;
        }
    }
    ctx->pc = 0x145190u;
    // 0x145190: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x145190u;
    {
        const bool branch_taken_0x145190 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x145190) {
            ctx->pc = 0x14519Cu;
            goto label_14519c;
        }
    }
    ctx->pc = 0x145198u;
    // 0x145198: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x145198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
label_14519c:
    // 0x14519c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14519Cu;
    {
        const bool branch_taken_0x14519c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1451A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14519Cu;
            // 0x1451a0: 0x32440007  andi        $a0, $s2, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14519c) {
            ctx->pc = 0x1451BCu;
            goto label_1451bc;
        }
    }
    ctx->pc = 0x1451A4u;
    // 0x1451a4: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1451A4u;
    {
        const bool branch_taken_0x1451a4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1451A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1451A4u;
            // 0x1451a8: 0x1120c3  sra         $a0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1451a4) {
            ctx->pc = 0x1451B4u;
            goto label_1451b4;
        }
    }
    ctx->pc = 0x1451ACu;
    // 0x1451ac: 0x26240007  addiu       $a0, $s1, 0x7
    ctx->pc = 0x1451acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 7));
    // 0x1451b0: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x1451b0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_1451b4:
    // 0x1451b4: 0x488c0  sll         $s1, $a0, 3
    ctx->pc = 0x1451b4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1451b8: 0x32440007  andi        $a0, $s2, 0x7
    ctx->pc = 0x1451b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)7);
label_1451bc:
    // 0x1451bc: 0x6410004  bgez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1451BCu;
    {
        const bool branch_taken_0x1451bc = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1451bc) {
            ctx->pc = 0x1451D0u;
            goto label_1451d0;
        }
    }
    ctx->pc = 0x1451C4u;
    // 0x1451c4: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1451C4u;
    {
        const bool branch_taken_0x1451c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1451c4) {
            ctx->pc = 0x1451D0u;
            goto label_1451d0;
        }
    }
    ctx->pc = 0x1451CCu;
    // 0x1451cc: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x1451ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
label_1451d0:
    // 0x1451d0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1451D0u;
    {
        const bool branch_taken_0x1451d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1451D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1451D0u;
            // 0x1451d4: 0x1220c3  sra         $a0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1451d0) {
            ctx->pc = 0x1451ECu;
            goto label_1451ec;
        }
    }
    ctx->pc = 0x1451D8u;
    // 0x1451d8: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1451D8u;
    {
        const bool branch_taken_0x1451d8 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1451d8) {
            ctx->pc = 0x1451E8u;
            goto label_1451e8;
        }
    }
    ctx->pc = 0x1451E0u;
    // 0x1451e0: 0x26440007  addiu       $a0, $s2, 0x7
    ctx->pc = 0x1451e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 7));
    // 0x1451e4: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x1451e4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_1451e8:
    // 0x1451e8: 0x490c0  sll         $s2, $a0, 3
    ctx->pc = 0x1451e8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1451ec:
    // 0x1451ec: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1451ECu;
    {
        const bool branch_taken_0x1451ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1451ec) {
            ctx->pc = 0x1451FCu;
            goto label_1451fc;
        }
    }
    ctx->pc = 0x1451F4u;
    // 0x1451f4: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1451F4u;
    {
        const bool branch_taken_0x1451f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1451f4) {
            ctx->pc = 0x145204u;
            goto label_145204;
        }
    }
    ctx->pc = 0x1451FCu;
label_1451fc:
    // 0x1451fc: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1451FCu;
    {
        const bool branch_taken_0x1451fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1451FCu;
            // 0x145200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1451fc) {
            ctx->pc = 0x145380u;
            goto label_145380;
        }
    }
    ctx->pc = 0x145204u;
label_145204:
    // 0x145204: 0x978487e0  lhu         $a0, -0x7820($gp)
    ctx->pc = 0x145204u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936544)));
    // 0x145208: 0x308401ff  andi        $a0, $a0, 0x1FF
    ctx->pc = 0x145208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)511);
    // 0x14520c: 0x42ac0  sll         $a1, $a0, 11
    ctx->pc = 0x14520cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
    // 0x145210: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x145210u;
    {
        const bool branch_taken_0x145210 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x145214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145210u;
            // 0x145214: 0x52183  sra         $a0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145210) {
            ctx->pc = 0x145220u;
            goto label_145220;
        }
    }
    ctx->pc = 0x145218u;
    // 0x145218: 0x24a4003f  addiu       $a0, $a1, 0x3F
    ctx->pc = 0x145218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x14521c: 0x42183  sra         $a0, $a0, 6
    ctx->pc = 0x14521cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 6));
label_145220:
    // 0x145220: 0x8f868780  lw          $a2, -0x7880($gp)
    ctx->pc = 0x145220u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x145224: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x145224u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x145228: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x145228u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x14522c: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x14522Cu;
    {
        const bool branch_taken_0x14522c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x145230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14522Cu;
            // 0x145230: 0x62183  sra         $a0, $a2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14522c) {
            ctx->pc = 0x14523Cu;
            goto label_14523c;
        }
    }
    ctx->pc = 0x145234u;
    // 0x145234: 0x24c4003f  addiu       $a0, $a2, 0x3F
    ctx->pc = 0x145234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x145238: 0x42183  sra         $a0, $a0, 6
    ctx->pc = 0x145238u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 6));
label_14523c:
    // 0x14523c: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x14523cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
    // 0x145240: 0x3443c  dsll32      $t0, $v1, 16
    ctx->pc = 0x145240u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 16));
    // 0x145244: 0x24c3c  dsll32      $t1, $v0, 16
    ctx->pc = 0x145244u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 16));
    // 0x145248: 0x11543c  dsll32      $t2, $s1, 16
    ctx->pc = 0x145248u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 17) << (32 + 16));
    // 0x14524c: 0x125c3c  dsll32      $t3, $s2, 16
    ctx->pc = 0x14524cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 18) << (32 + 16));
    // 0x145250: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x145250u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x145254: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x145254u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x145258: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x145258u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x14525c: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x14525cu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x145260: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x145260u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x145264: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x145264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x145268: 0xc040e26  jal         func_103898
    ctx->pc = 0x145268u;
    SET_GPR_U32(ctx, 31, 0x145270u);
    ctx->pc = 0x14526Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145268u;
            // 0x14526c: 0x24070030  addiu       $a3, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103898u;
    if (runtime->hasFunction(0x103898u)) {
        auto targetFn = runtime->lookupFunction(0x103898u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145270u; }
        if (ctx->pc != 0x145270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSetDefStoreImage_0x103898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145270u; }
        if (ctx->pc != 0x145270u) { return; }
    }
    ctx->pc = 0x145270u;
label_145270:
    // 0x145270: 0xc0440d8  jal         func_110360
    ctx->pc = 0x145270u;
    SET_GPR_U32(ctx, 31, 0x145278u);
    ctx->pc = 0x145274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145270u;
            // 0x145274: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110360u;
    if (runtime->hasFunction(0x110360u)) {
        auto targetFn = runtime->lookupFunction(0x110360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145278u; }
        if (ctx->pc != 0x145278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x110360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145278u; }
        if (ctx->pc != 0x145278u) { return; }
    }
    ctx->pc = 0x145278u;
label_145278:
    // 0x145278: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x145278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14527c: 0xc040ed6  jal         func_103B58
    ctx->pc = 0x14527Cu;
    SET_GPR_U32(ctx, 31, 0x145284u);
    ctx->pc = 0x145280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14527Cu;
            // 0x145280: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103B58u;
    if (runtime->hasFunction(0x103B58u)) {
        auto targetFn = runtime->lookupFunction(0x103B58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145284u; }
        if (ctx->pc != 0x145284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsExecStoreImage_0x103b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145284u; }
        if (ctx->pc != 0x145284u) { return; }
    }
    ctx->pc = 0x145284u;
label_145284:
    // 0x145284: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x145284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145288: 0xc040ce6  jal         func_103398
    ctx->pc = 0x145288u;
    SET_GPR_U32(ctx, 31, 0x145290u);
    ctx->pc = 0x14528Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145288u;
            // 0x14528c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103398u;
    if (runtime->hasFunction(0x103398u)) {
        auto targetFn = runtime->lookupFunction(0x103398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145290u; }
        if (ctx->pc != 0x145290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x103398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145290u; }
        if (ctx->pc != 0x145290u) { return; }
    }
    ctx->pc = 0x145290u;
label_145290:
    // 0x145290: 0x2321818  mult        $v1, $s1, $s2
    ctx->pc = 0x145290u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x145294: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x145294u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x145298: 0x10200034  beqz        $at, . + 4 + (0x34 << 2)
    ctx->pc = 0x145298u;
    {
        const bool branch_taken_0x145298 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14529Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145298u;
            // 0x14529c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145298) {
            ctx->pc = 0x14536Cu;
            goto label_14536c;
        }
    }
    ctx->pc = 0x1452A0u;
    // 0x1452a0: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x1452a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1452a4: 0x1420002e  bnez        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x1452A4u;
    {
        const bool branch_taken_0x1452a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1452A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1452A4u;
            // 0x1452a8: 0x2466fff8  addiu       $a2, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1452a4) {
            ctx->pc = 0x145360u;
            goto label_145360;
        }
    }
    ctx->pc = 0x1452ACu;
    // 0x1452ac: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1452acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1452b0: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x1452b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1452b4:
    // 0x1452b4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1452b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1452b8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1452b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1452bc: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x1452bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1452c0: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x1452c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x1452c4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1452c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x1452c8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1452c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1452cc: 0x4223c  dsll32      $a0, $a0, 8
    ctx->pc = 0x1452ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 8));
    // 0x1452d0: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x1452d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x1452d4: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x1452d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x1452d8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1452d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1452dc: 0x4223c  dsll32      $a0, $a0, 8
    ctx->pc = 0x1452dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 8));
    // 0x1452e0: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x1452e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x1452e4: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x1452e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x1452e8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1452e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1452ec: 0x4223c  dsll32      $a0, $a0, 8
    ctx->pc = 0x1452ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 8));
    // 0x1452f0: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x1452f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x1452f4: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x1452f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x1452f8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1452f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1452fc: 0x4223c  dsll32      $a0, $a0, 8
    ctx->pc = 0x1452fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 8));
    // 0x145300: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x145300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x145304: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x145304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x145308: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x145308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x14530c: 0x4223c  dsll32      $a0, $a0, 8
    ctx->pc = 0x14530cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 8));
    // 0x145310: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x145310u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x145314: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x145314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x145318: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x145318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x14531c: 0x4223c  dsll32      $a0, $a0, 8
    ctx->pc = 0x14531cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 8));
    // 0x145320: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x145320u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x145324: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x145324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x145328: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x145328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x14532c: 0x4223c  dsll32      $a0, $a0, 8
    ctx->pc = 0x14532cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 8));
    // 0x145330: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x145330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x145334: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x145334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
    // 0x145338: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x145338u;
    {
        const bool branch_taken_0x145338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14533Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145338u;
            // 0x14533c: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145338) {
            ctx->pc = 0x1452B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1452b4;
        }
    }
    ctx->pc = 0x145340u;
    // 0x145340: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x145340u;
    {
        const bool branch_taken_0x145340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145340) {
            ctx->pc = 0x145360u;
            goto label_145360;
        }
    }
    ctx->pc = 0x145348u;
label_145348:
    // 0x145348: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x145348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14534c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14534cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x145350: 0x2123c  dsll32      $v0, $v0, 8
    ctx->pc = 0x145350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 8));
    // 0x145354: 0x2123e  dsrl32      $v0, $v0, 8
    ctx->pc = 0x145354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 8));
    // 0x145358: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x145358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14535c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x14535cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_145360:
    // 0x145360: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x145360u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x145364: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x145364u;
    {
        const bool branch_taken_0x145364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145364) {
            ctx->pc = 0x145348u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_145348;
        }
    }
    ctx->pc = 0x14536Cu;
label_14536c:
    // 0x14536c: 0x0  nop
    ctx->pc = 0x14536cu;
    // NOP
    // 0x145370: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x145370u;
    {
        const bool branch_taken_0x145370 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x145374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145370u;
            // 0x145374: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145370) {
            ctx->pc = 0x145380u;
            goto label_145380;
        }
    }
    ctx->pc = 0x145378u;
    // 0x145378: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x145378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x14537c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x14537cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_145380:
    // 0x145380: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x145380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x145384: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x145384u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145388: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x145388u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14538c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14538cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145390: 0x3e00008  jr          $ra
    ctx->pc = 0x145390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145390u;
            // 0x145394: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x145398u;
}
