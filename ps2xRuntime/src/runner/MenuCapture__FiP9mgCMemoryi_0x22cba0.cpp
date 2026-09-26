#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuCapture__FiP9mgCMemoryi
// Address: 0x22cba0 - 0x22cf48
void MenuCapture__FiP9mgCMemoryi_0x22cba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuCapture__FiP9mgCMemoryi_0x22cba0");
#endif

    switch (ctx->pc) {
        case 0x22cbe0u: goto label_22cbe0;
        case 0x22cc6cu: goto label_22cc6c;
        case 0x22cc9cu: goto label_22cc9c;
        case 0x22ccf4u: goto label_22ccf4;
        case 0x22cd00u: goto label_22cd00;
        case 0x22cd08u: goto label_22cd08;
        case 0x22cd10u: goto label_22cd10;
        case 0x22cd18u: goto label_22cd18;
        case 0x22cd20u: goto label_22cd20;
        case 0x22cd3cu: goto label_22cd3c;
        case 0x22cd64u: goto label_22cd64;
        case 0x22cd74u: goto label_22cd74;
        case 0x22ce40u: goto label_22ce40;
        case 0x22ce48u: goto label_22ce48;
        case 0x22ce58u: goto label_22ce58;
        case 0x22ce64u: goto label_22ce64;
        case 0x22ce70u: goto label_22ce70;
        case 0x22ce7cu: goto label_22ce7c;
        case 0x22ce88u: goto label_22ce88;
        case 0x22ce94u: goto label_22ce94;
        case 0x22cea0u: goto label_22cea0;
        case 0x22ceacu: goto label_22ceac;
        case 0x22cec4u: goto label_22cec4;
        case 0x22ced4u: goto label_22ced4;
        case 0x22cee8u: goto label_22cee8;
        case 0x22cef8u: goto label_22cef8;
        case 0x22cf0cu: goto label_22cf0c;
        case 0x22cf14u: goto label_22cf14;
        default: break;
    }

    ctx->pc = 0x22cba0u;

    // 0x22cba0: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x22cba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
    // 0x22cba4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x22cba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x22cba8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x22cba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x22cbac: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x22cbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x22cbb0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x22cbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x22cbb4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x22cbb4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cbb8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x22cbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x22cbbc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x22cbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x22cbc0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x22cbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x22cbc4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x22cbc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cbc8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x22cbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x22cbcc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x22cbccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cbd0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22cbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x22cbd4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22cbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cbd8: 0xc04e780  jal         func_139E00
    ctx->pc = 0x22CBD8u;
    SET_GPR_U32(ctx, 31, 0x22CBE0u);
    ctx->pc = 0x22CBDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CBD8u;
            // 0x22cbdc: 0x7fb00010  sq          $s0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CBE0u; }
        if (ctx->pc != 0x22CBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CBE0u; }
        if (ctx->pc != 0x22CBE0u) { return; }
    }
    ctx->pc = 0x22CBE0u;
label_22cbe0:
    // 0x22cbe0: 0x8e850024  lw          $a1, 0x24($s4)
    ctx->pc = 0x22cbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x22cbe4: 0x3c1e0038  lui         $fp, 0x38
    ctx->pc = 0x22cbe4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)56 << 16));
    // 0x22cbe8: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x22cbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x22cbec: 0x27de1ef0  addiu       $fp, $fp, 0x1EF0
    ctx->pc = 0x22cbecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 7920));
    // 0x22cbf0: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x22cbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x22cbf4: 0x8e840020  lw          $a0, 0x20($s4)
    ctx->pc = 0x22cbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x22cbf8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x22cbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x22cbfc: 0x3b043  sra         $s6, $v1, 1
    ctx->pc = 0x22cbfcu;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 3), 1));
    // 0x22cc00: 0x28043  sra         $s0, $v0, 1
    ctx->pc = 0x22cc00u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
    // 0x22cc04: 0x2c0a82d  daddu       $s5, $s6, $zero
    ctx->pc = 0x22cc04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cc08: 0x859021  addu        $s2, $a0, $a1
    ctx->pc = 0x22cc08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x22cc0c: 0xaf978304  sw          $s7, -0x7CFC($gp)
    ctx->pc = 0x22cc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935300), GPR_U32(ctx, 23));
    // 0x22cc10: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x22cc10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cc14: 0x6c10004  bgez        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x22CC14u;
    {
        const bool branch_taken_0x22cc14 = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x22CC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CC14u;
            // 0x22cc18: 0x32c3003f  andi        $v1, $s6, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cc14) {
            ctx->pc = 0x22CC28u;
            goto label_22cc28;
        }
    }
    ctx->pc = 0x22CC1Cu;
    // 0x22cc1c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22CC1Cu;
    {
        const bool branch_taken_0x22cc1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CC1Cu;
            // 0x22cc20: 0x3204003f  andi        $a0, $s0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cc1c) {
            ctx->pc = 0x22CC2Cu;
            goto label_22cc2c;
        }
    }
    ctx->pc = 0x22CC24u;
    // 0x22cc24: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x22cc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_22cc28:
    // 0x22cc28: 0x3204003f  andi        $a0, $s0, 0x3F
    ctx->pc = 0x22cc28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)63);
label_22cc2c:
    // 0x22cc2c: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22CC2Cu;
    {
        const bool branch_taken_0x22cc2c = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x22cc2c) {
            ctx->pc = 0x22CC40u;
            goto label_22cc40;
        }
    }
    ctx->pc = 0x22CC34u;
    // 0x22cc34: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22CC34u;
    {
        const bool branch_taken_0x22cc34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cc34) {
            ctx->pc = 0x22CC40u;
            goto label_22cc40;
        }
    }
    ctx->pc = 0x22CC3Cu;
    // 0x22cc3c: 0x2484ffc0  addiu       $a0, $a0, -0x40
    ctx->pc = 0x22cc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
label_22cc40:
    // 0x22cc40: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22CC40u;
    {
        const bool branch_taken_0x22cc40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CC40u;
            // 0x22cc44: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cc40) {
            ctx->pc = 0x22CC50u;
            goto label_22cc50;
        }
    }
    ctx->pc = 0x22CC48u;
    // 0x22cc48: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x22cc48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22cc4c: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x22cc4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_22cc50:
    // 0x22cc50: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22CC50u;
    {
        const bool branch_taken_0x22cc50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CC50u;
            // 0x22cc54: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cc50) {
            ctx->pc = 0x22CC60u;
            goto label_22cc60;
        }
    }
    ctx->pc = 0x22CC58u;
    // 0x22cc58: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x22cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22cc5c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x22cc5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_22cc60:
    // 0x22cc60: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x22cc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cc64: 0xc04b950  jal         func_12E540
    ctx->pc = 0x22CC64u;
    SET_GPR_U32(ctx, 31, 0x22CC6Cu);
    ctx->pc = 0x22CC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CC64u;
            // 0x22cc68: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CC6Cu; }
        if (ctx->pc != 0x22CC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CC6Cu; }
        if (ctx->pc != 0x22CC6Cu) { return; }
    }
    ctx->pc = 0x22CC6Cu;
label_22cc6c:
    // 0x22cc6c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x22cc6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x22cc70: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x22cc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x22cc74: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x22cc74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cc78: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x22cc78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cc7c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x22cc7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cc80: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x22cc80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cc84: 0x24c6a690  addiu       $a2, $a2, -0x5970
    ctx->pc = 0x22cc84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944400));
    // 0x22cc88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22cc88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cc8c: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x22cc8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x22cc90: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x22cc90u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cc94: 0xc04b450  jal         func_12D140
    ctx->pc = 0x22CC94u;
    SET_GPR_U32(ctx, 31, 0x22CC9Cu);
    ctx->pc = 0x22CC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CC94u;
            // 0x22cc98: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D140u;
    if (runtime->hasFunction(0x12D140u)) {
        auto targetFn = runtime->lookupFunction(0x12D140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CC9Cu; }
        if (ctx->pc != 0x22CC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterTexture__17mgCTextureManagerFiPcPP1iiiP1Uli_0x12d140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CC9Cu; }
        if (ctx->pc != 0x22CC9Cu) { return; }
    }
    ctx->pc = 0x22CC9Cu;
label_22cc9c:
    // 0x22cc9c: 0xaf829468  sw          $v0, -0x6B98($gp)
    ctx->pc = 0x22cc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939752), GPR_U32(ctx, 2));
    // 0x22cca0: 0x8f869468  lw          $a2, -0x6B98($gp)
    ctx->pc = 0x22cca0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939752)));
    // 0x22cca4: 0x10c00014  beqz        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x22CCA4u;
    {
        const bool branch_taken_0x22cca4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CCA4u;
            // 0x22cca8: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cca4) {
            ctx->pc = 0x22CCF8u;
            goto label_22ccf8;
        }
    }
    ctx->pc = 0x22CCACu;
    // 0x22ccac: 0x90c4003c  lbu         $a0, 0x3C($a2)
    ctx->pc = 0x22ccacu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x22ccb0: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x22ccb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x22ccb4: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x22ccb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x22ccb8: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x22ccb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22ccbc: 0x2d01018  mult        $v0, $s6, $s0
    ctx->pc = 0x22ccbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22ccc0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x22ccc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22ccc4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x22ccc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x22ccc8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x22ccc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22cccc: 0xa0c4003c  sb          $a0, 0x3C($a2)
    ctx->pc = 0x22ccccu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 60), (uint8_t)GPR_U32(ctx, 4));
    // 0x22ccd0: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x22ccd0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x22ccd4: 0x8f849468  lw          $a0, -0x6B98($gp)
    ctx->pc = 0x22ccd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939752)));
    // 0x22ccd8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22CCD8u;
    {
        const bool branch_taken_0x22ccd8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x22CCDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CCD8u;
            // 0x22ccdc: 0xac920050  sw          $s2, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ccd8) {
            ctx->pc = 0x22CCE8u;
            goto label_22cce8;
        }
    }
    ctx->pc = 0x22CCE0u;
    // 0x22cce0: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x22cce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x22cce4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x22cce4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_22cce8:
    // 0x22cce8: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x22cce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22ccec: 0xc04e748  jal         func_139D20
    ctx->pc = 0x22CCECu;
    SET_GPR_U32(ctx, 31, 0x22CCF4u);
    ctx->pc = 0x22CCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CCECu;
            // 0x22ccf0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CCF4u; }
        if (ctx->pc != 0x22CCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CCF4u; }
        if (ctx->pc != 0x22CCF4u) { return; }
    }
    ctx->pc = 0x22CCF4u;
label_22ccf4:
    // 0x22ccf4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x22ccf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_22ccf8:
    // 0x22ccf8: 0xc04b120  jal         func_12C480
    ctx->pc = 0x22CCF8u;
    SET_GPR_U32(ctx, 31, 0x22CD00u);
    ctx->pc = 0x12C480u;
    if (runtime->hasFunction(0x12C480u)) {
        auto targetFn = runtime->lookupFunction(0x12C480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CD00u; }
        if (ctx->pc != 0x22CD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10mgCTextureFv_0x12c480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CD00u; }
        if (ctx->pc != 0x22CD00u) { return; }
    }
    ctx->pc = 0x22CD00u;
label_22cd00:
    // 0x22cd00: 0xc0510c0  jal         func_144300
    ctx->pc = 0x22CD00u;
    SET_GPR_U32(ctx, 31, 0x22CD08u);
    ctx->pc = 0x22CD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CD00u;
            // 0x22cd04: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144300u;
    if (runtime->hasFunction(0x144300u)) {
        auto targetFn = runtime->lookupFunction(0x144300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CD08u; }
        if (ctx->pc != 0x22CD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetFrameBuffer__FP10mgCTexture_0x144300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CD08u; }
        if (ctx->pc != 0x22CD08u) { return; }
    }
    ctx->pc = 0x22CD08u;
label_22cd08:
    // 0x22cd08: 0xc05096c  jal         func_1425B0
    ctx->pc = 0x22CD08u;
    SET_GPR_U32(ctx, 31, 0x22CD10u);
    ctx->pc = 0x22CD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CD08u;
            // 0x22cd0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1425B0u;
    if (runtime->hasFunction(0x1425B0u)) {
        auto targetFn = runtime->lookupFunction(0x1425B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CD10u; }
        if (ctx->pc != 0x22CD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgEndFrame__FP14mgCDrawManager_0x1425b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CD10u; }
        if (ctx->pc != 0x22CD10u) { return; }
    }
    ctx->pc = 0x22CD10u;
label_22cd10:
    // 0x22cd10: 0xc050878  jal         func_1421E0
    ctx->pc = 0x22CD10u;
    SET_GPR_U32(ctx, 31, 0x22CD18u);
    ctx->pc = 0x22CD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CD10u;
            // 0x22cd14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1421E0u;
    if (runtime->hasFunction(0x1421E0u)) {
        auto targetFn = runtime->lookupFunction(0x1421E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CD18u; }
        if (ctx->pc != 0x22CD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgBeginFrame__FP14mgCDrawManager_0x1421e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CD18u; }
        if (ctx->pc != 0x22CD18u) { return; }
    }
    ctx->pc = 0x22CD18u;
label_22cd18:
    // 0x22cd18: 0xc04e780  jal         func_139E00
    ctx->pc = 0x22CD18u;
    SET_GPR_U32(ctx, 31, 0x22CD20u);
    ctx->pc = 0x22CD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CD18u;
            // 0x22cd1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CD20u; }
        if (ctx->pc != 0x22CD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CD20u; }
        if (ctx->pc != 0x22CD20u) { return; }
    }
    ctx->pc = 0x22CD20u;
label_22cd20:
    // 0x22cd20: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x22cd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x22cd24: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x22cd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x22cd28: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x22cd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x22cd2c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x22cd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x22cd30: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x22cd30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22cd34: 0xc05141c  jal         func_145070
    ctx->pc = 0x22CD34u;
    SET_GPR_U32(ctx, 31, 0x22CD3Cu);
    ctx->pc = 0x22CD38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CD34u;
            // 0x22cd38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145070u;
    if (runtime->hasFunction(0x145070u)) {
        auto targetFn = runtime->lookupFunction(0x145070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CD3Cu; }
        if (ctx->pc != 0x22CD3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgStoreImage__FP10mgCTextureP1_0x145070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CD3Cu; }
        if (ctx->pc != 0x22CD3Cu) { return; }
    }
    ctx->pc = 0x22CD3Cu;
label_22cd3c:
    // 0x22cd3c: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x22cd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x22cd40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22cd40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cd44: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x22cd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x22cd48: 0x24843  sra         $t1, $v0, 1
    ctx->pc = 0x22cd48u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 1));
    // 0x22cd4c: 0x9082a  slt         $at, $zero, $t1
    ctx->pc = 0x22cd4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x22cd50: 0x33843  sra         $a3, $v1, 1
    ctx->pc = 0x22cd50u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 1));
    // 0x22cd54: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x22cd54u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22cd58: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x22CD58u;
    {
        const bool branch_taken_0x22cd58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CD58u;
            // 0x22cd5c: 0x350c0  sll         $t2, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cd58) {
            ctx->pc = 0x22CE20u;
            goto label_22ce20;
        }
    }
    ctx->pc = 0x22CD60u;
    // 0x22cd60: 0x240d0080  addiu       $t5, $zero, 0x80
    ctx->pc = 0x22cd60u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_22cd64:
    // 0x22cd64: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x22cd64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x22cd68: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x22cd68u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cd6c: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x22CD6Cu;
    {
        const bool branch_taken_0x22cd6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CD6Cu;
            // 0x22cd70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cd6c) {
            ctx->pc = 0x22CE0Cu;
            goto label_22ce0c;
        }
    }
    ctx->pc = 0x22CD74u;
label_22cd74:
    // 0x22cd74: 0x0  nop
    ctx->pc = 0x22cd74u;
    // NOP
    // 0x22cd78: 0x168a021  addu        $s4, $t3, $t0
    ctx->pc = 0x22cd78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x22cd7c: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x22cd7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x22cd80: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x22cd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x22cd84: 0x91630001  lbu         $v1, 0x1($t3)
    ctx->pc = 0x22cd84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x22cd88: 0xa7602a  slt         $t4, $a1, $a3
    ctx->pc = 0x22cd88u;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x22cd8c: 0x91640002  lbu         $a0, 0x2($t3)
    ctx->pc = 0x22cd8cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x22cd90: 0x928f0000  lbu         $t7, 0x0($s4)
    ctx->pc = 0x22cd90u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x22cd94: 0x928e0001  lbu         $t6, 0x1($s4)
    ctx->pc = 0x22cd94u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x22cd98: 0x92990002  lbu         $t9, 0x2($s4)
    ctx->pc = 0x22cd98u;
    SET_GPR_U32(ctx, 25, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x22cd9c: 0x21021  addu        $v0, $zero, $v0
    ctx->pc = 0x22cd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x22cda0: 0x92980004  lbu         $t8, 0x4($s4)
    ctx->pc = 0x22cda0u;
    SET_GPR_U32(ctx, 24, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x22cda4: 0x92950005  lbu         $s5, 0x5($s4)
    ctx->pc = 0x22cda4u;
    SET_GPR_U32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 5)));
    // 0x22cda8: 0x31821  addu        $v1, $zero, $v1
    ctx->pc = 0x22cda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x22cdac: 0x42021  addu        $a0, $zero, $a0
    ctx->pc = 0x22cdacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x22cdb0: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x22cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x22cdb4: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x22cdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x22cdb8: 0x916f0004  lbu         $t7, 0x4($t3)
    ctx->pc = 0x22cdb8u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x22cdbc: 0x992021  addu        $a0, $a0, $t9
    ctx->pc = 0x22cdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    // 0x22cdc0: 0x916e0005  lbu         $t6, 0x5($t3)
    ctx->pc = 0x22cdc0u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 5)));
    // 0x22cdc4: 0x91790006  lbu         $t9, 0x6($t3)
    ctx->pc = 0x22cdc4u;
    SET_GPR_U32(ctx, 25, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x22cdc8: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x22cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x22cdcc: 0x92940006  lbu         $s4, 0x6($s4)
    ctx->pc = 0x22cdccu;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x22cdd0: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x22cdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x22cdd4: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x22cdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x22cdd8: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x22cdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x22cddc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x22cddcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x22cde0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x22cde0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x22cde4: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x22cde4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x22cde8: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x22cde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x22cdec: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x22cdecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x22cdf0: 0x992021  addu        $a0, $a0, $t9
    ctx->pc = 0x22cdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    // 0x22cdf4: 0xa2430001  sb          $v1, 0x1($s2)
    ctx->pc = 0x22cdf4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x22cdf8: 0x41083  sra         $v0, $a0, 2
    ctx->pc = 0x22cdf8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 2));
    // 0x22cdfc: 0xa2420002  sb          $v0, 0x2($s2)
    ctx->pc = 0x22cdfcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x22ce00: 0xa24d0003  sb          $t5, 0x3($s2)
    ctx->pc = 0x22ce00u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 13));
    // 0x22ce04: 0x1580ffdb  bnez        $t4, . + 4 + (-0x25 << 2)
    ctx->pc = 0x22CE04u;
    {
        const bool branch_taken_0x22ce04 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CE04u;
            // 0x22ce08: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ce04) {
            ctx->pc = 0x22CD74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22cd74;
        }
    }
    ctx->pc = 0x22CE0Cu;
label_22ce0c:
    // 0x22ce0c: 0x0  nop
    ctx->pc = 0x22ce0cu;
    // NOP
    // 0x22ce10: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x22ce10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x22ce14: 0xc9102a  slt         $v0, $a2, $t1
    ctx->pc = 0x22ce14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x22ce18: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x22CE18u;
    {
        const bool branch_taken_0x22ce18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CE18u;
            // 0x22ce1c: 0x22a8821  addu        $s1, $s1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ce18) {
            ctx->pc = 0x22CD64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22cd64;
        }
    }
    ctx->pc = 0x22CE20u;
label_22ce20:
    // 0x22ce20: 0x1260003c  beqz        $s3, . + 4 + (0x3C << 2)
    ctx->pc = 0x22CE20u;
    {
        const bool branch_taken_0x22ce20 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ce20) {
            ctx->pc = 0x22CF14u;
            goto label_22cf14;
        }
    }
    ctx->pc = 0x22CE28u;
    // 0x22ce28: 0x8f829468  lw          $v0, -0x6B98($gp)
    ctx->pc = 0x22ce28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939752)));
    // 0x22ce2c: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x22CE2Cu;
    {
        const bool branch_taken_0x22ce2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CE2Cu;
            // 0x22ce30: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ce2c) {
            ctx->pc = 0x22CF14u;
            goto label_22cf14;
        }
    }
    ctx->pc = 0x22CE34u;
    // 0x22ce34: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x22ce34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ce38: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x22CE38u;
    SET_GPR_U32(ctx, 31, 0x22CE40u);
    ctx->pc = 0x22CE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CE38u;
            // 0x22ce3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CE40u; }
        if (ctx->pc != 0x22CE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CE40u; }
        if (ctx->pc != 0x22CE40u) { return; }
    }
    ctx->pc = 0x22CE40u;
label_22ce40:
    // 0x22ce40: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x22CE40u;
    SET_GPR_U32(ctx, 31, 0x22CE48u);
    ctx->pc = 0x22CE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CE40u;
            // 0x22ce44: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CE48u; }
        if (ctx->pc != 0x22CE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CE48u; }
        if (ctx->pc != 0x22CE48u) { return; }
    }
    ctx->pc = 0x22CE48u;
label_22ce48:
    // 0x22ce48: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x22ce48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x22ce4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22ce4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ce50: 0xc04d104  jal         func_134410
    ctx->pc = 0x22CE50u;
    SET_GPR_U32(ctx, 31, 0x22CE58u);
    ctx->pc = 0x22CE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CE50u;
            // 0x22ce54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CE58u; }
        if (ctx->pc != 0x22CE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CE58u; }
        if (ctx->pc != 0x22CE58u) { return; }
    }
    ctx->pc = 0x22CE58u;
label_22ce58:
    // 0x22ce58: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x22ce58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x22ce5c: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x22CE5Cu;
    SET_GPR_U32(ctx, 31, 0x22CE64u);
    ctx->pc = 0x22CE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CE5Cu;
            // 0x22ce60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CE64u; }
        if (ctx->pc != 0x22CE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CE64u; }
        if (ctx->pc != 0x22CE64u) { return; }
    }
    ctx->pc = 0x22CE64u;
label_22ce64:
    // 0x22ce64: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x22ce64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x22ce68: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x22CE68u;
    SET_GPR_U32(ctx, 31, 0x22CE70u);
    ctx->pc = 0x22CE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CE68u;
            // 0x22ce6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CE70u; }
        if (ctx->pc != 0x22CE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CE70u; }
        if (ctx->pc != 0x22CE70u) { return; }
    }
    ctx->pc = 0x22CE70u;
label_22ce70:
    // 0x22ce70: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x22ce70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x22ce74: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x22CE74u;
    SET_GPR_U32(ctx, 31, 0x22CE7Cu);
    ctx->pc = 0x22CE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CE74u;
            // 0x22ce78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CE7Cu; }
        if (ctx->pc != 0x22CE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CE7Cu; }
        if (ctx->pc != 0x22CE7Cu) { return; }
    }
    ctx->pc = 0x22CE7Cu;
label_22ce7c:
    // 0x22ce7c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x22ce7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x22ce80: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x22CE80u;
    SET_GPR_U32(ctx, 31, 0x22CE88u);
    ctx->pc = 0x22CE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CE80u;
            // 0x22ce84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CE88u; }
        if (ctx->pc != 0x22CE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CE88u; }
        if (ctx->pc != 0x22CE88u) { return; }
    }
    ctx->pc = 0x22CE88u;
label_22ce88:
    // 0x22ce88: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x22ce88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x22ce8c: 0xc04d424  jal         func_135090
    ctx->pc = 0x22CE8Cu;
    SET_GPR_U32(ctx, 31, 0x22CE94u);
    ctx->pc = 0x22CE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CE8Cu;
            // 0x22ce90: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CE94u; }
        if (ctx->pc != 0x22CE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CE94u; }
        if (ctx->pc != 0x22CE94u) { return; }
    }
    ctx->pc = 0x22CE94u;
label_22ce94:
    // 0x22ce94: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x22ce94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x22ce98: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x22CE98u;
    SET_GPR_U32(ctx, 31, 0x22CEA0u);
    ctx->pc = 0x22CE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CE98u;
            // 0x22ce9c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CEA0u; }
        if (ctx->pc != 0x22CEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CEA0u; }
        if (ctx->pc != 0x22CEA0u) { return; }
    }
    ctx->pc = 0x22CEA0u;
label_22cea0:
    // 0x22cea0: 0x8f859468  lw          $a1, -0x6B98($gp)
    ctx->pc = 0x22cea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939752)));
    // 0x22cea4: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x22CEA4u;
    SET_GPR_U32(ctx, 31, 0x22CEACu);
    ctx->pc = 0x22CEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CEA4u;
            // 0x22cea8: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CEACu; }
        if (ctx->pc != 0x22CEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CEACu; }
        if (ctx->pc != 0x22CEACu) { return; }
    }
    ctx->pc = 0x22CEACu;
label_22ceac:
    // 0x22ceac: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x22ceacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x22ceb0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x22ceb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x22ceb4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x22ceb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ceb8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x22ceb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cebc: 0xc04d320  jal         func_134C80
    ctx->pc = 0x22CEBCu;
    SET_GPR_U32(ctx, 31, 0x22CEC4u);
    ctx->pc = 0x22CEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CEBCu;
            // 0x22cec0: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CEC4u; }
        if (ctx->pc != 0x22CEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CEC4u; }
        if (ctx->pc != 0x22CEC4u) { return; }
    }
    ctx->pc = 0x22CEC4u;
label_22cec4:
    // 0x22cec4: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x22cec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x22cec8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22cec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cecc: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x22CECCu;
    SET_GPR_U32(ctx, 31, 0x22CED4u);
    ctx->pc = 0x22CED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CECCu;
            // 0x22ced0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CED4u; }
        if (ctx->pc != 0x22CED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CED4u; }
        if (ctx->pc != 0x22CED4u) { return; }
    }
    ctx->pc = 0x22CED4u;
label_22ced4:
    // 0x22ced4: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x22ced4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x22ced8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22ced8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cedc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22cedcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cee0: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x22CEE0u;
    SET_GPR_U32(ctx, 31, 0x22CEE8u);
    ctx->pc = 0x22CEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CEE0u;
            // 0x22cee4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CEE8u; }
        if (ctx->pc != 0x22CEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CEE8u; }
        if (ctx->pc != 0x22CEE8u) { return; }
    }
    ctx->pc = 0x22CEE8u;
label_22cee8:
    // 0x22cee8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x22cee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ceec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22ceecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cef0: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x22CEF0u;
    SET_GPR_U32(ctx, 31, 0x22CEF8u);
    ctx->pc = 0x22CEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CEF0u;
            // 0x22cef4: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CEF8u; }
        if (ctx->pc != 0x22CEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CEF8u; }
        if (ctx->pc != 0x22CEF8u) { return; }
    }
    ctx->pc = 0x22CEF8u;
label_22cef8:
    // 0x22cef8: 0x8f858780  lw          $a1, -0x7880($gp)
    ctx->pc = 0x22cef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x22cefc: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x22cefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x22cf00: 0x8f868784  lw          $a2, -0x787C($gp)
    ctx->pc = 0x22cf00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x22cf04: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x22CF04u;
    SET_GPR_U32(ctx, 31, 0x22CF0Cu);
    ctx->pc = 0x22CF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CF04u;
            // 0x22cf08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CF0Cu; }
        if (ctx->pc != 0x22CF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CF0Cu; }
        if (ctx->pc != 0x22CF0Cu) { return; }
    }
    ctx->pc = 0x22CF0Cu;
label_22cf0c:
    // 0x22cf0c: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x22CF0Cu;
    SET_GPR_U32(ctx, 31, 0x22CF14u);
    ctx->pc = 0x22CF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CF0Cu;
            // 0x22cf10: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CF14u; }
        if (ctx->pc != 0x22CF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CF14u; }
        if (ctx->pc != 0x22CF14u) { return; }
    }
    ctx->pc = 0x22CF14u;
label_22cf14:
    // 0x22cf14: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x22cf14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22cf18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22cf18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22cf1c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x22cf1cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22cf20: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x22cf20u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22cf24: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x22cf24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22cf28: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x22cf28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22cf2c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x22cf2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22cf30: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x22cf30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22cf34: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x22cf34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22cf38: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22cf38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22cf3c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22cf3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22cf40: 0x3e00008  jr          $ra
    ctx->pc = 0x22CF40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CF40u;
            // 0x22cf44: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22CF48u;
}
