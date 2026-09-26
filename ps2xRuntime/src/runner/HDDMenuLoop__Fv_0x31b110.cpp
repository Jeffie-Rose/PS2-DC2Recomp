#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: HDDMenuLoop__Fv
// Address: 0x31b110 - 0x31b574
void HDDMenuLoop__Fv_0x31b110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HDDMenuLoop__Fv_0x31b110");
#endif

    switch (ctx->pc) {
        case 0x31b14cu: goto label_31b14c;
        case 0x31b174u: goto label_31b174;
        case 0x31b188u: goto label_31b188;
        case 0x31b1a4u: goto label_31b1a4;
        case 0x31b1c0u: goto label_31b1c0;
        case 0x31b1e0u: goto label_31b1e0;
        case 0x31b1f4u: goto label_31b1f4;
        case 0x31b210u: goto label_31b210;
        case 0x31b22cu: goto label_31b22c;
        case 0x31b248u: goto label_31b248;
        case 0x31b274u: goto label_31b274;
        case 0x31b2a0u: goto label_31b2a0;
        case 0x31b2a8u: goto label_31b2a8;
        case 0x31b2dcu: goto label_31b2dc;
        case 0x31b30cu: goto label_31b30c;
        case 0x31b32cu: goto label_31b32c;
        case 0x31b34cu: goto label_31b34c;
        case 0x31b394u: goto label_31b394;
        case 0x31b3b0u: goto label_31b3b0;
        case 0x31b3c4u: goto label_31b3c4;
        case 0x31b3ccu: goto label_31b3cc;
        case 0x31b3d8u: goto label_31b3d8;
        case 0x31b3e0u: goto label_31b3e0;
        case 0x31b3e8u: goto label_31b3e8;
        case 0x31b420u: goto label_31b420;
        case 0x31b444u: goto label_31b444;
        case 0x31b458u: goto label_31b458;
        case 0x31b468u: goto label_31b468;
        case 0x31b47cu: goto label_31b47c;
        case 0x31b498u: goto label_31b498;
        case 0x31b4a8u: goto label_31b4a8;
        case 0x31b4b0u: goto label_31b4b0;
        case 0x31b4c4u: goto label_31b4c4;
        case 0x31b4d4u: goto label_31b4d4;
        case 0x31b4e8u: goto label_31b4e8;
        case 0x31b4f0u: goto label_31b4f0;
        case 0x31b4f8u: goto label_31b4f8;
        case 0x31b500u: goto label_31b500;
        case 0x31b50cu: goto label_31b50c;
        case 0x31b514u: goto label_31b514;
        case 0x31b528u: goto label_31b528;
        case 0x31b540u: goto label_31b540;
        case 0x31b548u: goto label_31b548;
        case 0x31b55cu: goto label_31b55c;
        default: break;
    }

    ctx->pc = 0x31b110u;

    // 0x31b110: 0x27bdfbc0  addiu       $sp, $sp, -0x440
    ctx->pc = 0x31b110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966208));
    // 0x31b114: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31b114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x31b118: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31b118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x31b11c: 0x27a60430  addiu       $a2, $sp, 0x430
    ctx->pc = 0x31b11cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
    // 0x31b120: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31b120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31b124: 0x27a30438  addiu       $v1, $sp, 0x438
    ctx->pc = 0x31b124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1080));
    // 0x31b128: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31b128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31b12c: 0x24a52be0  addiu       $a1, $a1, 0x2BE0
    ctx->pc = 0x31b12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11232));
    // 0x31b130: 0xdf828668  ld          $v0, -0x7998($gp)
    ctx->pc = 0x31b130u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936168)));
    // 0x31b134: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x31b134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31b138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b13c: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x31b13cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x31b140: 0xdf828670  ld          $v0, -0x7990($gp)
    ctx->pc = 0x31b140u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936176)));
    // 0x31b144: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x31B144u;
    SET_GPR_U32(ctx, 31, 0x31B14Cu);
    ctx->pc = 0x31B148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B144u;
            // 0x31b148: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B14Cu; }
        if (ctx->pc != 0x31B14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B14Cu; }
        if (ctx->pc != 0x31B14Cu) { return; }
    }
    ctx->pc = 0x31B14Cu;
label_31b14c:
    // 0x31b14c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x31b14cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x31b150: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31b150u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x31b154: 0x8f82a39c  lw          $v0, -0x5C64($gp)
    ctx->pc = 0x31b154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943644)));
    // 0x31b158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b15c: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x31b15cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31b160: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x31b160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31b164: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x31b164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x31b168: 0x8c460430  lw          $a2, 0x430($v0)
    ctx->pc = 0x31b168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1072)));
    // 0x31b16c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x31B16Cu;
    SET_GPR_U32(ctx, 31, 0x31B174u);
    ctx->pc = 0x31B170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B16Cu;
            // 0x31b170: 0x24a52bf0  addiu       $a1, $a1, 0x2BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B174u; }
        if (ctx->pc != 0x31B174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B174u; }
        if (ctx->pc != 0x31B174u) { return; }
    }
    ctx->pc = 0x31B174u;
label_31b174:
    // 0x31b174: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x31b174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x31b178: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31b178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x31b17c: 0x24a52c00  addiu       $a1, $a1, 0x2C00
    ctx->pc = 0x31b17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11264));
    // 0x31b180: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x31B180u;
    SET_GPR_U32(ctx, 31, 0x31B188u);
    ctx->pc = 0x31B184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B180u;
            // 0x31b184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B188u; }
        if (ctx->pc != 0x31B188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B188u; }
        if (ctx->pc != 0x31B188u) { return; }
    }
    ctx->pc = 0x31B188u;
label_31b188:
    // 0x31b188: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x31b188u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x31b18c: 0x8f82a3a0  lw          $v0, -0x5C60($gp)
    ctx->pc = 0x31b18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943648)));
    // 0x31b190: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B190u;
    {
        const bool branch_taken_0x31b190 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x31B194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B190u;
            // 0x31b194: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b190) {
            ctx->pc = 0x31B1A8u;
            goto label_31b1a8;
        }
    }
    ctx->pc = 0x31B198u;
    // 0x31b198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b19c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x31B19Cu;
    SET_GPR_U32(ctx, 31, 0x31B1A4u);
    ctx->pc = 0x31B1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B19Cu;
            // 0x31b1a0: 0x24a52c10  addiu       $a1, $a1, 0x2C10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B1A4u; }
        if (ctx->pc != 0x31B1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B1A4u; }
        if (ctx->pc != 0x31B1A4u) { return; }
    }
    ctx->pc = 0x31B1A4u;
label_31b1a4:
    // 0x31b1a4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x31b1a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_31b1a8:
    // 0x31b1a8: 0x8f82a3a0  lw          $v0, -0x5C60($gp)
    ctx->pc = 0x31b1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943648)));
    // 0x31b1ac: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B1ACu;
    {
        const bool branch_taken_0x31b1ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B1ACu;
            // 0x31b1b0: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b1ac) {
            ctx->pc = 0x31B1C4u;
            goto label_31b1c4;
        }
    }
    ctx->pc = 0x31B1B4u;
    // 0x31b1b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b1b8: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x31B1B8u;
    SET_GPR_U32(ctx, 31, 0x31B1C0u);
    ctx->pc = 0x31B1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B1B8u;
            // 0x31b1bc: 0x24a52c18  addiu       $a1, $a1, 0x2C18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B1C0u; }
        if (ctx->pc != 0x31B1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B1C0u; }
        if (ctx->pc != 0x31B1C0u) { return; }
    }
    ctx->pc = 0x31B1C0u;
label_31b1c0:
    // 0x31b1c0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x31b1c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_31b1c4:
    // 0x31b1c4: 0x8f86a3a0  lw          $a2, -0x5C60($gp)
    ctx->pc = 0x31b1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943648)));
    // 0x31b1c8: 0x4c10006  bgez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x31B1C8u;
    {
        const bool branch_taken_0x31b1c8 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x31b1c8) {
            ctx->pc = 0x31B1E4u;
            goto label_31b1e4;
        }
    }
    ctx->pc = 0x31B1D0u;
    // 0x31b1d0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31b1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x31b1d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b1d8: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x31B1D8u;
    SET_GPR_U32(ctx, 31, 0x31B1E0u);
    ctx->pc = 0x31B1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B1D8u;
            // 0x31b1dc: 0x24a52c20  addiu       $a1, $a1, 0x2C20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B1E0u; }
        if (ctx->pc != 0x31B1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B1E0u; }
        if (ctx->pc != 0x31B1E0u) { return; }
    }
    ctx->pc = 0x31B1E0u;
label_31b1e0:
    // 0x31b1e0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x31b1e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_31b1e4:
    // 0x31b1e4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31b1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x31b1e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b1ec: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x31B1ECu;
    SET_GPR_U32(ctx, 31, 0x31B1F4u);
    ctx->pc = 0x31B1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B1ECu;
            // 0x31b1f0: 0x24a52c28  addiu       $a1, $a1, 0x2C28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B1F4u; }
        if (ctx->pc != 0x31B1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B1F4u; }
        if (ctx->pc != 0x31B1F4u) { return; }
    }
    ctx->pc = 0x31B1F4u;
label_31b1f4:
    // 0x31b1f4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x31b1f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x31b1f8: 0x8f82a3a4  lw          $v0, -0x5C5C($gp)
    ctx->pc = 0x31b1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943652)));
    // 0x31b1fc: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B1FCu;
    {
        const bool branch_taken_0x31b1fc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x31B200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B1FCu;
            // 0x31b200: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b1fc) {
            ctx->pc = 0x31B214u;
            goto label_31b214;
        }
    }
    ctx->pc = 0x31B204u;
    // 0x31b204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b208: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x31B208u;
    SET_GPR_U32(ctx, 31, 0x31B210u);
    ctx->pc = 0x31B20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B208u;
            // 0x31b20c: 0x24a52c10  addiu       $a1, $a1, 0x2C10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B210u; }
        if (ctx->pc != 0x31B210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B210u; }
        if (ctx->pc != 0x31B210u) { return; }
    }
    ctx->pc = 0x31B210u;
label_31b210:
    // 0x31b210: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x31b210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_31b214:
    // 0x31b214: 0x8f82a3a4  lw          $v0, -0x5C5C($gp)
    ctx->pc = 0x31b214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943652)));
    // 0x31b218: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B218u;
    {
        const bool branch_taken_0x31b218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B218u;
            // 0x31b21c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b218) {
            ctx->pc = 0x31B230u;
            goto label_31b230;
        }
    }
    ctx->pc = 0x31B220u;
    // 0x31b220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b224: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x31B224u;
    SET_GPR_U32(ctx, 31, 0x31B22Cu);
    ctx->pc = 0x31B228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B224u;
            // 0x31b228: 0x24a52c18  addiu       $a1, $a1, 0x2C18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B22Cu; }
        if (ctx->pc != 0x31B22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B22Cu; }
        if (ctx->pc != 0x31B22Cu) { return; }
    }
    ctx->pc = 0x31B22Cu;
label_31b22c:
    // 0x31b22c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x31b22cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_31b230:
    // 0x31b230: 0x8f86a3a4  lw          $a2, -0x5C5C($gp)
    ctx->pc = 0x31b230u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943652)));
    // 0x31b234: 0x4c10005  bgez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B234u;
    {
        const bool branch_taken_0x31b234 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x31B238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B234u;
            // 0x31b238: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b234) {
            ctx->pc = 0x31B24Cu;
            goto label_31b24c;
        }
    }
    ctx->pc = 0x31B23Cu;
    // 0x31b23c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b240: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x31B240u;
    SET_GPR_U32(ctx, 31, 0x31B248u);
    ctx->pc = 0x31B244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B240u;
            // 0x31b244: 0x24a52c20  addiu       $a1, $a1, 0x2C20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B248u; }
        if (ctx->pc != 0x31B248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B248u; }
        if (ctx->pc != 0x31B248u) { return; }
    }
    ctx->pc = 0x31B248u;
label_31b248:
    // 0x31b248: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x31b248u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_31b24c:
    // 0x31b24c: 0x8f82a3a8  lw          $v0, -0x5C58($gp)
    ctx->pc = 0x31b24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943656)));
    // 0x31b250: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31b250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x31b254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b258: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x31b258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x31b25c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x31b25cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x31b260: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x31b260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31b264: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x31b264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x31b268: 0x8c460438  lw          $a2, 0x438($v0)
    ctx->pc = 0x31b268u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1080)));
    // 0x31b26c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x31B26Cu;
    SET_GPR_U32(ctx, 31, 0x31B274u);
    ctx->pc = 0x31B270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B26Cu;
            // 0x31b270: 0x24a52c38  addiu       $a1, $a1, 0x2C38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B274u; }
        if (ctx->pc != 0x31B274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B274u; }
        if (ctx->pc != 0x31B274u) { return; }
    }
    ctx->pc = 0x31B274u;
label_31b274:
    // 0x31b274: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x31b274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x31b278: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31b278u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x31b27c: 0x8f82a3a8  lw          $v0, -0x5C58($gp)
    ctx->pc = 0x31b27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943656)));
    // 0x31b280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b284: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x31b284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x31b288: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x31b288u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x31b28c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x31b28cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31b290: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x31b290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x31b294: 0x8c460438  lw          $a2, 0x438($v0)
    ctx->pc = 0x31b294u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1080)));
    // 0x31b298: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x31B298u;
    SET_GPR_U32(ctx, 31, 0x31B2A0u);
    ctx->pc = 0x31B29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B298u;
            // 0x31b29c: 0x24a52c48  addiu       $a1, $a1, 0x2C48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B2A0u; }
        if (ctx->pc != 0x31B2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B2A0u; }
        if (ctx->pc != 0x31B2A0u) { return; }
    }
    ctx->pc = 0x31B2A0u;
label_31b2a0:
    // 0x31b2a0: 0xc052194  jal         func_148650
    ctx->pc = 0x31B2A0u;
    SET_GPR_U32(ctx, 31, 0x31B2A8u);
    ctx->pc = 0x31B2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B2A0u;
            // 0x31b2a4: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148650u;
    if (runtime->hasFunction(0x148650u)) {
        auto targetFn = runtime->lookupFunction(0x148650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B2A8u; }
        if (ctx->pc != 0x31B2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainFileDev__Fv_0x148650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B2A8u; }
        if (ctx->pc != 0x31B2A8u) { return; }
    }
    ctx->pc = 0x31B2A8u;
label_31b2a8:
    // 0x31b2a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x31b2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31b2ac: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x31B2ACu;
    {
        const bool branch_taken_0x31b2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x31b2ac) {
            ctx->pc = 0x31B2E4u;
            goto label_31b2e4;
        }
    }
    ctx->pc = 0x31B2B4u;
    // 0x31b2b4: 0x8f82a3a8  lw          $v0, -0x5C58($gp)
    ctx->pc = 0x31b2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943656)));
    // 0x31b2b8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31b2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x31b2bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b2c0: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x31b2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x31b2c4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x31b2c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x31b2c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x31b2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31b2cc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x31b2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x31b2d0: 0x8c460438  lw          $a2, 0x438($v0)
    ctx->pc = 0x31b2d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1080)));
    // 0x31b2d4: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x31B2D4u;
    SET_GPR_U32(ctx, 31, 0x31B2DCu);
    ctx->pc = 0x31B2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B2D4u;
            // 0x31b2d8: 0x24a52c58  addiu       $a1, $a1, 0x2C58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B2DCu; }
        if (ctx->pc != 0x31B2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B2DCu; }
        if (ctx->pc != 0x31B2DCu) { return; }
    }
    ctx->pc = 0x31B2DCu;
label_31b2dc:
    // 0x31b2dc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x31B2DCu;
    {
        const bool branch_taken_0x31b2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B2DCu;
            // 0x31b2e0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b2dc) {
            ctx->pc = 0x31B310u;
            goto label_31b310;
        }
    }
    ctx->pc = 0x31B2E4u;
label_31b2e4:
    // 0x31b2e4: 0x8f82a3a8  lw          $v0, -0x5C58($gp)
    ctx->pc = 0x31b2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943656)));
    // 0x31b2e8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31b2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x31b2ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b2f0: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x31b2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x31b2f4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x31b2f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x31b2f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x31b2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31b2fc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x31b2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x31b300: 0x8c460438  lw          $a2, 0x438($v0)
    ctx->pc = 0x31b300u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1080)));
    // 0x31b304: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x31B304u;
    SET_GPR_U32(ctx, 31, 0x31B30Cu);
    ctx->pc = 0x31B308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B304u;
            // 0x31b308: 0x24a52c68  addiu       $a1, $a1, 0x2C68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B30Cu; }
        if (ctx->pc != 0x31B30Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B30Cu; }
        if (ctx->pc != 0x31B30Cu) { return; }
    }
    ctx->pc = 0x31B30Cu;
label_31b30c:
    // 0x31b30c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x31b30cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_31b310:
    // 0x31b310: 0x8f82a3ac  lw          $v0, -0x5C54($gp)
    ctx->pc = 0x31b310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943660)));
    // 0x31b314: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x31B314u;
    {
        const bool branch_taken_0x31b314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B314u;
            // 0x31b318: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b314) {
            ctx->pc = 0x31B48Cu;
            goto label_31b48c;
        }
    }
    ctx->pc = 0x31B31Cu;
    // 0x31b31c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x31b31cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x31b320: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x31b320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x31b324: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x31B324u;
    SET_GPR_U32(ctx, 31, 0x31B32Cu);
    ctx->pc = 0x31B328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B324u;
            // 0x31b328: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B32Cu; }
        if (ctx->pc != 0x31B32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B32Cu; }
        if (ctx->pc != 0x31B32Cu) { return; }
    }
    ctx->pc = 0x31B32Cu;
label_31b32c:
    // 0x31b32c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31B32Cu;
    {
        const bool branch_taken_0x31b32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B32Cu;
            // 0x31b330: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b32c) {
            ctx->pc = 0x31B340u;
            goto label_31b340;
        }
    }
    ctx->pc = 0x31B334u;
    // 0x31b334: 0x8f82a3a8  lw          $v0, -0x5C58($gp)
    ctx->pc = 0x31b334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943656)));
    // 0x31b338: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31b338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31b33c: 0xaf82a3a8  sw          $v0, -0x5C58($gp)
    ctx->pc = 0x31b33cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943656), GPR_U32(ctx, 2));
label_31b340:
    // 0x31b340: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x31b340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x31b344: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x31B344u;
    SET_GPR_U32(ctx, 31, 0x31B34Cu);
    ctx->pc = 0x31B348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B344u;
            // 0x31b348: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B34Cu; }
        if (ctx->pc != 0x31B34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B34Cu; }
        if (ctx->pc != 0x31B34Cu) { return; }
    }
    ctx->pc = 0x31B34Cu;
label_31b34c:
    // 0x31b34c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31B34Cu;
    {
        const bool branch_taken_0x31b34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b34c) {
            ctx->pc = 0x31B360u;
            goto label_31b360;
        }
    }
    ctx->pc = 0x31B354u;
    // 0x31b354: 0x8f82a3a8  lw          $v0, -0x5C58($gp)
    ctx->pc = 0x31b354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943656)));
    // 0x31b358: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31b358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31b35c: 0xaf82a3a8  sw          $v0, -0x5C58($gp)
    ctx->pc = 0x31b35cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943656), GPR_U32(ctx, 2));
label_31b360:
    // 0x31b360: 0x8f82a3a8  lw          $v0, -0x5C58($gp)
    ctx->pc = 0x31b360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943656)));
    // 0x31b364: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x31B364u;
    {
        const bool branch_taken_0x31b364 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x31b364) {
            ctx->pc = 0x31B370u;
            goto label_31b370;
        }
    }
    ctx->pc = 0x31B36Cu;
    // 0x31b36c: 0xaf80a3a8  sw          $zero, -0x5C58($gp)
    ctx->pc = 0x31b36cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943656), GPR_U32(ctx, 0));
label_31b370:
    // 0x31b370: 0x8f82a3a8  lw          $v0, -0x5C58($gp)
    ctx->pc = 0x31b370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943656)));
    // 0x31b374: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x31b374u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x31b378: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x31B378u;
    {
        const bool branch_taken_0x31b378 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B378u;
            // 0x31b37c: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b378) {
            ctx->pc = 0x31B388u;
            goto label_31b388;
        }
    }
    ctx->pc = 0x31B380u;
    // 0x31b380: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31b380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31b384: 0xaf82a3a8  sw          $v0, -0x5C58($gp)
    ctx->pc = 0x31b384u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943656), GPR_U32(ctx, 2));
label_31b388:
    // 0x31b388: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x31b388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x31b38c: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x31B38Cu;
    SET_GPR_U32(ctx, 31, 0x31B394u);
    ctx->pc = 0x31B390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B38Cu;
            // 0x31b390: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B394u; }
        if (ctx->pc != 0x31B394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B394u; }
        if (ctx->pc != 0x31B394u) { return; }
    }
    ctx->pc = 0x31B394u;
label_31b394:
    // 0x31b394: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x31B394u;
    {
        const bool branch_taken_0x31b394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b394) {
            ctx->pc = 0x31B46Cu;
            goto label_31b46c;
        }
    }
    ctx->pc = 0x31B39Cu;
    // 0x31b39c: 0x8f82a3a8  lw          $v0, -0x5C58($gp)
    ctx->pc = 0x31b39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943656)));
    // 0x31b3a0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x31B3A0u;
    {
        const bool branch_taken_0x31b3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b3a0) {
            ctx->pc = 0x31B3ECu;
            goto label_31b3ec;
        }
    }
    ctx->pc = 0x31B3A8u;
    // 0x31b3a8: 0xc052194  jal         func_148650
    ctx->pc = 0x31B3A8u;
    SET_GPR_U32(ctx, 31, 0x31B3B0u);
    ctx->pc = 0x148650u;
    if (runtime->hasFunction(0x148650u)) {
        auto targetFn = runtime->lookupFunction(0x148650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B3B0u; }
        if (ctx->pc != 0x31B3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainFileDev__Fv_0x148650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B3B0u; }
        if (ctx->pc != 0x31B3B0u) { return; }
    }
    ctx->pc = 0x31B3B0u;
label_31b3b0:
    // 0x31b3b0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x31b3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31b3b4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31B3B4u;
    {
        const bool branch_taken_0x31b3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x31b3b4) {
            ctx->pc = 0x31B3C4u;
            goto label_31b3c4;
        }
    }
    ctx->pc = 0x31B3BCu;
    // 0x31b3bc: 0xc0521b8  jal         func_1486E0
    ctx->pc = 0x31B3BCu;
    SET_GPR_U32(ctx, 31, 0x31B3C4u);
    ctx->pc = 0x1486E0u;
    if (runtime->hasFunction(0x1486E0u)) {
        auto targetFn = runtime->lookupFunction(0x1486E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B3C4u; }
        if (ctx->pc != 0x31B3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChangeDefaultFile__Fv_0x1486e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B3C4u; }
        if (ctx->pc != 0x31B3C4u) { return; }
    }
    ctx->pc = 0x31B3C4u;
label_31b3c4:
    // 0x31b3c4: 0xc0c6fd8  jal         func_31BF60
    ctx->pc = 0x31B3C4u;
    SET_GPR_U32(ctx, 31, 0x31B3CCu);
    ctx->pc = 0x31BF60u;
    if (runtime->hasFunction(0x31BF60u)) {
        auto targetFn = runtime->lookupFunction(0x31BF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B3CCu; }
        if (ctx->pc != 0x31B3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UninstallApp__Fv_0x31bf60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B3CCu; }
        if (ctx->pc != 0x31B3CCu) { return; }
    }
    ctx->pc = 0x31B3CCu;
label_31b3cc:
    // 0x31b3cc: 0xaf82a3b0  sw          $v0, -0x5C50($gp)
    ctx->pc = 0x31b3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943664), GPR_U32(ctx, 2));
    // 0x31b3d0: 0xc0c6e90  jal         func_31BA40
    ctx->pc = 0x31B3D0u;
    SET_GPR_U32(ctx, 31, 0x31B3D8u);
    ctx->pc = 0x31B3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B3D0u;
            // 0x31b3d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31BA40u;
    if (runtime->hasFunction(0x31BA40u)) {
        auto targetFn = runtime->lookupFunction(0x31BA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B3D8u; }
        if (ctx->pc != 0x31B3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        HddConectCheck__FPi_0x31ba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B3D8u; }
        if (ctx->pc != 0x31B3D8u) { return; }
    }
    ctx->pc = 0x31B3D8u;
label_31b3d8:
    // 0x31b3d8: 0xc0c6ef0  jal         func_31BBC0
    ctx->pc = 0x31B3D8u;
    SET_GPR_U32(ctx, 31, 0x31B3E0u);
    ctx->pc = 0x31B3DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B3D8u;
            // 0x31b3dc: 0xaf82a39c  sw          $v0, -0x5C64($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943644), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31BBC0u;
    if (runtime->hasFunction(0x31BBC0u)) {
        auto targetFn = runtime->lookupFunction(0x31BBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B3E0u; }
        if (ctx->pc != 0x31B3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckAppInstall__Fv_0x31bbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B3E0u; }
        if (ctx->pc != 0x31B3E0u) { return; }
    }
    ctx->pc = 0x31B3E0u;
label_31b3e0:
    // 0x31b3e0: 0xc0c6f98  jal         func_31BE60
    ctx->pc = 0x31B3E0u;
    SET_GPR_U32(ctx, 31, 0x31B3E8u);
    ctx->pc = 0x31B3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B3E0u;
            // 0x31b3e4: 0xaf82a3a0  sw          $v0, -0x5C60($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943648), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31BE60u;
    if (runtime->hasFunction(0x31BE60u)) {
        auto targetFn = runtime->lookupFunction(0x31BE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B3E8u; }
        if (ctx->pc != 0x31B3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckInstallSpace__Fv_0x31be60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B3E8u; }
        if (ctx->pc != 0x31B3E8u) { return; }
    }
    ctx->pc = 0x31B3E8u;
label_31b3e8:
    // 0x31b3e8: 0xaf82a3a4  sw          $v0, -0x5C5C($gp)
    ctx->pc = 0x31b3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943652), GPR_U32(ctx, 2));
label_31b3ec:
    // 0x31b3ec: 0x8f83a3a8  lw          $v1, -0x5C58($gp)
    ctx->pc = 0x31b3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943656)));
    // 0x31b3f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31b3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b3f4: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x31B3F4u;
    {
        const bool branch_taken_0x31b3f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31b3f4) {
            ctx->pc = 0x31B42Cu;
            goto label_31b42c;
        }
    }
    ctx->pc = 0x31B3FCu;
    // 0x31b3fc: 0x8f82a3a0  lw          $v0, -0x5C60($gp)
    ctx->pc = 0x31b3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943648)));
    // 0x31b400: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31B400u;
    {
        const bool branch_taken_0x31b400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b400) {
            ctx->pc = 0x31B42Cu;
            goto label_31b42c;
        }
    }
    ctx->pc = 0x31B408u;
    // 0x31b408: 0x8f82a3a4  lw          $v0, -0x5C5C($gp)
    ctx->pc = 0x31b408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943652)));
    // 0x31b40c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31B40Cu;
    {
        const bool branch_taken_0x31b40c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x31b40c) {
            ctx->pc = 0x31B42Cu;
            goto label_31b42c;
        }
    }
    ctx->pc = 0x31B414u;
    // 0x31b414: 0x8f84a3b4  lw          $a0, -0x5C4C($gp)
    ctx->pc = 0x31b414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943668)));
    // 0x31b418: 0xc0c6ffc  jal         func_31BFF0
    ctx->pc = 0x31B418u;
    SET_GPR_U32(ctx, 31, 0x31B420u);
    ctx->pc = 0x31B41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B418u;
            // 0x31b41c: 0x3c05000a  lui         $a1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31BFF0u;
    if (runtime->hasFunction(0x31BFF0u)) {
        auto targetFn = runtime->lookupFunction(0x31BFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B420u; }
        if (ctx->pc != 0x31B420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateInstallThread__FP1i_0x31bff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B420u; }
        if (ctx->pc != 0x31B420u) { return; }
    }
    ctx->pc = 0x31B420u;
label_31b420:
    // 0x31b420: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x31B420u;
    {
        const bool branch_taken_0x31b420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B420u;
            // 0x31b424: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b420) {
            ctx->pc = 0x31B42Cu;
            goto label_31b42c;
        }
    }
    ctx->pc = 0x31B428u;
    // 0x31b428: 0xaf82a3ac  sw          $v0, -0x5C54($gp)
    ctx->pc = 0x31b428u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943660), GPR_U32(ctx, 2));
label_31b42c:
    // 0x31b42c: 0x8f83a3a8  lw          $v1, -0x5C58($gp)
    ctx->pc = 0x31b42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943656)));
    // 0x31b430: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31b430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31b434: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x31B434u;
    {
        const bool branch_taken_0x31b434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31b434) {
            ctx->pc = 0x31B46Cu;
            goto label_31b46c;
        }
    }
    ctx->pc = 0x31B43Cu;
    // 0x31b43c: 0xc052194  jal         func_148650
    ctx->pc = 0x31B43Cu;
    SET_GPR_U32(ctx, 31, 0x31B444u);
    ctx->pc = 0x148650u;
    if (runtime->hasFunction(0x148650u)) {
        auto targetFn = runtime->lookupFunction(0x148650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B444u; }
        if (ctx->pc != 0x31B444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainFileDev__Fv_0x148650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B444u; }
        if (ctx->pc != 0x31B444u) { return; }
    }
    ctx->pc = 0x31B444u;
label_31b444:
    // 0x31b444: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x31b444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31b448: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B448u;
    {
        const bool branch_taken_0x31b448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x31b448) {
            ctx->pc = 0x31B460u;
            goto label_31b460;
        }
    }
    ctx->pc = 0x31B450u;
    // 0x31b450: 0xc052198  jal         func_148660
    ctx->pc = 0x31B450u;
    SET_GPR_U32(ctx, 31, 0x31B458u);
    ctx->pc = 0x148660u;
    if (runtime->hasFunction(0x148660u)) {
        auto targetFn = runtime->lookupFunction(0x148660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B458u; }
        if (ctx->pc != 0x31B458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChangeHddFile__Fv_0x148660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B458u; }
        if (ctx->pc != 0x31B458u) { return; }
    }
    ctx->pc = 0x31B458u;
label_31b458:
    // 0x31b458: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31B458u;
    {
        const bool branch_taken_0x31b458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B458u;
            // 0x31b45c: 0xaf82a3b0  sw          $v0, -0x5C50($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b458) {
            ctx->pc = 0x31B46Cu;
            goto label_31b46c;
        }
    }
    ctx->pc = 0x31B460u;
label_31b460:
    // 0x31b460: 0xc0521b8  jal         func_1486E0
    ctx->pc = 0x31B460u;
    SET_GPR_U32(ctx, 31, 0x31B468u);
    ctx->pc = 0x1486E0u;
    if (runtime->hasFunction(0x1486E0u)) {
        auto targetFn = runtime->lookupFunction(0x1486E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B468u; }
        if (ctx->pc != 0x31B468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChangeDefaultFile__Fv_0x1486e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B468u; }
        if (ctx->pc != 0x31B468u) { return; }
    }
    ctx->pc = 0x31B468u;
label_31b468:
    // 0x31b468: 0xaf82a3b0  sw          $v0, -0x5C50($gp)
    ctx->pc = 0x31b468u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943664), GPR_U32(ctx, 2));
label_31b46c:
    // 0x31b46c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x31b46cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x31b470: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x31b470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x31b474: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x31B474u;
    SET_GPR_U32(ctx, 31, 0x31B47Cu);
    ctx->pc = 0x31B478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B474u;
            // 0x31b478: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B47Cu; }
        if (ctx->pc != 0x31B47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B47Cu; }
        if (ctx->pc != 0x31B47Cu) { return; }
    }
    ctx->pc = 0x31B47Cu;
label_31b47c:
    // 0x31b47c: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x31B47Cu;
    {
        const bool branch_taken_0x31b47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B47Cu;
            // 0x31b480: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b47c) {
            ctx->pc = 0x31B52Cu;
            goto label_31b52c;
        }
    }
    ctx->pc = 0x31B484u;
    // 0x31b484: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x31B484u;
    {
        const bool branch_taken_0x31b484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B484u;
            // 0x31b488: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b484) {
            ctx->pc = 0x31B564u;
            goto label_31b564;
        }
    }
    ctx->pc = 0x31B48Cu;
label_31b48c:
    // 0x31b48c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x31b48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x31b490: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x31B490u;
    SET_GPR_U32(ctx, 31, 0x31B498u);
    ctx->pc = 0x31B494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B490u;
            // 0x31b494: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B498u; }
        if (ctx->pc != 0x31B498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B498u; }
        if (ctx->pc != 0x31B498u) { return; }
    }
    ctx->pc = 0x31B498u;
label_31b498:
    // 0x31b498: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31B498u;
    {
        const bool branch_taken_0x31b498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b498) {
            ctx->pc = 0x31B4A8u;
            goto label_31b4a8;
        }
    }
    ctx->pc = 0x31B4A0u;
    // 0x31b4a0: 0xc0c7098  jal         func_31C260
    ctx->pc = 0x31B4A0u;
    SET_GPR_U32(ctx, 31, 0x31B4A8u);
    ctx->pc = 0x31C260u;
    if (runtime->hasFunction(0x31C260u)) {
        auto targetFn = runtime->lookupFunction(0x31C260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B4A8u; }
        if (ctx->pc != 0x31B4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InstallCancel__Fv_0x31c260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B4A8u; }
        if (ctx->pc != 0x31B4A8u) { return; }
    }
    ctx->pc = 0x31B4A8u;
label_31b4a8:
    // 0x31b4a8: 0xc0c7040  jal         func_31C100
    ctx->pc = 0x31B4A8u;
    SET_GPR_U32(ctx, 31, 0x31B4B0u);
    ctx->pc = 0x31C100u;
    if (runtime->hasFunction(0x31C100u)) {
        auto targetFn = runtime->lookupFunction(0x31C100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B4B0u; }
        if (ctx->pc != 0x31B4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepInstallThread__Fv_0x31c100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B4B0u; }
        if (ctx->pc != 0x31B4B0u) { return; }
    }
    ctx->pc = 0x31B4B0u;
label_31b4b0:
    // 0x31b4b0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x31b4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x31b4b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31b4b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b4b8: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x31b4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
    // 0x31b4bc: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x31B4BCu;
    SET_GPR_U32(ctx, 31, 0x31B4C4u);
    ctx->pc = 0x31B4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B4BCu;
            // 0x31b4c0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B4C4u; }
        if (ctx->pc != 0x31B4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B4C4u; }
        if (ctx->pc != 0x31B4C4u) { return; }
    }
    ctx->pc = 0x31B4C4u;
label_31b4c4:
    // 0x31b4c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31B4C4u;
    {
        const bool branch_taken_0x31b4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b4c4) {
            ctx->pc = 0x31B4D4u;
            goto label_31b4d4;
        }
    }
    ctx->pc = 0x31B4CCu;
    // 0x31b4cc: 0xc0c707c  jal         func_31C1F0
    ctx->pc = 0x31B4CCu;
    SET_GPR_U32(ctx, 31, 0x31B4D4u);
    ctx->pc = 0x31C1F0u;
    if (runtime->hasFunction(0x31C1F0u)) {
        auto targetFn = runtime->lookupFunction(0x31C1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B4D4u; }
        if (ctx->pc != 0x31B4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InstallPause__Fv_0x31c1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B4D4u; }
        if (ctx->pc != 0x31B4D4u) { return; }
    }
    ctx->pc = 0x31B4D4u;
label_31b4d4:
    // 0x31b4d4: 0x1e20000b  bgtz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x31B4D4u;
    {
        const bool branch_taken_0x31b4d4 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x31b4d4) {
            ctx->pc = 0x31B504u;
            goto label_31b504;
        }
    }
    ctx->pc = 0x31B4DCu;
    // 0x31b4dc: 0xaf91a3b0  sw          $s1, -0x5C50($gp)
    ctx->pc = 0x31b4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943664), GPR_U32(ctx, 17));
    // 0x31b4e0: 0xc0c7054  jal         func_31C150
    ctx->pc = 0x31B4E0u;
    SET_GPR_U32(ctx, 31, 0x31B4E8u);
    ctx->pc = 0x31B4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B4E0u;
            // 0x31b4e4: 0xaf80a3ac  sw          $zero, -0x5C54($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943660), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31C150u;
    if (runtime->hasFunction(0x31C150u)) {
        auto targetFn = runtime->lookupFunction(0x31C150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B4E8u; }
        if (ctx->pc != 0x31B4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteInstallThread__Fv_0x31c150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B4E8u; }
        if (ctx->pc != 0x31B4E8u) { return; }
    }
    ctx->pc = 0x31B4E8u;
label_31b4e8:
    // 0x31b4e8: 0xc0c6e90  jal         func_31BA40
    ctx->pc = 0x31B4E8u;
    SET_GPR_U32(ctx, 31, 0x31B4F0u);
    ctx->pc = 0x31B4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B4E8u;
            // 0x31b4ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31BA40u;
    if (runtime->hasFunction(0x31BA40u)) {
        auto targetFn = runtime->lookupFunction(0x31BA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B4F0u; }
        if (ctx->pc != 0x31B4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        HddConectCheck__FPi_0x31ba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B4F0u; }
        if (ctx->pc != 0x31B4F0u) { return; }
    }
    ctx->pc = 0x31B4F0u;
label_31b4f0:
    // 0x31b4f0: 0xc0c6ef0  jal         func_31BBC0
    ctx->pc = 0x31B4F0u;
    SET_GPR_U32(ctx, 31, 0x31B4F8u);
    ctx->pc = 0x31B4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B4F0u;
            // 0x31b4f4: 0xaf82a39c  sw          $v0, -0x5C64($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943644), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31BBC0u;
    if (runtime->hasFunction(0x31BBC0u)) {
        auto targetFn = runtime->lookupFunction(0x31BBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B4F8u; }
        if (ctx->pc != 0x31B4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckAppInstall__Fv_0x31bbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B4F8u; }
        if (ctx->pc != 0x31B4F8u) { return; }
    }
    ctx->pc = 0x31B4F8u;
label_31b4f8:
    // 0x31b4f8: 0xc0c6f98  jal         func_31BE60
    ctx->pc = 0x31B4F8u;
    SET_GPR_U32(ctx, 31, 0x31B500u);
    ctx->pc = 0x31B4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B4F8u;
            // 0x31b4fc: 0xaf82a3a0  sw          $v0, -0x5C60($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943648), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31BE60u;
    if (runtime->hasFunction(0x31BE60u)) {
        auto targetFn = runtime->lookupFunction(0x31BE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B500u; }
        if (ctx->pc != 0x31B500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckInstallSpace__Fv_0x31be60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B500u; }
        if (ctx->pc != 0x31B500u) { return; }
    }
    ctx->pc = 0x31B500u;
label_31b500:
    // 0x31b500: 0xaf82a3a4  sw          $v0, -0x5C5C($gp)
    ctx->pc = 0x31b500u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943652), GPR_U32(ctx, 2));
label_31b504:
    // 0x31b504: 0xc0c7048  jal         func_31C120
    ctx->pc = 0x31B504u;
    SET_GPR_U32(ctx, 31, 0x31B50Cu);
    ctx->pc = 0x31C120u;
    if (runtime->hasFunction(0x31C120u)) {
        auto targetFn = runtime->lookupFunction(0x31C120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B50Cu; }
        if (ctx->pc != 0x31B50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInstallProgress__Fv_0x31c120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B50Cu; }
        if (ctx->pc != 0x31B50Cu) { return; }
    }
    ctx->pc = 0x31B50Cu;
label_31b50c:
    // 0x31b50c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x31B50Cu;
    SET_GPR_U32(ctx, 31, 0x31B514u);
    ctx->pc = 0x31B510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B50Cu;
            // 0x31b510: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B514u; }
        if (ctx->pc != 0x31B514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B514u; }
        if (ctx->pc != 0x31B514u) { return; }
    }
    ctx->pc = 0x31B514u;
label_31b514:
    // 0x31b514: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31b514u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x31b518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b51c: 0x24a52c78  addiu       $a1, $a1, 0x2C78
    ctx->pc = 0x31b51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11384));
    // 0x31b520: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x31B520u;
    SET_GPR_U32(ctx, 31, 0x31B528u);
    ctx->pc = 0x31B524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B520u;
            // 0x31b524: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B528u; }
        if (ctx->pc != 0x31B528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B528u; }
        if (ctx->pc != 0x31B528u) { return; }
    }
    ctx->pc = 0x31B528u;
label_31b528:
    // 0x31b528: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x31b528u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_31b52c:
    // 0x31b52c: 0x8f86a3b0  lw          $a2, -0x5C50($gp)
    ctx->pc = 0x31b52cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943664)));
    // 0x31b530: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31b530u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x31b534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b538: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x31B538u;
    SET_GPR_U32(ctx, 31, 0x31B540u);
    ctx->pc = 0x31B53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B538u;
            // 0x31b53c: 0x24a52c80  addiu       $a1, $a1, 0x2C80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B540u; }
        if (ctx->pc != 0x31B540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B540u; }
        if (ctx->pc != 0x31B540u) { return; }
    }
    ctx->pc = 0x31B540u;
label_31b540:
    // 0x31b540: 0xc064210  jal         func_190840
    ctx->pc = 0x31B540u;
    SET_GPR_U32(ctx, 31, 0x31B548u);
    ctx->pc = 0x190840u;
    if (runtime->hasFunction(0x190840u)) {
        auto targetFn = runtime->lookupFunction(0x190840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B548u; }
        if (ctx->pc != 0x31B548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDebugFont__Fv_0x190840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B548u; }
        if (ctx->pc != 0x31B548u) { return; }
    }
    ctx->pc = 0x31B548u;
label_31b548:
    // 0x31b548: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x31b548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x31b54c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31b54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b550: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x31b550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31b554: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x31B554u;
    SET_GPR_U32(ctx, 31, 0x31B55Cu);
    ctx->pc = 0x31B558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31B554u;
            // 0x31b558: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B55Cu; }
        if (ctx->pc != 0x31B55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31B55Cu; }
        if (ctx->pc != 0x31B55Cu) { return; }
    }
    ctx->pc = 0x31B55Cu;
label_31b55c:
    // 0x31b55c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31b55cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b560: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31b560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_31b564:
    // 0x31b564: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31b564u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31b568: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31b568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31b56c: 0x3e00008  jr          $ra
    ctx->pc = 0x31B56Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31B56Cu;
            // 0x31b570: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31B574u;
}
