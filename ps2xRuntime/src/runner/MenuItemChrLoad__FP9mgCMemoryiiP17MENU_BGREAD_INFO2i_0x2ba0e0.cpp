#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuItemChrLoad__FP9mgCMemoryiiP17MENU_BGREAD_INFO2i
// Address: 0x2ba0e0 - 0x2ba1fc
void MenuItemChrLoad__FP9mgCMemoryiiP17MENU_BGREAD_INFO2i_0x2ba0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuItemChrLoad__FP9mgCMemoryiiP17MENU_BGREAD_INFO2i_0x2ba0e0");
#endif

    switch (ctx->pc) {
        case 0x2ba114u: goto label_2ba114;
        case 0x2ba11cu: goto label_2ba11c;
        case 0x2ba124u: goto label_2ba124;
        case 0x2ba13cu: goto label_2ba13c;
        case 0x2ba148u: goto label_2ba148;
        case 0x2ba164u: goto label_2ba164;
        case 0x2ba170u: goto label_2ba170;
        case 0x2ba17cu: goto label_2ba17c;
        case 0x2ba188u: goto label_2ba188;
        case 0x2ba1a4u: goto label_2ba1a4;
        case 0x2ba1d4u: goto label_2ba1d4;
        case 0x2ba1dcu: goto label_2ba1dc;
        default: break;
    }

    ctx->pc = 0x2ba0e0u;

    // 0x2ba0e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ba0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ba0e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ba0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2ba0e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ba0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ba0ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ba0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ba0f0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2ba0f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba0f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ba0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ba0f8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2ba0f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba0fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ba0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ba100: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ba100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba104: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BA104u;
    {
        const bool branch_taken_0x2ba104 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA104u;
            // 0x2ba108: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba104) {
            ctx->pc = 0x2BA11Cu;
            goto label_2ba11c;
        }
    }
    ctx->pc = 0x2BA10Cu;
    // 0x2ba10c: 0xc0523b8  jal         func_148EE0
    ctx->pc = 0x2BA10Cu;
    SET_GPR_U32(ctx, 31, 0x2BA114u);
    ctx->pc = 0x148EE0u;
    if (runtime->hasFunction(0x148EE0u)) {
        auto targetFn = runtime->lookupFunction(0x148EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA114u; }
        if (ctx->pc != 0x2BA114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BreakReadBG__Fv_0x148ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA114u; }
        if (ctx->pc != 0x2BA114u) { return; }
    }
    ctx->pc = 0x2BA114u;
label_2ba114:
    // 0x2ba114: 0xc052330  jal         func_148CC0
    ctx->pc = 0x2BA114u;
    SET_GPR_U32(ctx, 31, 0x2BA11Cu);
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA11Cu; }
        if (ctx->pc != 0x2BA11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA11Cu; }
        if (ctx->pc != 0x2BA11Cu) { return; }
    }
    ctx->pc = 0x2BA11Cu;
label_2ba11c:
    // 0x2ba11c: 0xc06517c  jal         func_1945F0
    ctx->pc = 0x2BA11Cu;
    SET_GPR_U32(ctx, 31, 0x2BA124u);
    ctx->pc = 0x1945F0u;
    if (runtime->hasFunction(0x1945F0u)) {
        auto targetFn = runtime->lookupFunction(0x1945F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA124u; }
        if (ctx->pc != 0x2BA124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGameDataPt__Fv_0x1945f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA124u; }
        if (ctx->pc != 0x2BA124u) { return; }
    }
    ctx->pc = 0x2BA124u;
label_2ba124:
    // 0x2ba124: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ba124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ba128: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ba128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba12c: 0xa2020070  sb          $v0, 0x70($s0)
    ctx->pc = 0x2ba12cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 112), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ba130: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ba130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba134: 0xc06571c  jal         func_195C70
    ctx->pc = 0x2BA134u;
    SET_GPR_U32(ctx, 31, 0x2BA13Cu);
    ctx->pc = 0x2BA138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA134u;
            // 0x2ba138: 0xae000074  sw          $zero, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C70u;
    if (runtime->hasFunction(0x195C70u)) {
        auto targetFn = runtime->lookupFunction(0x195C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA13Cu; }
        if (ctx->pc != 0x2BA13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemFileName__Fii_0x195c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA13Cu; }
        if (ctx->pc != 0x2BA13Cu) { return; }
    }
    ctx->pc = 0x2BA13Cu;
label_2ba13c:
    // 0x2ba13c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ba13cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba140: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2BA140u;
    SET_GPR_U32(ctx, 31, 0x2BA148u);
    ctx->pc = 0x2BA144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA140u;
            // 0x2ba144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA148u; }
        if (ctx->pc != 0x2BA148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA148u; }
        if (ctx->pc != 0x2BA148u) { return; }
    }
    ctx->pc = 0x2BA148u;
label_2ba148:
    // 0x2ba148: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ba148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ba14c: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BA14Cu;
    {
        const bool branch_taken_0x2ba14c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BA150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA14Cu;
            // 0x2ba150: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba14c) {
            ctx->pc = 0x2BA168u;
            goto label_2ba168;
        }
    }
    ctx->pc = 0x2BA154u;
    // 0x2ba154: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ba154u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2ba158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ba158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba15c: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2BA15Cu;
    SET_GPR_U32(ctx, 31, 0x2BA164u);
    ctx->pc = 0x2BA160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA15Cu;
            // 0x2ba160: 0x24a5f490  addiu       $a1, $a1, -0xB70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA164u; }
        if (ctx->pc != 0x2BA164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA164u; }
        if (ctx->pc != 0x2BA164u) { return; }
    }
    ctx->pc = 0x2BA164u;
label_2ba164:
    // 0x2ba164: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ba164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ba168:
    // 0x2ba168: 0xc065750  jal         func_195D40
    ctx->pc = 0x2BA168u;
    SET_GPR_U32(ctx, 31, 0x2BA170u);
    ctx->pc = 0x2BA16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA168u;
            // 0x2ba16c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195D40u;
    if (runtime->hasFunction(0x195D40u)) {
        auto targetFn = runtime->lookupFunction(0x195D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA170u; }
        if (ctx->pc != 0x2BA170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemFilePath__Fii_0x195d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA170u; }
        if (ctx->pc != 0x2BA170u) { return; }
    }
    ctx->pc = 0x2BA170u;
label_2ba170:
    // 0x2ba170: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ba170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba174: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2BA174u;
    SET_GPR_U32(ctx, 31, 0x2BA17Cu);
    ctx->pc = 0x2BA178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA174u;
            // 0x2ba178: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA17Cu; }
        if (ctx->pc != 0x2BA17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA17Cu; }
        if (ctx->pc != 0x2BA17Cu) { return; }
    }
    ctx->pc = 0x2BA17Cu;
label_2ba17c:
    // 0x2ba17c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ba17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba180: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2BA180u;
    SET_GPR_U32(ctx, 31, 0x2BA188u);
    ctx->pc = 0x2BA184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA180u;
            // 0x2ba184: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA188u; }
        if (ctx->pc != 0x2BA188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA188u; }
        if (ctx->pc != 0x2BA188u) { return; }
    }
    ctx->pc = 0x2BA188u;
label_2ba188:
    // 0x2ba188: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x2ba188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2ba18c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2ba18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2ba190: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2ba190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2ba194: 0x27a6005c  addiu       $a2, $sp, 0x5C
    ctx->pc = 0x2ba194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2ba198: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2ba198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2ba19c: 0xc05224c  jal         func_148930
    ctx->pc = 0x2BA19Cu;
    SET_GPR_U32(ctx, 31, 0x2BA1A4u);
    ctx->pc = 0x2BA1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA19Cu;
            // 0x2ba1a0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA1A4u; }
        if (ctx->pc != 0x2BA1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA1A4u; }
        if (ctx->pc != 0x2BA1A4u) { return; }
    }
    ctx->pc = 0x2BA1A4u;
label_2ba1a4:
    // 0x2ba1a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BA1A4u;
    {
        const bool branch_taken_0x2ba1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ba1a4) {
            ctx->pc = 0x2BA1B4u;
            goto label_2ba1b4;
        }
    }
    ctx->pc = 0x2BA1ACu;
    // 0x2ba1ac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2BA1ACu;
    {
        const bool branch_taken_0x2ba1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA1ACu;
            // 0x2ba1b0: 0xa2000070  sb          $zero, 0x70($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 112), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba1ac) {
            ctx->pc = 0x2BA1DCu;
            goto label_2ba1dc;
        }
    }
    ctx->pc = 0x2BA1B4u;
label_2ba1b4:
    // 0x2ba1b4: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x2ba1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2ba1b8: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2ba1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2ba1bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BA1BCu;
    {
        const bool branch_taken_0x2ba1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA1BCu;
            // 0x2ba1c0: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba1bc) {
            ctx->pc = 0x2BA1CCu;
            goto label_2ba1cc;
        }
    }
    ctx->pc = 0x2BA1C4u;
    // 0x2ba1c4: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2ba1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2ba1c8: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2ba1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2ba1cc:
    // 0x2ba1cc: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2BA1CCu;
    SET_GPR_U32(ctx, 31, 0x2BA1D4u);
    ctx->pc = 0x2BA1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA1CCu;
            // 0x2ba1d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA1D4u; }
        if (ctx->pc != 0x2BA1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA1D4u; }
        if (ctx->pc != 0x2BA1D4u) { return; }
    }
    ctx->pc = 0x2BA1D4u;
label_2ba1d4:
    // 0x2ba1d4: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2BA1D4u;
    SET_GPR_U32(ctx, 31, 0x2BA1DCu);
    ctx->pc = 0x2BA1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA1D4u;
            // 0x2ba1d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA1DCu; }
        if (ctx->pc != 0x2BA1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA1DCu; }
        if (ctx->pc != 0x2BA1DCu) { return; }
    }
    ctx->pc = 0x2BA1DCu;
label_2ba1dc:
    // 0x2ba1dc: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x2ba1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2ba1e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ba1e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ba1e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ba1e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ba1e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ba1e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ba1ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ba1ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ba1f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ba1f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ba1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA1F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA1F4u;
            // 0x2ba1f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BA1FCu;
}
