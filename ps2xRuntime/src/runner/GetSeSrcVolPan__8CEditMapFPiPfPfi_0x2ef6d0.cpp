#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSeSrcVolPan__8CEditMapFPiPfPfi
// Address: 0x2ef6d0 - 0x2ef9a4
void GetSeSrcVolPan__8CEditMapFPiPfPfi_0x2ef6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSeSrcVolPan__8CEditMapFPiPfPfi_0x2ef6d0");
#endif

    switch (ctx->pc) {
        case 0x2ef724u: goto label_2ef724;
        case 0x2ef730u: goto label_2ef730;
        case 0x2ef748u: goto label_2ef748;
        case 0x2ef77cu: goto label_2ef77c;
        case 0x2ef784u: goto label_2ef784;
        case 0x2ef7a4u: goto label_2ef7a4;
        case 0x2ef7d4u: goto label_2ef7d4;
        case 0x2ef840u: goto label_2ef840;
        case 0x2ef854u: goto label_2ef854;
        case 0x2ef860u: goto label_2ef860;
        case 0x2ef870u: goto label_2ef870;
        case 0x2ef888u: goto label_2ef888;
        case 0x2ef8a8u: goto label_2ef8a8;
        default: break;
    }

    ctx->pc = 0x2ef6d0u;

    // 0x2ef6d0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2ef6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x2ef6d4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2ef6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2ef6d8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2ef6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2ef6dc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2ef6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2ef6e0: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2ef6e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef6e4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2ef6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2ef6e8: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2ef6e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef6ec: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2ef6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2ef6f0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2ef6f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef6f4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2ef6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2ef6f8: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2ef6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2ef6fc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2ef6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2ef700: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2ef700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2ef704: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ef704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2ef708: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2ef708u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef70c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ef70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ef710: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2ef710u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2ef714: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2ef714u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ef718: 0xafa700c0  sw          $a3, 0xC0($sp)
    ctx->pc = 0x2ef718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 7));
    // 0x2ef71c: 0xc0575cc  jal         func_15D730
    ctx->pc = 0x2EF71Cu;
    SET_GPR_U32(ctx, 31, 0x2EF724u);
    ctx->pc = 0x2EF720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF71Cu;
            // 0x2ef720: 0xafa00120  sw          $zero, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D730u;
    if (runtime->hasFunction(0x15D730u)) {
        auto targetFn = runtime->lookupFunction(0x15D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF724u; }
        if (ctx->pc != 0x2EF724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateFuncCheck__4CMapFP15CFuncPointCheck_0x15d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF724u; }
        if (ctx->pc != 0x2EF724u) { return; }
    }
    ctx->pc = 0x2EF724u;
label_2ef724:
    // 0x2ef724: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2ef724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2ef728: 0xc04c050  jal         func_130140
    ctx->pc = 0x2EF728u;
    SET_GPR_U32(ctx, 31, 0x2EF730u);
    ctx->pc = 0x2EF72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF728u;
            // 0x2ef72c: 0xafa000b0  sw          $zero, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF730u; }
        if (ctx->pc != 0x2EF730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF730u; }
        if (ctx->pc != 0x2EF730u) { return; }
    }
    ctx->pc = 0x2EF730u;
label_2ef730:
    // 0x2ef730: 0x8fa700c0  lw          $a3, 0xC0($sp)
    ctx->pc = 0x2ef730u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ef734: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2ef734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef738: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2ef738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef73c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2ef73cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef740: 0xc057fd8  jal         func_15FF60
    ctx->pc = 0x2EF740u;
    SET_GPR_U32(ctx, 31, 0x2EF748u);
    ctx->pc = 0x2EF744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF740u;
            // 0x2ef744: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15FF60u;
    if (runtime->hasFunction(0x15FF60u)) {
        auto targetFn = runtime->lookupFunction(0x15FF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF748u; }
        if (ctx->pc != 0x2EF748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSeSrcVolPan__4CMapFPiPfPfi_0x15ff60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF748u; }
        if (ctx->pc != 0x2EF748u) { return; }
    }
    ctx->pc = 0x2EF748u;
label_2ef748:
    // 0x2ef748: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2ef748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ef74c: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x2ef74cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2ef750: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ef750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef754: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ef754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ef758: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x2ef758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x2ef75c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2ef75cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ef760: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2ef760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ef764: 0x2e3b821  addu        $s7, $s7, $v1
    ctx->pc = 0x2ef764u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x2ef768: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ef768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ef76c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x2ef76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x2ef770: 0x8ed10d44  lw          $s1, 0xD44($s6)
    ctx->pc = 0x2ef770u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3396)));
    // 0x2ef774: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2EF774u;
    {
        const bool branch_taken_0x2ef774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF774u;
            // 0x2ef778: 0x3c3f021  addu        $fp, $fp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef774) {
            ctx->pc = 0x2EF808u;
            goto label_2ef808;
        }
    }
    ctx->pc = 0x2EF77Cu;
label_2ef77c:
    // 0x2ef77c: 0xc0bb988  jal         func_2EE620
    ctx->pc = 0x2EF77Cu;
    SET_GPR_U32(ctx, 31, 0x2EF784u);
    ctx->pc = 0x2EF780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF77Cu;
            // 0x2ef780: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE620u;
    if (runtime->hasFunction(0x2EE620u)) {
        auto targetFn = runtime->lookupFunction(0x2EE620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF784u; }
        if (ctx->pc != 0x2EF784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckNormalPlaceParts__8CEditMapFP10CEditParts_0x2ee620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF784u; }
        if (ctx->pc != 0x2EF784u) { return; }
    }
    ctx->pc = 0x2EF784u;
label_2ef784:
    // 0x2ef784: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2EF784u;
    {
        const bool branch_taken_0x2ef784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef784) {
            ctx->pc = 0x2EF7FCu;
            goto label_2ef7fc;
        }
    }
    ctx->pc = 0x2EF78Cu;
    // 0x2ef78c: 0x8e2202b0  lw          $v0, 0x2B0($s1)
    ctx->pc = 0x2ef78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
    // 0x2ef790: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2ef790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2ef794: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2EF794u;
    {
        const bool branch_taken_0x2ef794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF794u;
            // 0x2ef798: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef794) {
            ctx->pc = 0x2EF7FCu;
            goto label_2ef7fc;
        }
    }
    ctx->pc = 0x2EF79Cu;
    // 0x2ef79c: 0xc059cc0  jal         func_167300
    ctx->pc = 0x2EF79Cu;
    SET_GPR_U32(ctx, 31, 0x2EF7A4u);
    ctx->pc = 0x2EF7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF79Cu;
            // 0x2ef7a0: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167300u;
    if (runtime->hasFunction(0x167300u)) {
        auto targetFn = runtime->lookupFunction(0x167300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF7A4u; }
        if (ctx->pc != 0x2EF7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__9CMapPartsFPA4_f_0x167300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF7A4u; }
        if (ctx->pc != 0x2EF7A4u) { return; }
    }
    ctx->pc = 0x2EF7A4u;
label_2ef7a4:
    // 0x2ef7a4: 0x1e400003  bgtz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF7A4u;
    {
        const bool branch_taken_0x2ef7a4 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x2ef7a4) {
            ctx->pc = 0x2EF7B4u;
            goto label_2ef7b4;
        }
    }
    ctx->pc = 0x2EF7ACu;
    // 0x2ef7ac: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x2EF7ACu;
    {
        const bool branch_taken_0x2ef7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF7ACu;
            // 0x2ef7b0: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef7ac) {
            ctx->pc = 0x2EF96Cu;
            goto label_2ef96c;
        }
    }
    ctx->pc = 0x2EF7B4u;
label_2ef7b4:
    // 0x2ef7b4: 0x8fa900c0  lw          $t1, 0xC0($sp)
    ctx->pc = 0x2ef7b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ef7b8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2ef7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2ef7bc: 0x262502b0  addiu       $a1, $s1, 0x2B0
    ctx->pc = 0x2ef7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 688));
    // 0x2ef7c0: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x2ef7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2ef7c4: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x2ef7c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef7c8: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x2ef7c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef7cc: 0xc0a7ae4  jal         func_29EB90
    ctx->pc = 0x2EF7CCu;
    SET_GPR_U32(ctx, 31, 0x2EF7D4u);
    ctx->pc = 0x2EF7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF7CCu;
            // 0x2ef7d0: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EB90u;
    if (runtime->hasFunction(0x29EB90u)) {
        auto targetFn = runtime->lookupFunction(0x29EB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF7D4u; }
        if (ctx->pc != 0x2EF7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSeSrcVolPan__FPA4_fP14CFuncPointMngrP15CFuncPointCheckPiPfPfi_0x29eb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF7D4u; }
        if (ctx->pc != 0x2EF7D4u) { return; }
    }
    ctx->pc = 0x2EF7D4u;
label_2ef7d4:
    // 0x2ef7d4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2ef7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ef7d8: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x2ef7d8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2ef7dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ef7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ef7e0: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x2ef7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x2ef7e4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2ef7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ef7e8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2ef7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ef7ec: 0x2e3b821  addu        $s7, $s7, $v1
    ctx->pc = 0x2ef7ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x2ef7f0: 0x3c3f021  addu        $fp, $fp, $v1
    ctx->pc = 0x2ef7f0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x2ef7f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ef7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ef7f8: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x2ef7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_2ef7fc:
    // 0x2ef7fc: 0x0  nop
    ctx->pc = 0x2ef7fcu;
    // NOP
    // 0x2ef800: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ef800u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ef804: 0x26310330  addiu       $s1, $s1, 0x330
    ctx->pc = 0x2ef804u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 816));
label_2ef808:
    // 0x2ef808: 0x8ec20d40  lw          $v0, 0xD40($s6)
    ctx->pc = 0x2ef808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3392)));
    // 0x2ef80c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2ef80cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ef810: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x2EF810u;
    {
        const bool branch_taken_0x2ef810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF810u;
            // 0x2ef814: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef810) {
            ctx->pc = 0x2EF77Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef77c;
        }
    }
    ctx->pc = 0x2EF818u;
    // 0x2ef818: 0x1e400003  bgtz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF818u;
    {
        const bool branch_taken_0x2ef818 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x2ef818) {
            ctx->pc = 0x2EF828u;
            goto label_2ef828;
        }
    }
    ctx->pc = 0x2EF820u;
    // 0x2ef820: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x2EF820u;
    {
        const bool branch_taken_0x2ef820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF820u;
            // 0x2ef824: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef820) {
            ctx->pc = 0x2EF96Cu;
            goto label_2ef96c;
        }
    }
    ctx->pc = 0x2EF828u;
label_2ef828:
    // 0x2ef828: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2ef828u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2ef82c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ef82cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef830: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2ef830u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef834: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2ef834u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef838: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2EF838u;
    {
        const bool branch_taken_0x2ef838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF838u;
            // 0x2ef83c: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef838) {
            ctx->pc = 0x2EF920u;
            goto label_2ef920;
        }
    }
    ctx->pc = 0x2EF840u;
label_2ef840:
    // 0x2ef840: 0x8c530f54  lw          $s3, 0xF54($v0)
    ctx->pc = 0x2ef840u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3924)));
    // 0x2ef844: 0x12600034  beqz        $s3, . + 4 + (0x34 << 2)
    ctx->pc = 0x2EF844u;
    {
        const bool branch_taken_0x2ef844 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF844u;
            // 0x2ef848: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef844) {
            ctx->pc = 0x2EF918u;
            goto label_2ef918;
        }
    }
    ctx->pc = 0x2EF84Cu;
    // 0x2ef84c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2EF84Cu;
    {
        const bool branch_taken_0x2ef84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef84c) {
            ctx->pc = 0x2EF904u;
            goto label_2ef904;
        }
    }
    ctx->pc = 0x2EF854u;
label_2ef854:
    // 0x2ef854: 0x0  nop
    ctx->pc = 0x2ef854u;
    // NOP
    // 0x2ef858: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2EF858u;
    {
        const bool branch_taken_0x2ef858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF858u;
            // 0x2ef85c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef858) {
            ctx->pc = 0x2EF8ECu;
            goto label_2ef8ec;
        }
    }
    ctx->pc = 0x2EF860u;
label_2ef860:
    // 0x2ef860: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ef860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef864: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ef864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef868: 0xc0a6010  jal         func_298040
    ctx->pc = 0x2EF868u;
    SET_GPR_U32(ctx, 31, 0x2EF870u);
    ctx->pc = 0x2EF86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF868u;
            // 0x2ef86c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298040u;
    if (runtime->hasFunction(0x298040u)) {
        auto targetFn = runtime->lookupFunction(0x298040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF870u; }
        if (ctx->pc != 0x2EF870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        River__9CEditGridFii_0x298040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF870u; }
        if (ctx->pc != 0x2EF870u) { return; }
    }
    ctx->pc = 0x2EF870u;
label_2ef870:
    // 0x2ef870: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2EF870u;
    {
        const bool branch_taken_0x2ef870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF870u;
            // 0x2ef874: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef870) {
            ctx->pc = 0x2EF8E4u;
            goto label_2ef8e4;
        }
    }
    ctx->pc = 0x2EF878u;
    // 0x2ef878: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x2ef878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2ef87c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ef87cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef880: 0xc0a5e94  jal         func_297A50
    ctx->pc = 0x2EF880u;
    SET_GPR_U32(ctx, 31, 0x2EF888u);
    ctx->pc = 0x2EF884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF880u;
            // 0x2ef884: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297A50u;
    if (runtime->hasFunction(0x297A50u)) {
        auto targetFn = runtime->lookupFunction(0x297A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF888u; }
        if (ctx->pc != 0x2EF888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWPos__9CEditGridFPfii_0x297a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF888u; }
        if (ctx->pc != 0x2EF888u) { return; }
    }
    ctx->pc = 0x2EF888u;
label_2ef888:
    // 0x2ef888: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2ef888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2ef88c: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x2ef88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x2ef890: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2ef890u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ef894: 0x27a40128  addiu       $a0, $sp, 0x128
    ctx->pc = 0x2ef894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x2ef898: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ef898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ef89c: 0x27a5012c  addiu       $a1, $sp, 0x12C
    ctx->pc = 0x2ef89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x2ef8a0: 0xc063bbc  jal         func_18EEF0
    ctx->pc = 0x2EF8A0u;
    SET_GPR_U32(ctx, 31, 0x2EF8A8u);
    ctx->pc = 0x2EF8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF8A0u;
            // 0x2ef8a4: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18EEF0u;
    if (runtime->hasFunction(0x18EEF0u)) {
        auto targetFn = runtime->lookupFunction(0x18EEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF8A8u; }
        if (ctx->pc != 0x2EF8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndGetVolPan__FPfPfPfff_0x18eef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF8A8u; }
        if (ctx->pc != 0x2EF8A8u) { return; }
    }
    ctx->pc = 0x2EF8A8u;
label_2ef8a8:
    // 0x2ef8a8: 0xc7a10128  lwc1        $f1, 0x128($sp)
    ctx->pc = 0x2ef8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ef8ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ef8acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef8b0: 0x0  nop
    ctx->pc = 0x2ef8b0u;
    // NOP
    // 0x2ef8b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2ef8b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ef8b8: 0x0  nop
    ctx->pc = 0x2ef8b8u;
    // NOP
    // 0x2ef8bc: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x2EF8BCu;
    {
        const bool branch_taken_0x2ef8bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ef8bc) {
            ctx->pc = 0x2EF8E4u;
            goto label_2ef8e4;
        }
    }
    ctx->pc = 0x2EF8C4u;
    // 0x2ef8c4: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2ef8c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ef8c8: 0x0  nop
    ctx->pc = 0x2ef8c8u;
    // NOP
    // 0x2ef8cc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2EF8CCu;
    {
        const bool branch_taken_0x2ef8cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EF8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF8CCu;
            // 0x2ef8d0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef8cc) {
            ctx->pc = 0x2EF8D8u;
            goto label_2ef8d8;
        }
    }
    ctx->pc = 0x2EF8D4u;
    // 0x2ef8d4: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x2ef8d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_2ef8d8:
    // 0x2ef8d8: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x2ef8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef8dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ef8dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ef8e0: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x2ef8e0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_2ef8e4:
    // 0x2ef8e4: 0x0  nop
    ctx->pc = 0x2ef8e4u;
    // NOP
    // 0x2ef8e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ef8e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2ef8ec:
    // 0x2ef8ec: 0x0  nop
    ctx->pc = 0x2ef8ecu;
    // NOP
    // 0x2ef8f0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2ef8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2ef8f4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2ef8f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ef8f8: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2EF8F8u;
    {
        const bool branch_taken_0x2ef8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef8f8) {
            ctx->pc = 0x2EF860u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef860;
        }
    }
    ctx->pc = 0x2EF900u;
    // 0x2ef900: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ef900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2ef904:
    // 0x2ef904: 0x0  nop
    ctx->pc = 0x2ef904u;
    // NOP
    // 0x2ef908: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2ef908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ef90c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2ef90cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ef910: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x2EF910u;
    {
        const bool branch_taken_0x2ef910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef910) {
            ctx->pc = 0x2EF854u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef854;
        }
    }
    ctx->pc = 0x2EF918u;
label_2ef918:
    // 0x2ef918: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x2ef918u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x2ef91c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2ef91cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2ef920:
    // 0x2ef920: 0x8ec20f50  lw          $v0, 0xF50($s6)
    ctx->pc = 0x2ef920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3920)));
    // 0x2ef924: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x2ef924u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ef928: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x2EF928u;
    {
        const bool branch_taken_0x2ef928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF928u;
            // 0x2ef92c: 0x2d41021  addu        $v0, $s6, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef928) {
            ctx->pc = 0x2EF840u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ef840;
        }
    }
    ctx->pc = 0x2EF930u;
    // 0x2ef930: 0x1a40000c  blez        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x2EF930u;
    {
        const bool branch_taken_0x2ef930 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x2ef930) {
            ctx->pc = 0x2EF964u;
            goto label_2ef964;
        }
    }
    ctx->pc = 0x2EF938u;
    // 0x2ef938: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x2ef938u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef93c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2ef93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ef940: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ef940u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ef944: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ef944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ef948: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2ef948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x2ef94c: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x2ef94cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x2ef950: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2ef950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ef954: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x2ef954u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x2ef958: 0xe7d40000  swc1        $f20, 0x0($fp)
    ctx->pc = 0x2ef958u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x2ef95c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2ef95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ef960: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2ef960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2ef964:
    // 0x2ef964: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2ef964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ef968: 0x0  nop
    ctx->pc = 0x2ef968u;
    // NOP
label_2ef96c:
    // 0x2ef96c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2ef96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ef970: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2ef970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ef974: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2ef974u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ef978: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2ef978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ef97c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2ef97cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ef980: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2ef980u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ef984: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2ef984u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ef988: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2ef988u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ef98c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2ef98cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ef990: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2ef990u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ef994: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ef994u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ef998: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ef998u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ef99c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF99Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EF99Cu;
            // 0x2ef9a0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EF9A4u;
}
