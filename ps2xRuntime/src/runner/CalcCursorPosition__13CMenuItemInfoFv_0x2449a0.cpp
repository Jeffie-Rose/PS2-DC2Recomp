#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcCursorPosition__13CMenuItemInfoFv
// Address: 0x2449a0 - 0x245038
void CalcCursorPosition__13CMenuItemInfoFv_0x2449a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcCursorPosition__13CMenuItemInfoFv_0x2449a0");
#endif

    switch (ctx->pc) {
        case 0x2449dcu: goto label_2449dc;
        case 0x244ad8u: goto label_244ad8;
        case 0x244af8u: goto label_244af8;
        case 0x244b54u: goto label_244b54;
        case 0x244b70u: goto label_244b70;
        case 0x244bc8u: goto label_244bc8;
        case 0x244be4u: goto label_244be4;
        case 0x244c24u: goto label_244c24;
        case 0x244c38u: goto label_244c38;
        case 0x244c8cu: goto label_244c8c;
        case 0x244ca0u: goto label_244ca0;
        case 0x244ce4u: goto label_244ce4;
        case 0x244d10u: goto label_244d10;
        case 0x244d40u: goto label_244d40;
        case 0x244e30u: goto label_244e30;
        case 0x244f30u: goto label_244f30;
        case 0x244f58u: goto label_244f58;
        case 0x244f6cu: goto label_244f6c;
        case 0x244f7cu: goto label_244f7c;
        case 0x244fd4u: goto label_244fd4;
        case 0x244fe0u: goto label_244fe0;
        case 0x244ff4u: goto label_244ff4;
        case 0x245010u: goto label_245010;
        default: break;
    }

    ctx->pc = 0x2449a0u;

    // 0x2449a0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2449a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2449a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2449a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2449a8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2449a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2449ac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2449acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2449b0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2449b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2449b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2449b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2449b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2449b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2449bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2449bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2449c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2449c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2449c4: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x2449c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2449c8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2449C8u;
    {
        const bool branch_taken_0x2449c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2449CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2449C8u;
            // 0x2449cc: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2449c8) {
            ctx->pc = 0x2449E4u;
            goto label_2449e4;
        }
    }
    ctx->pc = 0x2449D0u;
    // 0x2449d0: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2449d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2449d4: 0xc08f02c  jal         func_23C0B0
    ctx->pc = 0x2449D4u;
    SET_GPR_U32(ctx, 31, 0x2449DCu);
    ctx->pc = 0x2449D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2449D4u;
            // 0x2449d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C0B0u;
    if (runtime->hasFunction(0x23C0B0u)) {
        auto targetFn = runtime->lookupFunction(0x23C0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2449DCu; }
        if (ctx->pc != 0x2449DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWakuType__12CMenuKeyFuncFi_0x23c0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2449DCu; }
        if (ctx->pc != 0x2449DCu) { return; }
    }
    ctx->pc = 0x2449DCu;
label_2449dc:
    // 0x2449dc: 0x1000018e  b           . + 4 + (0x18E << 2)
    ctx->pc = 0x2449DCu;
    {
        const bool branch_taken_0x2449dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2449E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2449DCu;
            // 0x2449e0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2449dc) {
            ctx->pc = 0x245018u;
            goto label_245018;
        }
    }
    ctx->pc = 0x2449E4u;
label_2449e4:
    // 0x2449e4: 0xdf8396d0  ld          $v1, -0x6930($gp)
    ctx->pc = 0x2449e4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294940368)));
    // 0x2449e8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2449e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2449ec: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2449ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2449f0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2449f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2449f4: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x2449f4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x2449f8: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x2449f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2449fc: 0x86910014  lh          $s1, 0x14($s4)
    ctx->pc = 0x2449fcu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x244a00: 0x8c700070  lw          $s0, 0x70($v1)
    ctx->pc = 0x244a00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x244a04: 0x1222002e  beq         $s1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x244A04u;
    {
        const bool branch_taken_0x244a04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x244A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244A04u;
            // 0x244a08: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244a04) {
            ctx->pc = 0x244AC0u;
            goto label_244ac0;
        }
    }
    ctx->pc = 0x244A0Cu;
    // 0x244a0c: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x244A0Cu;
    {
        const bool branch_taken_0x244a0c = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x244a0c) {
            ctx->pc = 0x244A18u;
            goto label_244a18;
        }
    }
    ctx->pc = 0x244A14u;
    // 0x244a14: 0xa6800014  sh          $zero, 0x14($s4)
    ctx->pc = 0x244a14u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 0));
label_244a18:
    // 0x244a18: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x244a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x244a1c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x244a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x244a20: 0x2442df40  addiu       $v0, $v0, -0x20C0
    ctx->pc = 0x244a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958912));
    // 0x244a24: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x244a24u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x244a28: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x244a28u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x244a2c: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x244a2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x244a30: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x244a30u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x244a34: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x244a34u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x244a38: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x244a38u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
    // 0x244a3c: 0x86820114  lh          $v0, 0x114($s4)
    ctx->pc = 0x244a3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 276)));
    // 0x244a40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x244a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x244a44: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x244a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x244a48: 0x8c520180  lw          $s2, 0x180($v0)
    ctx->pc = 0x244a48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
    // 0x244a4c: 0xafb20090  sw          $s2, 0x90($sp)
    ctx->pc = 0x244a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 18));
    // 0x244a50: 0xafb20094  sw          $s2, 0x94($sp)
    ctx->pc = 0x244a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 18));
    // 0x244a54: 0x8e82019c  lw          $v0, 0x19C($s4)
    ctx->pc = 0x244a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 412)));
    // 0x244a58: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x244a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    // 0x244a5c: 0xafb2009c  sw          $s2, 0x9C($sp)
    ctx->pc = 0x244a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 18));
    // 0x244a60: 0x8e820188  lw          $v0, 0x188($s4)
    ctx->pc = 0x244a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 392)));
    // 0x244a64: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x244a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x244a68: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x244a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x244a6c: 0x8e82018c  lw          $v0, 0x18C($s4)
    ctx->pc = 0x244a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 396)));
    // 0x244a70: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x244a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x244a74: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x244a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x244a78: 0x8e820190  lw          $v0, 0x190($s4)
    ctx->pc = 0x244a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 400)));
    // 0x244a7c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x244a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x244a80: 0x8e820194  lw          $v0, 0x194($s4)
    ctx->pc = 0x244a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 404)));
    // 0x244a84: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x244a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x244a88: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x244a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x244a8c: 0xafb200bc  sw          $s2, 0xBC($sp)
    ctx->pc = 0x244a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 18));
    // 0x244a90: 0x86830014  lh          $v1, 0x14($s4)
    ctx->pc = 0x244a90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x244a94: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x244A94u;
    {
        const bool branch_taken_0x244a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x244A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244A94u;
            // 0x244a98: 0x27b300e4  addiu       $s3, $sp, 0xE4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244a94) {
            ctx->pc = 0x244AC4u;
            goto label_244ac4;
        }
    }
    ctx->pc = 0x244A9Cu;
    // 0x244a9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x244a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244aa0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x244AA0u;
    {
        const bool branch_taken_0x244aa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x244AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244AA0u;
            // 0x244aa4: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244aa0) {
            ctx->pc = 0x244AB4u;
            goto label_244ab4;
        }
    }
    ctx->pc = 0x244AA8u;
    // 0x244aa8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x244AA8u;
    {
        const bool branch_taken_0x244aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x244aa8) {
            ctx->pc = 0x244AC0u;
            goto label_244ac0;
        }
    }
    ctx->pc = 0x244AB0u;
    // 0x244ab0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x244ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_244ab4:
    // 0x244ab4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x244ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x244ab8: 0x8c520090  lw          $s2, 0x90($v0)
    ctx->pc = 0x244ab8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x244abc: 0x0  nop
    ctx->pc = 0x244abcu;
    // NOP
label_244ac0:
    // 0x244ac0: 0x27b300e4  addiu       $s3, $sp, 0xE4
    ctx->pc = 0x244ac0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_244ac4:
    // 0x244ac4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x244ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244ac8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x244ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244acc: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x244accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x244ad0: 0xc08974c  jal         func_225D30
    ctx->pc = 0x244AD0u;
    SET_GPR_U32(ctx, 31, 0x244AD8u);
    ctx->pc = 0x244AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244AD0u;
            // 0x244ad4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244AD8u; }
        if (ctx->pc != 0x244AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244AD8u; }
        if (ctx->pc != 0x244AD8u) { return; }
    }
    ctx->pc = 0x244AD8u;
label_244ad8:
    // 0x244ad8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x244ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x244adc: 0x16220011  bne         $s1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x244ADCu;
    {
        const bool branch_taken_0x244adc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x244adc) {
            ctx->pc = 0x244B24u;
            goto label_244b24;
        }
    }
    ctx->pc = 0x244AE4u;
    // 0x244ae4: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x244ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x244ae8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x244ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x244aec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x244aecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244af0: 0xc08b0e0  jal         func_22C380
    ctx->pc = 0x244AF0u;
    SET_GPR_U32(ctx, 31, 0x244AF8u);
    ctx->pc = 0x244AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244AF0u;
            // 0x244af4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C380u;
    if (runtime->hasFunction(0x22C380u)) {
        auto targetFn = runtime->lookupFunction(0x22C380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244AF8u; }
        if (ctx->pc != 0x244AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPosMenuItemOnItemBrd__18CMenuPosDataManageFPiii_0x22c380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244AF8u; }
        if (ctx->pc != 0x244AF8u) { return; }
    }
    ctx->pc = 0x244AF8u;
label_244af8:
    // 0x244af8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x244af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x244afc: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x244afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x244b00: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x244b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x244b04: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x244b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x244b08: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x244b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x244b0c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x244b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x244b10: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x244b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x244b14: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x244b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x244b18: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x244b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x244b1c: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x244B1Cu;
    {
        const bool branch_taken_0x244b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244B1Cu;
            // 0x244b20: 0xafa200ec  sw          $v0, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244b1c) {
            ctx->pc = 0x244D20u;
            goto label_244d20;
        }
    }
    ctx->pc = 0x244B24u;
label_244b24:
    // 0x244b24: 0xdf8396d8  ld          $v1, -0x6928($gp)
    ctx->pc = 0x244b24u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294940376)));
    // 0x244b28: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x244b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x244b2c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x244b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x244b30: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x244B30u;
    {
        const bool branch_taken_0x244b30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x244B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244B30u;
            // 0x244b34: 0xfc830000  sd          $v1, 0x0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244b30) {
            ctx->pc = 0x244B44u;
            goto label_244b44;
        }
    }
    ctx->pc = 0x244B38u;
    // 0x244b38: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x244b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x244b3c: 0x16220016  bne         $s1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x244B3Cu;
    {
        const bool branch_taken_0x244b3c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x244B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244B3Cu;
            // 0x244b40: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244b3c) {
            ctx->pc = 0x244B98u;
            goto label_244b98;
        }
    }
    ctx->pc = 0x244B44u;
label_244b44:
    // 0x244b44: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x244b44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x244b48: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x244b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x244b4c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x244B4Cu;
    SET_GPR_U32(ctx, 31, 0x244B54u);
    ctx->pc = 0x244B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244B4Cu;
            // 0x244b50: 0x24a5b228  addiu       $a1, $a1, -0x4DD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244B54u; }
        if (ctx->pc != 0x244B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244B54u; }
        if (ctx->pc != 0x244B54u) { return; }
    }
    ctx->pc = 0x244B54u;
label_244b54:
    // 0x244b54: 0x1240006e  beqz        $s2, . + 4 + (0x6E << 2)
    ctx->pc = 0x244B54u;
    {
        const bool branch_taken_0x244b54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x244b54) {
            ctx->pc = 0x244D10u;
            goto label_244d10;
        }
    }
    ctx->pc = 0x244B5Cu;
    // 0x244b5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x244b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244b60: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x244b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x244b64: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x244b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x244b68: 0xc08974c  jal         func_225D30
    ctx->pc = 0x244B68u;
    SET_GPR_U32(ctx, 31, 0x244B70u);
    ctx->pc = 0x244B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244B68u;
            // 0x244b6c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244B70u; }
        if (ctx->pc != 0x244B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244B70u; }
        if (ctx->pc != 0x244B70u) { return; }
    }
    ctx->pc = 0x244B70u;
label_244b70:
    // 0x244b70: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x244b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x244b74: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x244b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x244b78: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x244b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x244b7c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x244b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x244b80: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x244b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x244b84: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x244b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x244b88: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x244b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x244b8c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x244B8Cu;
    {
        const bool branch_taken_0x244b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244B8Cu;
            // 0x244b90: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244b8c) {
            ctx->pc = 0x244D10u;
            goto label_244d10;
        }
    }
    ctx->pc = 0x244B94u;
    // 0x244b94: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x244b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_244b98:
    // 0x244b98: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x244B98u;
    {
        const bool branch_taken_0x244b98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x244b98) {
            ctx->pc = 0x244BACu;
            goto label_244bac;
        }
    }
    ctx->pc = 0x244BA0u;
    // 0x244ba0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x244ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x244ba4: 0x16220018  bne         $s1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x244BA4u;
    {
        const bool branch_taken_0x244ba4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x244ba4) {
            ctx->pc = 0x244C08u;
            goto label_244c08;
        }
    }
    ctx->pc = 0x244BACu;
label_244bac:
    // 0x244bac: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x244bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x244bb0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x244bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x244bb4: 0x24420bc0  addiu       $v0, $v0, 0xBC0
    ctx->pc = 0x244bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3008));
    // 0x244bb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x244bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x244bbc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x244bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x244bc0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x244BC0u;
    SET_GPR_U32(ctx, 31, 0x244BC8u);
    ctx->pc = 0x244BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244BC0u;
            // 0x244bc4: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244BC8u; }
        if (ctx->pc != 0x244BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244BC8u; }
        if (ctx->pc != 0x244BC8u) { return; }
    }
    ctx->pc = 0x244BC8u;
label_244bc8:
    // 0x244bc8: 0x12400051  beqz        $s2, . + 4 + (0x51 << 2)
    ctx->pc = 0x244BC8u;
    {
        const bool branch_taken_0x244bc8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x244bc8) {
            ctx->pc = 0x244D10u;
            goto label_244d10;
        }
    }
    ctx->pc = 0x244BD0u;
    // 0x244bd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x244bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244bd4: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x244bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x244bd8: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x244bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x244bdc: 0xc08974c  jal         func_225D30
    ctx->pc = 0x244BDCu;
    SET_GPR_U32(ctx, 31, 0x244BE4u);
    ctx->pc = 0x244BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244BDCu;
            // 0x244be0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244BE4u; }
        if (ctx->pc != 0x244BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244BE4u; }
        if (ctx->pc != 0x244BE4u) { return; }
    }
    ctx->pc = 0x244BE4u;
label_244be4:
    // 0x244be4: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x244be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x244be8: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x244be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x244bec: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x244becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x244bf0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x244bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x244bf4: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x244bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x244bf8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x244bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x244bfc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x244bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x244c00: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x244C00u;
    {
        const bool branch_taken_0x244c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244C00u;
            // 0x244c04: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244c00) {
            ctx->pc = 0x244D10u;
            goto label_244d10;
        }
    }
    ctx->pc = 0x244C08u;
label_244c08:
    // 0x244c08: 0x16200010  bnez        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x244C08u;
    {
        const bool branch_taken_0x244c08 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x244C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244C08u;
            // 0x244c0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244c08) {
            ctx->pc = 0x244C4Cu;
            goto label_244c4c;
        }
    }
    ctx->pc = 0x244C10u;
    // 0x244c10: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x244c10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x244c14: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x244c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x244c18: 0x24a5b1e0  addiu       $a1, $a1, -0x4E20
    ctx->pc = 0x244c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947296));
    // 0x244c1c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x244C1Cu;
    SET_GPR_U32(ctx, 31, 0x244C24u);
    ctx->pc = 0x244C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244C1Cu;
            // 0x244c20: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244C24u; }
        if (ctx->pc != 0x244C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244C24u; }
        if (ctx->pc != 0x244C24u) { return; }
    }
    ctx->pc = 0x244C24u;
label_244c24:
    // 0x244c24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x244c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244c28: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x244c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x244c2c: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x244c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x244c30: 0xc08974c  jal         func_225D30
    ctx->pc = 0x244C30u;
    SET_GPR_U32(ctx, 31, 0x244C38u);
    ctx->pc = 0x244C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244C30u;
            // 0x244c34: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244C38u; }
        if (ctx->pc != 0x244C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244C38u; }
        if (ctx->pc != 0x244C38u) { return; }
    }
    ctx->pc = 0x244C38u;
label_244c38:
    // 0x244c38: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x244c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x244c3c: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x244c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x244c40: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x244C40u;
    {
        const bool branch_taken_0x244c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244C40u;
            // 0x244c44: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244c40) {
            ctx->pc = 0x244D10u;
            goto label_244d10;
        }
    }
    ctx->pc = 0x244C48u;
    // 0x244c48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x244c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_244c4c:
    // 0x244c4c: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x244C4Cu;
    {
        const bool branch_taken_0x244c4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x244C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244C4Cu;
            // 0x244c50: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244c4c) {
            ctx->pc = 0x244C64u;
            goto label_244c64;
        }
    }
    ctx->pc = 0x244C54u;
    // 0x244c54: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x244c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x244c58: 0x16220014  bne         $s1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x244C58u;
    {
        const bool branch_taken_0x244c58 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x244C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244C58u;
            // 0x244c5c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244c58) {
            ctx->pc = 0x244CACu;
            goto label_244cac;
        }
    }
    ctx->pc = 0x244C60u;
    // 0x244c60: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x244c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_244c64:
    // 0x244c64: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x244C64u;
    {
        const bool branch_taken_0x244c64 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x244c64) {
            ctx->pc = 0x244C78u;
            goto label_244c78;
        }
    }
    ctx->pc = 0x244C6Cu;
    // 0x244c6c: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x244c6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x244c70: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x244C70u;
    {
        const bool branch_taken_0x244c70 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x244c70) {
            ctx->pc = 0x244C7Cu;
            goto label_244c7c;
        }
    }
    ctx->pc = 0x244C78u;
label_244c78:
    // 0x244c78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x244c78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244c7c:
    // 0x244c7c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x244c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x244c80: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x244c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x244c84: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x244C84u;
    SET_GPR_U32(ctx, 31, 0x244C8Cu);
    ctx->pc = 0x244C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244C84u;
            // 0x244c88: 0x24a5b230  addiu       $a1, $a1, -0x4DD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244C8Cu; }
        if (ctx->pc != 0x244C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244C8Cu; }
        if (ctx->pc != 0x244C8Cu) { return; }
    }
    ctx->pc = 0x244C8Cu;
label_244c8c:
    // 0x244c8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x244c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244c90: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x244c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x244c94: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x244c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x244c98: 0xc08974c  jal         func_225D30
    ctx->pc = 0x244C98u;
    SET_GPR_U32(ctx, 31, 0x244CA0u);
    ctx->pc = 0x244C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244C98u;
            // 0x244c9c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244CA0u; }
        if (ctx->pc != 0x244CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244CA0u; }
        if (ctx->pc != 0x244CA0u) { return; }
    }
    ctx->pc = 0x244CA0u;
label_244ca0:
    // 0x244ca0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x244CA0u;
    {
        const bool branch_taken_0x244ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244CA0u;
            // 0x244ca4: 0x8fa200e0  lw          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244ca0) {
            ctx->pc = 0x244D14u;
            goto label_244d14;
        }
    }
    ctx->pc = 0x244CA8u;
    // 0x244ca8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x244ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_244cac:
    // 0x244cac: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x244CACu;
    {
        const bool branch_taken_0x244cac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x244cac) {
            ctx->pc = 0x244CCCu;
            goto label_244ccc;
        }
    }
    ctx->pc = 0x244CB4u;
    // 0x244cb4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x244cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x244cb8: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x244CB8u;
    {
        const bool branch_taken_0x244cb8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x244cb8) {
            ctx->pc = 0x244CCCu;
            goto label_244ccc;
        }
    }
    ctx->pc = 0x244CC0u;
    // 0x244cc0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x244cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x244cc4: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x244CC4u;
    {
        const bool branch_taken_0x244cc4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x244CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244CC4u;
            // 0x244cc8: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244cc4) {
            ctx->pc = 0x244CF0u;
            goto label_244cf0;
        }
    }
    ctx->pc = 0x244CCCu;
label_244ccc:
    // 0x244ccc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x244cccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x244cd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x244cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244cd4: 0x24a5b238  addiu       $a1, $a1, -0x4DC8
    ctx->pc = 0x244cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947384));
    // 0x244cd8: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x244cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x244cdc: 0xc08974c  jal         func_225D30
    ctx->pc = 0x244CDCu;
    SET_GPR_U32(ctx, 31, 0x244CE4u);
    ctx->pc = 0x244CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244CDCu;
            // 0x244ce0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244CE4u; }
        if (ctx->pc != 0x244CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244CE4u; }
        if (ctx->pc != 0x244CE4u) { return; }
    }
    ctx->pc = 0x244CE4u;
label_244ce4:
    // 0x244ce4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x244CE4u;
    {
        const bool branch_taken_0x244ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x244ce4) {
            ctx->pc = 0x244D10u;
            goto label_244d10;
        }
    }
    ctx->pc = 0x244CECu;
    // 0x244cec: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x244cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_244cf0:
    // 0x244cf0: 0x16220007  bne         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x244CF0u;
    {
        const bool branch_taken_0x244cf0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x244cf0) {
            ctx->pc = 0x244D10u;
            goto label_244d10;
        }
    }
    ctx->pc = 0x244CF8u;
    // 0x244cf8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x244cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x244cfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x244cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244d00: 0x24a5b240  addiu       $a1, $a1, -0x4DC0
    ctx->pc = 0x244d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947392));
    // 0x244d04: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x244d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x244d08: 0xc08974c  jal         func_225D30
    ctx->pc = 0x244D08u;
    SET_GPR_U32(ctx, 31, 0x244D10u);
    ctx->pc = 0x244D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244D08u;
            // 0x244d0c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244D10u; }
        if (ctx->pc != 0x244D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244D10u; }
        if (ctx->pc != 0x244D10u) { return; }
    }
    ctx->pc = 0x244D10u;
label_244d10:
    // 0x244d10: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x244d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_244d14:
    // 0x244d14: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x244d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x244d18: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x244d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x244d1c: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x244d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
label_244d20:
    // 0x244d20: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x244d20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x244d24: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x244D24u;
    {
        const bool branch_taken_0x244d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x244d24) {
            ctx->pc = 0x244E5Cu;
            goto label_244e5c;
        }
    }
    ctx->pc = 0x244D2Cu;
    // 0x244d2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x244d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244d30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x244d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244d34: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x244d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x244d38: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x244d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x244d3c: 0x2442dac0  addiu       $v0, $v0, -0x2540
    ctx->pc = 0x244d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957760));
label_244d40:
    // 0x244d40: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x244d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x244d44: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x244d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x244d48: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x244d48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x244d4c: 0x28870002  slti        $a3, $a0, 0x2
    ctx->pc = 0x244d4cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x244d50: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x244d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x244d54: 0xa1030007  sb          $v1, 0x7($t0)
    ctx->pc = 0x244d54u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x244d58: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x244d58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x244d5c: 0xa1030008  sb          $v1, 0x8($t0)
    ctx->pc = 0x244d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x244d60: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x244d60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x244d64: 0xa1030009  sb          $v1, 0x9($t0)
    ctx->pc = 0x244d64u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x244d68: 0x8cc80004  lw          $t0, 0x4($a2)
    ctx->pc = 0x244d68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x244d6c: 0xa1030007  sb          $v1, 0x7($t0)
    ctx->pc = 0x244d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x244d70: 0x8cc80004  lw          $t0, 0x4($a2)
    ctx->pc = 0x244d70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x244d74: 0xa1030008  sb          $v1, 0x8($t0)
    ctx->pc = 0x244d74u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x244d78: 0x8cc80004  lw          $t0, 0x4($a2)
    ctx->pc = 0x244d78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x244d7c: 0xa1030009  sb          $v1, 0x9($t0)
    ctx->pc = 0x244d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x244d80: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x244d80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x244d84: 0xa1030007  sb          $v1, 0x7($t0)
    ctx->pc = 0x244d84u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x244d88: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x244d88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x244d8c: 0xa1030008  sb          $v1, 0x8($t0)
    ctx->pc = 0x244d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x244d90: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x244d90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x244d94: 0xa1030009  sb          $v1, 0x9($t0)
    ctx->pc = 0x244d94u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x244d98: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x244d98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x244d9c: 0xa1030007  sb          $v1, 0x7($t0)
    ctx->pc = 0x244d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x244da0: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x244da0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x244da4: 0xa1030008  sb          $v1, 0x8($t0)
    ctx->pc = 0x244da4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x244da8: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x244da8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x244dac: 0xa1030009  sb          $v1, 0x9($t0)
    ctx->pc = 0x244dacu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x244db0: 0x8cc80010  lw          $t0, 0x10($a2)
    ctx->pc = 0x244db0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x244db4: 0xa1030007  sb          $v1, 0x7($t0)
    ctx->pc = 0x244db4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x244db8: 0x8cc80010  lw          $t0, 0x10($a2)
    ctx->pc = 0x244db8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x244dbc: 0xa1030008  sb          $v1, 0x8($t0)
    ctx->pc = 0x244dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x244dc0: 0x8cc80010  lw          $t0, 0x10($a2)
    ctx->pc = 0x244dc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x244dc4: 0xa1030009  sb          $v1, 0x9($t0)
    ctx->pc = 0x244dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x244dc8: 0x8cc80014  lw          $t0, 0x14($a2)
    ctx->pc = 0x244dc8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x244dcc: 0xa1030007  sb          $v1, 0x7($t0)
    ctx->pc = 0x244dccu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x244dd0: 0x8cc80014  lw          $t0, 0x14($a2)
    ctx->pc = 0x244dd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x244dd4: 0xa1030008  sb          $v1, 0x8($t0)
    ctx->pc = 0x244dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x244dd8: 0x8cc80014  lw          $t0, 0x14($a2)
    ctx->pc = 0x244dd8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x244ddc: 0xa1030009  sb          $v1, 0x9($t0)
    ctx->pc = 0x244ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x244de0: 0x8cc80018  lw          $t0, 0x18($a2)
    ctx->pc = 0x244de0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x244de4: 0xa1030007  sb          $v1, 0x7($t0)
    ctx->pc = 0x244de4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x244de8: 0x8cc80018  lw          $t0, 0x18($a2)
    ctx->pc = 0x244de8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x244dec: 0xa1030008  sb          $v1, 0x8($t0)
    ctx->pc = 0x244decu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x244df0: 0x8cc80018  lw          $t0, 0x18($a2)
    ctx->pc = 0x244df0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x244df4: 0xa1030009  sb          $v1, 0x9($t0)
    ctx->pc = 0x244df4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x244df8: 0x8cc8001c  lw          $t0, 0x1C($a2)
    ctx->pc = 0x244df8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x244dfc: 0xa1030007  sb          $v1, 0x7($t0)
    ctx->pc = 0x244dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x244e00: 0x8cc8001c  lw          $t0, 0x1C($a2)
    ctx->pc = 0x244e00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x244e04: 0xa1030008  sb          $v1, 0x8($t0)
    ctx->pc = 0x244e04u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x244e08: 0x8cc6001c  lw          $a2, 0x1C($a2)
    ctx->pc = 0x244e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x244e0c: 0x14e0ffcc  bnez        $a3, . + 4 + (-0x34 << 2)
    ctx->pc = 0x244E0Cu;
    {
        const bool branch_taken_0x244e0c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x244E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244E0Cu;
            // 0x244e10: 0xa0c30009  sb          $v1, 0x9($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 9), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244e0c) {
            ctx->pc = 0x244D40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_244d40;
        }
    }
    ctx->pc = 0x244E14u;
    // 0x244e14: 0x2881000a  slti        $at, $a0, 0xA
    ctx->pc = 0x244e14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x244e18: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x244E18u;
    {
        const bool branch_taken_0x244e18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x244e18) {
            ctx->pc = 0x244E5Cu;
            goto label_244e5c;
        }
    }
    ctx->pc = 0x244E20u;
    // 0x244e20: 0x43880  sll         $a3, $a0, 2
    ctx->pc = 0x244e20u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x244e24: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x244e24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x244e28: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x244e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x244e2c: 0x24a5dac0  addiu       $a1, $a1, -0x2540
    ctx->pc = 0x244e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957760));
label_244e30:
    // 0x244e30: 0xa74021  addu        $t0, $a1, $a3
    ctx->pc = 0x244e30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x244e34: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x244e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x244e38: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x244e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x244e3c: 0x2882000a  slti        $v0, $a0, 0xA
    ctx->pc = 0x244e3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x244e40: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x244e40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x244e44: 0xa0660007  sb          $a2, 0x7($v1)
    ctx->pc = 0x244e44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 6));
    // 0x244e48: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x244e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x244e4c: 0xa0660008  sb          $a2, 0x8($v1)
    ctx->pc = 0x244e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 6));
    // 0x244e50: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x244e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x244e54: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x244E54u;
    {
        const bool branch_taken_0x244e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244E54u;
            // 0x244e58: 0xa0660009  sb          $a2, 0x9($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244e54) {
            ctx->pc = 0x244E30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_244e30;
        }
    }
    ctx->pc = 0x244E5Cu;
label_244e5c:
    // 0x244e5c: 0x0  nop
    ctx->pc = 0x244e5cu;
    // NOP
    // 0x244e60: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x244e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x244e64: 0x1622000c  bne         $s1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x244E64u;
    {
        const bool branch_taken_0x244e64 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x244e64) {
            ctx->pc = 0x244E98u;
            goto label_244e98;
        }
    }
    ctx->pc = 0x244E6Cu;
    // 0x244e6c: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x244e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x244e70: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x244e70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x244e74: 0x2442dac0  addiu       $v0, $v0, -0x2540
    ctx->pc = 0x244e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957760));
    // 0x244e78: 0x240400a4  addiu       $a0, $zero, 0xA4
    ctx->pc = 0x244e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x244e7c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x244e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x244e80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x244e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x244e84: 0xa0440007  sb          $a0, 0x7($v0)
    ctx->pc = 0x244e84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 4));
    // 0x244e88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x244e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x244e8c: 0xa0440008  sb          $a0, 0x8($v0)
    ctx->pc = 0x244e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 4));
    // 0x244e90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x244e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x244e94: 0xa0440009  sb          $a0, 0x9($v0)
    ctx->pc = 0x244e94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 4));
label_244e98:
    // 0x244e98: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x244e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x244e9c: 0x8022dc22  lb          $v0, -0x23DE($at)
    ctx->pc = 0x244e9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294958114)));
    // 0x244ea0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x244EA0u;
    {
        const bool branch_taken_0x244ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244ea0) {
            ctx->pc = 0x244EE0u;
            goto label_244ee0;
        }
    }
    ctx->pc = 0x244EA8u;
    // 0x244ea8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x244ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x244eac: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x244eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x244eb0: 0x8024dc23  lb          $a0, -0x23DD($at)
    ctx->pc = 0x244eb0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294958115)));
    // 0x244eb4: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x244eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x244eb8: 0x2463df28  addiu       $v1, $v1, -0x20D8
    ctx->pc = 0x244eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958888));
    // 0x244ebc: 0x2442df2a  addiu       $v0, $v0, -0x20D6
    ctx->pc = 0x244ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958890));
    // 0x244ec0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x244ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x244ec4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x244ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x244ec8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x244ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x244ecc: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x244eccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x244ed0: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x244ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x244ed4: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x244ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x244ed8: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x244ed8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x244edc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x244edcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_244ee0:
    // 0x244ee0: 0x8f829520  lw          $v0, -0x6AE0($gp)
    ctx->pc = 0x244ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
    // 0x244ee4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x244EE4u;
    {
        const bool branch_taken_0x244ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244EE4u;
            // 0x244ee8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244ee4) {
            ctx->pc = 0x244F10u;
            goto label_244f10;
        }
    }
    ctx->pc = 0x244EECu;
    // 0x244eec: 0x86830014  lh          $v1, 0x14($s4)
    ctx->pc = 0x244eecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x244ef0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x244ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x244ef4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x244EF4u;
    {
        const bool branch_taken_0x244ef4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x244ef4) {
            ctx->pc = 0x244F0Cu;
            goto label_244f0c;
        }
    }
    ctx->pc = 0x244EFCu;
    // 0x244efc: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x244efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x244f00: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x244f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x244f04: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x244f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x244f08: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x244f08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_244f0c:
    // 0x244f0c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x244f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_244f10:
    // 0x244f10: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x244f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x244f14: 0xaf8395fc  sw          $v1, -0x6A04($gp)
    ctx->pc = 0x244f14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940156), GPR_U32(ctx, 3));
    // 0x244f18: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x244f18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x244f1c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x244F1Cu;
    {
        const bool branch_taken_0x244f1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x244f1c) {
            ctx->pc = 0x244F30u;
            goto label_244f30;
        }
    }
    ctx->pc = 0x244F24u;
    // 0x244f24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x244f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244f28: 0xc08e134  jal         func_2384D0
    ctx->pc = 0x244F28u;
    SET_GPR_U32(ctx, 31, 0x244F30u);
    ctx->pc = 0x244F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244F28u;
            // 0x244f2c: 0x27a500e8  addiu       $a1, $sp, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2384D0u;
    if (runtime->hasFunction(0x2384D0u)) {
        auto targetFn = runtime->lookupFunction(0x2384D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244F30u; }
        if (ctx->pc != 0x244F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetItemCmdMsgPos__14CBaseMenuClassFPi_0x2384d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244F30u; }
        if (ctx->pc != 0x244F30u) { return; }
    }
    ctx->pc = 0x244F30u;
label_244f30:
    // 0x244f30: 0xdf8296e0  ld          $v0, -0x6920($gp)
    ctx->pc = 0x244f30u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294940384)));
    // 0x244f34: 0x27a300f8  addiu       $v1, $sp, 0xF8
    ctx->pc = 0x244f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x244f38: 0x2a21000c  slti        $at, $s1, 0xC
    ctx->pc = 0x244f38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x244f3c: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x244F3Cu;
    {
        const bool branch_taken_0x244f3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x244F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244F3Cu;
            // 0x244f40: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244f3c) {
            ctx->pc = 0x244F6Cu;
            goto label_244f6c;
        }
    }
    ctx->pc = 0x244F44u;
    // 0x244f44: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x244f44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x244f48: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x244f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x244f4c: 0x24a5b248  addiu       $a1, $a1, -0x4DB8
    ctx->pc = 0x244f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947400));
    // 0x244f50: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x244F50u;
    SET_GPR_U32(ctx, 31, 0x244F58u);
    ctx->pc = 0x244F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244F50u;
            // 0x244f54: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244F58u; }
        if (ctx->pc != 0x244F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244F58u; }
        if (ctx->pc != 0x244F58u) { return; }
    }
    ctx->pc = 0x244F58u;
label_244f58:
    // 0x244f58: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x244f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x244f5c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x244f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x244f60: 0x27a600f8  addiu       $a2, $sp, 0xF8
    ctx->pc = 0x244f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x244f64: 0xc08aaec  jal         func_22ABB0
    ctx->pc = 0x244F64u;
    SET_GPR_U32(ctx, 31, 0x244F6Cu);
    ctx->pc = 0x244F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244F64u;
            // 0x244f68: 0x27a700fc  addiu       $a3, $sp, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22ABB0u;
    if (runtime->hasFunction(0x22ABB0u)) {
        auto targetFn = runtime->lookupFunction(0x22ABB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244F6Cu; }
        if (ctx->pc != 0x244F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEtcTblValue__14CPosDataManageFPcRiRi_0x22abb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244F6Cu; }
        if (ctx->pc != 0x244F6Cu) { return; }
    }
    ctx->pc = 0x244F6Cu;
label_244f6c:
    // 0x244f6c: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x244f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x244f70: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x244f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x244f74: 0xc08ef88  jal         func_23BE20
    ctx->pc = 0x244F74u;
    SET_GPR_U32(ctx, 31, 0x244F7Cu);
    ctx->pc = 0x244F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244F74u;
            // 0x244f78: 0x27a600f8  addiu       $a2, $sp, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23BE20u;
    if (runtime->hasFunction(0x23BE20u)) {
        auto targetFn = runtime->lookupFunction(0x23BE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244F7Cu; }
        if (ctx->pc != 0x244F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuPosStep__12CMenuKeyFuncFPiPi_0x23be20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244F7Cu; }
        if (ctx->pc != 0x244F7Cu) { return; }
    }
    ctx->pc = 0x244F7Cu;
label_244f7c:
    // 0x244f7c: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x244f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x244f80: 0x8c820138  lw          $v0, 0x138($a0)
    ctx->pc = 0x244f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 312)));
    // 0x244f84: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x244f84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x244f88: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x244F88u;
    {
        const bool branch_taken_0x244f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x244f88) {
            ctx->pc = 0x244F94u;
            goto label_244f94;
        }
    }
    ctx->pc = 0x244F90u;
    // 0x244f90: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x244f90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_244f94:
    // 0x244f94: 0x6a00015  bltz        $s5, . + 4 + (0x15 << 2)
    ctx->pc = 0x244F94u;
    {
        const bool branch_taken_0x244f94 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x244F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244F94u;
            // 0x244f98: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244f94) {
            ctx->pc = 0x244FECu;
            goto label_244fec;
        }
    }
    ctx->pc = 0x244F9Cu;
    // 0x244f9c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x244f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x244fa0: 0x151840  sll         $v1, $s5, 1
    ctx->pc = 0x244fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x244fa4: 0x24421098  addiu       $v0, $v0, 0x1098
    ctx->pc = 0x244fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4248));
    // 0x244fa8: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x244fa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x244fac: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x244facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x244fb0: 0x24421080  addiu       $v0, $v0, 0x1080
    ctx->pc = 0x244fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4224));
    // 0x244fb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x244fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x244fb8: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x244fb8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x244fbc: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x244fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x244fc0: 0x24421081  addiu       $v0, $v0, 0x1081
    ctx->pc = 0x244fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4225));
    // 0x244fc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x244fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x244fc8: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x244fc8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x244fcc: 0xc08f058  jal         func_23C160
    ctx->pc = 0x244FCCu;
    SET_GPR_U32(ctx, 31, 0x244FD4u);
    ctx->pc = 0x244FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244FCCu;
            // 0x244fd0: 0x82050000  lb          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C160u;
    if (runtime->hasFunction(0x23C160u)) {
        auto targetFn = runtime->lookupFunction(0x23C160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244FD4u; }
        if (ctx->pc != 0x244FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWakuWH__12CMenuKeyFuncFiii_0x23c160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244FD4u; }
        if (ctx->pc != 0x244FD4u) { return; }
    }
    ctx->pc = 0x244FD4u;
label_244fd4:
    // 0x244fd4: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x244fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x244fd8: 0xc08f02c  jal         func_23C0B0
    ctx->pc = 0x244FD8u;
    SET_GPR_U32(ctx, 31, 0x244FE0u);
    ctx->pc = 0x244FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244FD8u;
            // 0x244fdc: 0x82050000  lb          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C0B0u;
    if (runtime->hasFunction(0x23C0B0u)) {
        auto targetFn = runtime->lookupFunction(0x23C0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244FE0u; }
        if (ctx->pc != 0x244FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWakuType__12CMenuKeyFuncFi_0x23c0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244FE0u; }
        if (ctx->pc != 0x244FE0u) { return; }
    }
    ctx->pc = 0x244FE0u;
label_244fe0:
    // 0x244fe0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x244FE0u;
    {
        const bool branch_taken_0x244fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244FE0u;
            // 0x244fe4: 0x9283013a  lbu         $v1, 0x13A($s4) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 314)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244fe0) {
            ctx->pc = 0x244FF8u;
            goto label_244ff8;
        }
    }
    ctx->pc = 0x244FE8u;
    // 0x244fe8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x244fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_244fec:
    // 0x244fec: 0xc08f02c  jal         func_23C0B0
    ctx->pc = 0x244FECu;
    SET_GPR_U32(ctx, 31, 0x244FF4u);
    ctx->pc = 0x23C0B0u;
    if (runtime->hasFunction(0x23C0B0u)) {
        auto targetFn = runtime->lookupFunction(0x23C0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244FF4u; }
        if (ctx->pc != 0x244FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWakuType__12CMenuKeyFuncFi_0x23c0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244FF4u; }
        if (ctx->pc != 0x244FF4u) { return; }
    }
    ctx->pc = 0x244FF4u;
label_244ff4:
    // 0x244ff4: 0x9283013a  lbu         $v1, 0x13A($s4)
    ctx->pc = 0x244ff4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 314)));
label_244ff8:
    // 0x244ff8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x244FF8u;
    {
        const bool branch_taken_0x244ff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x244ff8) {
            ctx->pc = 0x245014u;
            goto label_245014;
        }
    }
    ctx->pc = 0x245000u;
    // 0x245000: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x245000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x245004: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x245004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x245008: 0xc08f000  jal         func_23C000
    ctx->pc = 0x245008u;
    SET_GPR_U32(ctx, 31, 0x245010u);
    ctx->pc = 0x24500Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245008u;
            // 0x24500c: 0x8e660000  lw          $a2, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C000u;
    if (runtime->hasFunction(0x23C000u)) {
        auto targetFn = runtime->lookupFunction(0x23C000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245010u; }
        if (ctx->pc != 0x245010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSetPos__12CMenuKeyFuncFii_0x23c000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245010u; }
        if (ctx->pc != 0x245010u) { return; }
    }
    ctx->pc = 0x245010u;
label_245010:
    // 0x245010: 0xa280013a  sb          $zero, 0x13A($s4)
    ctx->pc = 0x245010u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 314), (uint8_t)GPR_U32(ctx, 0));
label_245014:
    // 0x245014: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x245014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_245018:
    // 0x245018: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x245018u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24501c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24501cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x245020: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x245020u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x245024: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x245024u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245028: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x245028u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24502c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24502cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245030: 0x3e00008  jr          $ra
    ctx->pc = 0x245030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245030u;
            // 0x245034: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x245038u;
}
