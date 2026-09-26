#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_FISHINGTOURNAMENT_ETC__FP12RS_STACKDATAi
// Address: 0x26dbc0 - 0x26dfd8
void ps2__GET_FISHINGTOURNAMENT_ETC__FP12RS_STACKDATAi_0x26dbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_FISHINGTOURNAMENT_ETC__FP12RS_STACKDATAi_0x26dbc0");
#endif

    switch (ctx->pc) {
        case 0x26dbf0u: goto label_26dbf0;
        case 0x26dc2cu: goto label_26dc2c;
        case 0x26dc48u: goto label_26dc48;
        case 0x26dc50u: goto label_26dc50;
        case 0x26dc64u: goto label_26dc64;
        case 0x26dc74u: goto label_26dc74;
        case 0x26dcb0u: goto label_26dcb0;
        case 0x26dcb8u: goto label_26dcb8;
        case 0x26dcc8u: goto label_26dcc8;
        case 0x26dcd8u: goto label_26dcd8;
        case 0x26dd04u: goto label_26dd04;
        case 0x26dd1cu: goto label_26dd1c;
        case 0x26dd50u: goto label_26dd50;
        case 0x26dd68u: goto label_26dd68;
        case 0x26dd80u: goto label_26dd80;
        case 0x26dd98u: goto label_26dd98;
        case 0x26ddb0u: goto label_26ddb0;
        case 0x26ddc8u: goto label_26ddc8;
        case 0x26dde0u: goto label_26dde0;
        case 0x26ddf8u: goto label_26ddf8;
        case 0x26de10u: goto label_26de10;
        case 0x26de28u: goto label_26de28;
        case 0x26de48u: goto label_26de48;
        case 0x26de54u: goto label_26de54;
        case 0x26de6cu: goto label_26de6c;
        case 0x26de88u: goto label_26de88;
        case 0x26de90u: goto label_26de90;
        case 0x26deb8u: goto label_26deb8;
        case 0x26dec8u: goto label_26dec8;
        case 0x26ded8u: goto label_26ded8;
        case 0x26def8u: goto label_26def8;
        case 0x26df04u: goto label_26df04;
        case 0x26df14u: goto label_26df14;
        case 0x26df2cu: goto label_26df2c;
        case 0x26df38u: goto label_26df38;
        case 0x26df48u: goto label_26df48;
        case 0x26df60u: goto label_26df60;
        case 0x26df6cu: goto label_26df6c;
        case 0x26df7cu: goto label_26df7c;
        case 0x26df98u: goto label_26df98;
        default: break;
    }

    ctx->pc = 0x26dbc0u;

    // 0x26dbc0: 0x27bdfd00  addiu       $sp, $sp, -0x300
    ctx->pc = 0x26dbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966528));
    // 0x26dbc4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x26dbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x26dbc8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x26dbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x26dbcc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x26dbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x26dbd0: 0x24960008  addiu       $s6, $a0, 0x8
    ctx->pc = 0x26dbd0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26dbd4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x26dbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x26dbd8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x26dbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x26dbdc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x26dbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x26dbe0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x26dbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x26dbe4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26dbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26dbe8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26DBE8u;
    SET_GPR_U32(ctx, 31, 0x26DBF0u);
    ctx->pc = 0x26DBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DBE8u;
            // 0x26dbec: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DBF0u; }
        if (ctx->pc != 0x26DBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DBF0u; }
        if (ctx->pc != 0x26DBF0u) { return; }
    }
    ctx->pc = 0x26DBF0u;
label_26dbf0:
    // 0x26dbf0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x26dbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26dbf4: 0x104300df  beq         $v0, $v1, . + 4 + (0xDF << 2)
    ctx->pc = 0x26DBF4u;
    {
        const bool branch_taken_0x26dbf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x26DBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DBF4u;
            // 0x26dbf8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dbf4) {
            ctx->pc = 0x26DF74u;
            goto label_26df74;
        }
    }
    ctx->pc = 0x26DBFCu;
    // 0x26dbfc: 0x104300d0  beq         $v0, $v1, . + 4 + (0xD0 << 2)
    ctx->pc = 0x26DBFCu;
    {
        const bool branch_taken_0x26dbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x26DC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DBFCu;
            // 0x26dc00: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dbfc) {
            ctx->pc = 0x26DF40u;
            goto label_26df40;
        }
    }
    ctx->pc = 0x26DC04u;
    // 0x26dc04: 0x104300c1  beq         $v0, $v1, . + 4 + (0xC1 << 2)
    ctx->pc = 0x26DC04u;
    {
        const bool branch_taken_0x26dc04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x26DC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DC04u;
            // 0x26dc08: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dc04) {
            ctx->pc = 0x26DF0Cu;
            goto label_26df0c;
        }
    }
    ctx->pc = 0x26DC0Cu;
    // 0x26dc0c: 0x104300ac  beq         $v0, $v1, . + 4 + (0xAC << 2)
    ctx->pc = 0x26DC0Cu;
    {
        const bool branch_taken_0x26dc0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x26DC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DC0Cu;
            // 0x26dc10: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dc0c) {
            ctx->pc = 0x26DEC0u;
            goto label_26dec0;
        }
    }
    ctx->pc = 0x26DC14u;
    // 0x26dc14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26DC14u;
    {
        const bool branch_taken_0x26dc14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dc14) {
            ctx->pc = 0x26DC24u;
            goto label_26dc24;
        }
    }
    ctx->pc = 0x26DC1Cu;
    // 0x26dc1c: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x26DC1Cu;
    {
        const bool branch_taken_0x26dc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DC1Cu;
            // 0x26dc20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dc1c) {
            ctx->pc = 0x26DFA0u;
            goto label_26dfa0;
        }
    }
    ctx->pc = 0x26DC24u;
label_26dc24:
    // 0x26dc24: 0xc065b08  jal         func_196C20
    ctx->pc = 0x26DC24u;
    SET_GPR_U32(ctx, 31, 0x26DC2Cu);
    ctx->pc = 0x196C20u;
    if (runtime->hasFunction(0x196C20u)) {
        auto targetFn = runtime->lookupFunction(0x196C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DC2Cu; }
        if (ctx->pc != 0x26DC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishTournament__Fv_0x196c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DC2Cu; }
        if (ctx->pc != 0x26DC2Cu) { return; }
    }
    ctx->pc = 0x26DC2Cu;
label_26dc2c:
    // 0x26dc2c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x26dc2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dc30: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x26DC30u;
    {
        const bool branch_taken_0x26dc30 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DC30u;
            // 0x26dc34: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dc30) {
            ctx->pc = 0x26DC40u;
            goto label_26dc40;
        }
    }
    ctx->pc = 0x26DC38u;
    // 0x26dc38: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x26DC38u;
    {
        const bool branch_taken_0x26dc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DC38u;
            // 0x26dc3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dc38) {
            ctx->pc = 0x26DFACu;
            goto label_26dfac;
        }
    }
    ctx->pc = 0x26DC40u;
label_26dc40:
    // 0x26dc40: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26dc40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dc44: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26dc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26dc48:
    // 0x26dc48: 0xc066bf8  jal         func_19AFE0
    ctx->pc = 0x26DC48u;
    SET_GPR_U32(ctx, 31, 0x26DC50u);
    ctx->pc = 0x26DC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DC48u;
            // 0x26dc4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19AFE0u;
    if (runtime->hasFunction(0x19AFE0u)) {
        auto targetFn = runtime->lookupFunction(0x19AFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DC50u; }
        if (ctx->pc != 0x26DC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRecord__18CFishingTournamentFi_0x19afe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DC50u; }
        if (ctx->pc != 0x26DC50u) { return; }
    }
    ctx->pc = 0x26DC50u;
label_26dc50:
    // 0x26dc50: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26dc50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dc54: 0x12400085  beqz        $s2, . + 4 + (0x85 << 2)
    ctx->pc = 0x26DC54u;
    {
        const bool branch_taken_0x26dc54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dc54) {
            ctx->pc = 0x26DE6Cu;
            goto label_26de6c;
        }
    }
    ctx->pc = 0x26DC5Cu;
    // 0x26dc5c: 0xc065810  jal         func_196040
    ctx->pc = 0x26DC5Cu;
    SET_GPR_U32(ctx, 31, 0x26DC64u);
    ctx->pc = 0x26DC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DC5Cu;
            // 0x26dc60: 0x86440000  lh          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DC64u; }
        if (ctx->pc != 0x26DC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DC64u; }
        if (ctx->pc != 0x26DC64u) { return; }
    }
    ctx->pc = 0x26DC64u;
label_26dc64:
    // 0x26dc64: 0x10400081  beqz        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x26DC64u;
    {
        const bool branch_taken_0x26dc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DC64u;
            // 0x26dc68: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dc64) {
            ctx->pc = 0x26DE6Cu;
            goto label_26de6c;
        }
    }
    ctx->pc = 0x26DC6Cu;
    // 0x26dc6c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x26DC6Cu;
    SET_GPR_U32(ctx, 31, 0x26DC74u);
    ctx->pc = 0x26DC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DC6Cu;
            // 0x26dc70: 0x27a40290  addiu       $a0, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DC74u; }
        if (ctx->pc != 0x26DC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DC74u; }
        if (ctx->pc != 0x26DC74u) { return; }
    }
    ctx->pc = 0x26DC74u;
label_26dc74:
    // 0x26dc74: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x26dc74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x26dc78: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x26dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x26dc7c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x26dc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x26dc80: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x26dc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x26dc84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26dc84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26dc88: 0x24a5c9c0  addiu       $a1, $a1, -0x3640
    ctx->pc = 0x26dc88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953408));
    // 0x26dc8c: 0x27a60290  addiu       $a2, $sp, 0x290
    ctx->pc = 0x26dc8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x26dc90: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x26dc90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26dc94: 0x86520004  lh          $s2, 0x4($s2)
    ctx->pc = 0x26dc94u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x26dc98: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x26dc98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x26dc9c: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x26dc9cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x26dca0: 0x0  nop
    ctx->pc = 0x26dca0u;
    // NOP
    // 0x26dca4: 0x0  nop
    ctx->pc = 0x26dca4u;
    // NOP
    // 0x26dca8: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x26DCA8u;
    SET_GPR_U32(ctx, 31, 0x26DCB0u);
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DCB0u; }
        if (ctx->pc != 0x26DCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DCB0u; }
        if (ctx->pc != 0x26DCB0u) { return; }
    }
    ctx->pc = 0x26DCB0u;
label_26dcb0:
    // 0x26dcb0: 0xc04a422  jal         func_129088
    ctx->pc = 0x26DCB0u;
    SET_GPR_U32(ctx, 31, 0x26DCB8u);
    ctx->pc = 0x26DCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DCB0u;
            // 0x26dcb4: 0x27a40290  addiu       $a0, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DCB8u; }
        if (ctx->pc != 0x26DCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DCB8u; }
        if (ctx->pc != 0x26DCB8u) { return; }
    }
    ctx->pc = 0x26DCB8u;
label_26dcb8:
    // 0x26dcb8: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x26dcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x26dcbc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x26dcbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dcc0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26DCC0u;
    {
        const bool branch_taken_0x26dcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DCC0u;
            // 0x26dcc4: 0x629823  subu        $s3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dcc0) {
            ctx->pc = 0x26DCDCu;
            goto label_26dcdc;
        }
    }
    ctx->pc = 0x26DCC8u;
label_26dcc8:
    // 0x26dcc8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x26dcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x26dccc: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x26dcccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x26dcd0: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x26DCD0u;
    SET_GPR_U32(ctx, 31, 0x26DCD8u);
    ctx->pc = 0x26DCD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DCD0u;
            // 0x26dcd4: 0x24a5c9c8  addiu       $a1, $a1, -0x3638 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DCD8u; }
        if (ctx->pc != 0x26DCD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DCD8u; }
        if (ctx->pc != 0x26DCD8u) { return; }
    }
    ctx->pc = 0x26DCD8u;
label_26dcd8:
    // 0x26dcd8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x26dcd8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_26dcdc:
    // 0x26dcdc: 0x0  nop
    ctx->pc = 0x26dcdcu;
    // NOP
    // 0x26dce0: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x26DCE0u;
    {
        const bool branch_taken_0x26dce0 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x26DCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DCE0u;
            // 0x26dce4: 0x131043  sra         $v0, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dce0) {
            ctx->pc = 0x26DCF0u;
            goto label_26dcf0;
        }
    }
    ctx->pc = 0x26DCE8u;
    // 0x26dce8: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x26dce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x26dcec: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x26dcecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_26dcf0:
    // 0x26dcf0: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x26dcf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26dcf4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x26DCF4u;
    {
        const bool branch_taken_0x26dcf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DCF4u;
            // 0x26dcf8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dcf4) {
            ctx->pc = 0x26DCC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26dcc8;
        }
    }
    ctx->pc = 0x26DCFCu;
    // 0x26dcfc: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x26DCFCu;
    SET_GPR_U32(ctx, 31, 0x26DD04u);
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DD04u; }
        if (ctx->pc != 0x26DD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DD04u; }
        if (ctx->pc != 0x26DD04u) { return; }
    }
    ctx->pc = 0x26DD04u;
label_26dd04:
    // 0x26dd04: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x26dd04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x26dd08: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26dd08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dd0c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x26dd0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dd10: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x26dd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x26dd14: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x26DD14u;
    SET_GPR_U32(ctx, 31, 0x26DD1Cu);
    ctx->pc = 0x26DD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DD14u;
            // 0x26dd18: 0x24a5c9d0  addiu       $a1, $a1, -0x3630 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DD1Cu; }
        if (ctx->pc != 0x26DD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DD1Cu; }
        if (ctx->pc != 0x26DD1Cu) { return; }
    }
    ctx->pc = 0x26DD1Cu;
label_26dd1c:
    // 0x26dd1c: 0x2e01000a  sltiu       $at, $s0, 0xA
    ctx->pc = 0x26dd1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x26dd20: 0x10200043  beqz        $at, . + 4 + (0x43 << 2)
    ctx->pc = 0x26DD20u;
    {
        const bool branch_taken_0x26dd20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DD20u;
            // 0x26dd24: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dd20) {
            ctx->pc = 0x26DE30u;
            goto label_26de30;
        }
    }
    ctx->pc = 0x26DD28u;
    // 0x26dd28: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x26dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x26dd2c: 0x2463ca30  addiu       $v1, $v1, -0x35D0
    ctx->pc = 0x26dd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953520));
    // 0x26dd30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26dd34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26dd38: 0x400008  jr          $v0
    ctx->pc = 0x26DD38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26DD40u: goto label_26dd40;
            case 0x26DD58u: goto label_26dd58;
            case 0x26DD70u: goto label_26dd70;
            case 0x26DD88u: goto label_26dd88;
            case 0x26DDA0u: goto label_26dda0;
            case 0x26DDB8u: goto label_26ddb8;
            case 0x26DDD0u: goto label_26ddd0;
            case 0x26DDE8u: goto label_26dde8;
            case 0x26DE00u: goto label_26de00;
            case 0x26DE18u: goto label_26de18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26DD40u;
label_26dd40:
    // 0x26dd40: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x26dd40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x26dd44: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x26dd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26dd48: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x26DD48u;
    SET_GPR_U32(ctx, 31, 0x26DD50u);
    ctx->pc = 0x26DD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DD48u;
            // 0x26dd4c: 0x24a5c9e0  addiu       $a1, $a1, -0x3620 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DD50u; }
        if (ctx->pc != 0x26DD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DD50u; }
        if (ctx->pc != 0x26DD50u) { return; }
    }
    ctx->pc = 0x26DD50u;
label_26dd50:
    // 0x26dd50: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x26DD50u;
    {
        const bool branch_taken_0x26dd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DD50u;
            // 0x26dd54: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dd50) {
            ctx->pc = 0x26DE3Cu;
            goto label_26de3c;
        }
    }
    ctx->pc = 0x26DD58u;
label_26dd58:
    // 0x26dd58: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x26dd58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x26dd5c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x26dd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26dd60: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x26DD60u;
    SET_GPR_U32(ctx, 31, 0x26DD68u);
    ctx->pc = 0x26DD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DD60u;
            // 0x26dd64: 0x24a5c9e8  addiu       $a1, $a1, -0x3618 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DD68u; }
        if (ctx->pc != 0x26DD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DD68u; }
        if (ctx->pc != 0x26DD68u) { return; }
    }
    ctx->pc = 0x26DD68u;
label_26dd68:
    // 0x26dd68: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x26DD68u;
    {
        const bool branch_taken_0x26dd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dd68) {
            ctx->pc = 0x26DE38u;
            goto label_26de38;
        }
    }
    ctx->pc = 0x26DD70u;
label_26dd70:
    // 0x26dd70: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x26dd70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x26dd74: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x26dd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26dd78: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x26DD78u;
    SET_GPR_U32(ctx, 31, 0x26DD80u);
    ctx->pc = 0x26DD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DD78u;
            // 0x26dd7c: 0x24a5c9f0  addiu       $a1, $a1, -0x3610 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DD80u; }
        if (ctx->pc != 0x26DD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DD80u; }
        if (ctx->pc != 0x26DD80u) { return; }
    }
    ctx->pc = 0x26DD80u;
label_26dd80:
    // 0x26dd80: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x26DD80u;
    {
        const bool branch_taken_0x26dd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dd80) {
            ctx->pc = 0x26DE38u;
            goto label_26de38;
        }
    }
    ctx->pc = 0x26DD88u;
label_26dd88:
    // 0x26dd88: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x26dd88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x26dd8c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x26dd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26dd90: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x26DD90u;
    SET_GPR_U32(ctx, 31, 0x26DD98u);
    ctx->pc = 0x26DD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DD90u;
            // 0x26dd94: 0x24a5c9f8  addiu       $a1, $a1, -0x3608 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DD98u; }
        if (ctx->pc != 0x26DD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DD98u; }
        if (ctx->pc != 0x26DD98u) { return; }
    }
    ctx->pc = 0x26DD98u;
label_26dd98:
    // 0x26dd98: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x26DD98u;
    {
        const bool branch_taken_0x26dd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dd98) {
            ctx->pc = 0x26DE38u;
            goto label_26de38;
        }
    }
    ctx->pc = 0x26DDA0u;
label_26dda0:
    // 0x26dda0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x26dda0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x26dda4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x26dda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26dda8: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x26DDA8u;
    SET_GPR_U32(ctx, 31, 0x26DDB0u);
    ctx->pc = 0x26DDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DDA8u;
            // 0x26ddac: 0x24a5ca00  addiu       $a1, $a1, -0x3600 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DDB0u; }
        if (ctx->pc != 0x26DDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DDB0u; }
        if (ctx->pc != 0x26DDB0u) { return; }
    }
    ctx->pc = 0x26DDB0u;
label_26ddb0:
    // 0x26ddb0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x26DDB0u;
    {
        const bool branch_taken_0x26ddb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ddb0) {
            ctx->pc = 0x26DE38u;
            goto label_26de38;
        }
    }
    ctx->pc = 0x26DDB8u;
label_26ddb8:
    // 0x26ddb8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x26ddb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x26ddbc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x26ddbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26ddc0: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x26DDC0u;
    SET_GPR_U32(ctx, 31, 0x26DDC8u);
    ctx->pc = 0x26DDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DDC0u;
            // 0x26ddc4: 0x24a5ca08  addiu       $a1, $a1, -0x35F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DDC8u; }
        if (ctx->pc != 0x26DDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DDC8u; }
        if (ctx->pc != 0x26DDC8u) { return; }
    }
    ctx->pc = 0x26DDC8u;
label_26ddc8:
    // 0x26ddc8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x26DDC8u;
    {
        const bool branch_taken_0x26ddc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ddc8) {
            ctx->pc = 0x26DE38u;
            goto label_26de38;
        }
    }
    ctx->pc = 0x26DDD0u;
label_26ddd0:
    // 0x26ddd0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x26ddd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x26ddd4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x26ddd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26ddd8: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x26DDD8u;
    SET_GPR_U32(ctx, 31, 0x26DDE0u);
    ctx->pc = 0x26DDDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DDD8u;
            // 0x26dddc: 0x24a5ca10  addiu       $a1, $a1, -0x35F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DDE0u; }
        if (ctx->pc != 0x26DDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DDE0u; }
        if (ctx->pc != 0x26DDE0u) { return; }
    }
    ctx->pc = 0x26DDE0u;
label_26dde0:
    // 0x26dde0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x26DDE0u;
    {
        const bool branch_taken_0x26dde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dde0) {
            ctx->pc = 0x26DE38u;
            goto label_26de38;
        }
    }
    ctx->pc = 0x26DDE8u;
label_26dde8:
    // 0x26dde8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x26dde8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x26ddec: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x26ddecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26ddf0: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x26DDF0u;
    SET_GPR_U32(ctx, 31, 0x26DDF8u);
    ctx->pc = 0x26DDF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DDF0u;
            // 0x26ddf4: 0x24a5ca18  addiu       $a1, $a1, -0x35E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DDF8u; }
        if (ctx->pc != 0x26DDF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DDF8u; }
        if (ctx->pc != 0x26DDF8u) { return; }
    }
    ctx->pc = 0x26DDF8u;
label_26ddf8:
    // 0x26ddf8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x26DDF8u;
    {
        const bool branch_taken_0x26ddf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ddf8) {
            ctx->pc = 0x26DE38u;
            goto label_26de38;
        }
    }
    ctx->pc = 0x26DE00u;
label_26de00:
    // 0x26de00: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x26de00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x26de04: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x26de04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26de08: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x26DE08u;
    SET_GPR_U32(ctx, 31, 0x26DE10u);
    ctx->pc = 0x26DE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DE08u;
            // 0x26de0c: 0x24a5ca20  addiu       $a1, $a1, -0x35E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DE10u; }
        if (ctx->pc != 0x26DE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DE10u; }
        if (ctx->pc != 0x26DE10u) { return; }
    }
    ctx->pc = 0x26DE10u;
label_26de10:
    // 0x26de10: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26DE10u;
    {
        const bool branch_taken_0x26de10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26de10) {
            ctx->pc = 0x26DE38u;
            goto label_26de38;
        }
    }
    ctx->pc = 0x26DE18u;
label_26de18:
    // 0x26de18: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x26de18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x26de1c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x26de1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26de20: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x26DE20u;
    SET_GPR_U32(ctx, 31, 0x26DE28u);
    ctx->pc = 0x26DE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DE20u;
            // 0x26de24: 0x24a5ca28  addiu       $a1, $a1, -0x35D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DE28u; }
        if (ctx->pc != 0x26DE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DE28u; }
        if (ctx->pc != 0x26DE28u) { return; }
    }
    ctx->pc = 0x26DE28u;
label_26de28:
    // 0x26de28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26DE28u;
    {
        const bool branch_taken_0x26de28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26de28) {
            ctx->pc = 0x26DE38u;
            goto label_26de38;
        }
    }
    ctx->pc = 0x26DE30u;
label_26de30:
    // 0x26de30: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x26DE30u;
    {
        const bool branch_taken_0x26de30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DE30u;
            // 0x26de34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de30) {
            ctx->pc = 0x26DFACu;
            goto label_26dfac;
        }
    }
    ctx->pc = 0x26DE38u;
label_26de38:
    // 0x26de38: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x26de38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_26de3c:
    // 0x26de3c: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x26de3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x26de40: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x26DE40u;
    SET_GPR_U32(ctx, 31, 0x26DE48u);
    ctx->pc = 0x26DE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DE40u;
            // 0x26de44: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DE48u; }
        if (ctx->pc != 0x26DE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DE48u; }
        if (ctx->pc != 0x26DE48u) { return; }
    }
    ctx->pc = 0x26DE48u;
label_26de48:
    // 0x26de48: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x26de48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26de4c: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x26DE4Cu;
    SET_GPR_U32(ctx, 31, 0x26DE54u);
    ctx->pc = 0x26DE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DE4Cu;
            // 0x26de50: 0x27a502d0  addiu       $a1, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DE54u; }
        if (ctx->pc != 0x26DE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DE54u; }
        if (ctx->pc != 0x26DE54u) { return; }
    }
    ctx->pc = 0x26DE54u;
label_26de54:
    // 0x26de54: 0x2a210009  slti        $at, $s1, 0x9
    ctx->pc = 0x26de54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x26de58: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x26DE58u;
    {
        const bool branch_taken_0x26de58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DE58u;
            // 0x26de5c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de58) {
            ctx->pc = 0x26DE6Cu;
            goto label_26de6c;
        }
    }
    ctx->pc = 0x26DE60u;
    // 0x26de60: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x26de60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26de64: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x26DE64u;
    SET_GPR_U32(ctx, 31, 0x26DE6Cu);
    ctx->pc = 0x26DE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DE64u;
            // 0x26de68: 0x24a5c980  addiu       $a1, $a1, -0x3680 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DE6Cu; }
        if (ctx->pc != 0x26DE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DE6Cu; }
        if (ctx->pc != 0x26DE6Cu) { return; }
    }
    ctx->pc = 0x26DE6Cu;
label_26de6c:
    // 0x26de6c: 0x0  nop
    ctx->pc = 0x26de6cu;
    // NOP
    // 0x26de70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x26de70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x26de74: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x26de74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x26de78: 0x1440ff73  bnez        $v0, . + 4 + (-0x8D << 2)
    ctx->pc = 0x26DE78u;
    {
        const bool branch_taken_0x26de78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DE78u;
            // 0x26de7c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de78) {
            ctx->pc = 0x26DC48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26dc48;
        }
    }
    ctx->pc = 0x26DE80u;
    // 0x26de80: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26DE80u;
    SET_GPR_U32(ctx, 31, 0x26DE88u);
    ctx->pc = 0x26DE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DE80u;
            // 0x26de84: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DE88u; }
        if (ctx->pc != 0x26DE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DE88u; }
        if (ctx->pc != 0x26DE88u) { return; }
    }
    ctx->pc = 0x26DE88u;
label_26de88:
    // 0x26de88: 0xc09b1b4  jal         func_26C6D0
    ctx->pc = 0x26DE88u;
    SET_GPR_U32(ctx, 31, 0x26DE90u);
    ctx->pc = 0x26DE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DE88u;
            // 0x26de8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C6D0u;
    if (runtime->hasFunction(0x26C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x26C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DE90u; }
        if (ctx->pc != 0x26DE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMes__Fi_0x26c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DE90u; }
        if (ctx->pc != 0x26DE90u) { return; }
    }
    ctx->pc = 0x26DE90u;
label_26de90:
    // 0x26de90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26DE90u;
    {
        const bool branch_taken_0x26de90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DE90u;
            // 0x26de94: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de90) {
            ctx->pc = 0x26DEA0u;
            goto label_26dea0;
        }
    }
    ctx->pc = 0x26DE98u;
    // 0x26de98: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x26DE98u;
    {
        const bool branch_taken_0x26de98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DE98u;
            // 0x26de9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de98) {
            ctx->pc = 0x26DFACu;
            goto label_26dfac;
        }
    }
    ctx->pc = 0x26DEA0u;
label_26dea0:
    // 0x26dea0: 0x10200041  beqz        $at, . + 4 + (0x41 << 2)
    ctx->pc = 0x26DEA0u;
    {
        const bool branch_taken_0x26dea0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DEA0u;
            // 0x26dea4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dea0) {
            ctx->pc = 0x26DFA8u;
            goto label_26dfa8;
        }
    }
    ctx->pc = 0x26DEA8u;
    // 0x26dea8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x26dea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26deac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26deacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26deb0: 0xc05638c  jal         func_158E30
    ctx->pc = 0x26DEB0u;
    SET_GPR_U32(ctx, 31, 0x26DEB8u);
    ctx->pc = 0x26DEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DEB0u;
            // 0x26deb4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158E30u;
    if (runtime->hasFunction(0x158E30u)) {
        auto targetFn = runtime->lookupFunction(0x158E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DEB8u; }
        if (ctx->pc != 0x26DEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFPcii_0x158e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DEB8u; }
        if (ctx->pc != 0x26DEB8u) { return; }
    }
    ctx->pc = 0x26DEB8u;
label_26deb8:
    // 0x26deb8: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x26DEB8u;
    {
        const bool branch_taken_0x26deb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DEB8u;
            // 0x26debc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26deb8) {
            ctx->pc = 0x26DFACu;
            goto label_26dfac;
        }
    }
    ctx->pc = 0x26DEC0u;
label_26dec0:
    // 0x26dec0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26DEC0u;
    SET_GPR_U32(ctx, 31, 0x26DEC8u);
    ctx->pc = 0x26DEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DEC0u;
            // 0x26dec4: 0x24960008  addiu       $s6, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DEC8u; }
        if (ctx->pc != 0x26DEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DEC8u; }
        if (ctx->pc != 0x26DEC8u) { return; }
    }
    ctx->pc = 0x26DEC8u;
label_26dec8:
    // 0x26dec8: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x26dec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x26decc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26deccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ded0: 0xc086874  jal         func_21A1D0
    ctx->pc = 0x26DED0u;
    SET_GPR_U32(ctx, 31, 0x26DED8u);
    ctx->pc = 0x26DED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DED0u;
            // 0x26ded4: 0x27a602f8  addiu       $a2, $sp, 0x2F8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A1D0u;
    if (runtime->hasFunction(0x21A1D0u)) {
        auto targetFn = runtime->lookupFunction(0x21A1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DED8u; }
        if (ctx->pc != 0x26DED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishPrize__FiiP15FISH_PRIZE_INFO_0x21a1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DED8u; }
        if (ctx->pc != 0x26DED8u) { return; }
    }
    ctx->pc = 0x26DED8u;
label_26ded8:
    // 0x26ded8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26DED8u;
    {
        const bool branch_taken_0x26ded8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DED8u;
            // 0x26dedc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ded8) {
            ctx->pc = 0x26DEE8u;
            goto label_26dee8;
        }
    }
    ctx->pc = 0x26DEE0u;
    // 0x26dee0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x26DEE0u;
    {
        const bool branch_taken_0x26dee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DEE0u;
            // 0x26dee4: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dee0) {
            ctx->pc = 0x26DFB0u;
            goto label_26dfb0;
        }
    }
    ctx->pc = 0x26DEE8u;
label_26dee8:
    // 0x26dee8: 0x8fa502f8  lw          $a1, 0x2F8($sp)
    ctx->pc = 0x26dee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 760)));
    // 0x26deec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26deecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26def0: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26DEF0u;
    SET_GPR_U32(ctx, 31, 0x26DEF8u);
    ctx->pc = 0x26DEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DEF0u;
            // 0x26def4: 0x24960008  addiu       $s6, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DEF8u; }
        if (ctx->pc != 0x26DEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DEF8u; }
        if (ctx->pc != 0x26DEF8u) { return; }
    }
    ctx->pc = 0x26DEF8u;
label_26def8:
    // 0x26def8: 0x8fa502fc  lw          $a1, 0x2FC($sp)
    ctx->pc = 0x26def8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 764)));
    // 0x26defc: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26DEFCu;
    SET_GPR_U32(ctx, 31, 0x26DF04u);
    ctx->pc = 0x26DF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DEFCu;
            // 0x26df00: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DF04u; }
        if (ctx->pc != 0x26DF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DF04u; }
        if (ctx->pc != 0x26DF04u) { return; }
    }
    ctx->pc = 0x26DF04u;
label_26df04:
    // 0x26df04: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x26DF04u;
    {
        const bool branch_taken_0x26df04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26df04) {
            ctx->pc = 0x26DFA8u;
            goto label_26dfa8;
        }
    }
    ctx->pc = 0x26DF0Cu;
label_26df0c:
    // 0x26df0c: 0xc065b08  jal         func_196C20
    ctx->pc = 0x26DF0Cu;
    SET_GPR_U32(ctx, 31, 0x26DF14u);
    ctx->pc = 0x196C20u;
    if (runtime->hasFunction(0x196C20u)) {
        auto targetFn = runtime->lookupFunction(0x196C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DF14u; }
        if (ctx->pc != 0x26DF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishTournament__Fv_0x196c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DF14u; }
        if (ctx->pc != 0x26DF14u) { return; }
    }
    ctx->pc = 0x26DF14u;
label_26df14:
    // 0x26df14: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26DF14u;
    {
        const bool branch_taken_0x26df14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DF14u;
            // 0x26df18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df14) {
            ctx->pc = 0x26DF24u;
            goto label_26df24;
        }
    }
    ctx->pc = 0x26DF1Cu;
    // 0x26df1c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x26DF1Cu;
    {
        const bool branch_taken_0x26df1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DF1Cu;
            // 0x26df20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df1c) {
            ctx->pc = 0x26DFACu;
            goto label_26dfac;
        }
    }
    ctx->pc = 0x26DF24u;
label_26df24:
    // 0x26df24: 0xc066be8  jal         func_19AFA0
    ctx->pc = 0x26DF24u;
    SET_GPR_U32(ctx, 31, 0x26DF2Cu);
    ctx->pc = 0x19AFA0u;
    if (runtime->hasFunction(0x19AFA0u)) {
        auto targetFn = runtime->lookupFunction(0x19AFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DF2Cu; }
        if (ctx->pc != 0x26DF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EntryRemain__18CFishingTournamentFv_0x19afa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DF2Cu; }
        if (ctx->pc != 0x26DF2Cu) { return; }
    }
    ctx->pc = 0x26DF2Cu;
label_26df2c:
    // 0x26df2c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26df2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26df30: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26DF30u;
    SET_GPR_U32(ctx, 31, 0x26DF38u);
    ctx->pc = 0x26DF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DF30u;
            // 0x26df34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DF38u; }
        if (ctx->pc != 0x26DF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DF38u; }
        if (ctx->pc != 0x26DF38u) { return; }
    }
    ctx->pc = 0x26DF38u;
label_26df38:
    // 0x26df38: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x26DF38u;
    {
        const bool branch_taken_0x26df38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26df38) {
            ctx->pc = 0x26DFA8u;
            goto label_26dfa8;
        }
    }
    ctx->pc = 0x26DF40u;
label_26df40:
    // 0x26df40: 0xc065b08  jal         func_196C20
    ctx->pc = 0x26DF40u;
    SET_GPR_U32(ctx, 31, 0x26DF48u);
    ctx->pc = 0x196C20u;
    if (runtime->hasFunction(0x196C20u)) {
        auto targetFn = runtime->lookupFunction(0x196C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DF48u; }
        if (ctx->pc != 0x26DF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishTournament__Fv_0x196c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DF48u; }
        if (ctx->pc != 0x26DF48u) { return; }
    }
    ctx->pc = 0x26DF48u;
label_26df48:
    // 0x26df48: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26DF48u;
    {
        const bool branch_taken_0x26df48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DF48u;
            // 0x26df4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df48) {
            ctx->pc = 0x26DF58u;
            goto label_26df58;
        }
    }
    ctx->pc = 0x26DF50u;
    // 0x26df50: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x26DF50u;
    {
        const bool branch_taken_0x26df50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DF50u;
            // 0x26df54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df50) {
            ctx->pc = 0x26DFACu;
            goto label_26dfac;
        }
    }
    ctx->pc = 0x26DF58u;
label_26df58:
    // 0x26df58: 0xc066c48  jal         func_19B120
    ctx->pc = 0x26DF58u;
    SET_GPR_U32(ctx, 31, 0x26DF60u);
    ctx->pc = 0x19B120u;
    if (runtime->hasFunction(0x19B120u)) {
        auto targetFn = runtime->lookupFunction(0x19B120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DF60u; }
        if (ctx->pc != 0x26DF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcTopWeight__18CFishingTournamentFv_0x19b120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DF60u; }
        if (ctx->pc != 0x26DF60u) { return; }
    }
    ctx->pc = 0x26DF60u;
label_26df60:
    // 0x26df60: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26df60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26df64: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26DF64u;
    SET_GPR_U32(ctx, 31, 0x26DF6Cu);
    ctx->pc = 0x26DF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DF64u;
            // 0x26df68: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DF6Cu; }
        if (ctx->pc != 0x26DF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DF6Cu; }
        if (ctx->pc != 0x26DF6Cu) { return; }
    }
    ctx->pc = 0x26DF6Cu;
label_26df6c:
    // 0x26df6c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x26DF6Cu;
    {
        const bool branch_taken_0x26df6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26df6c) {
            ctx->pc = 0x26DFA8u;
            goto label_26dfa8;
        }
    }
    ctx->pc = 0x26DF74u;
label_26df74:
    // 0x26df74: 0xc065b08  jal         func_196C20
    ctx->pc = 0x26DF74u;
    SET_GPR_U32(ctx, 31, 0x26DF7Cu);
    ctx->pc = 0x196C20u;
    if (runtime->hasFunction(0x196C20u)) {
        auto targetFn = runtime->lookupFunction(0x196C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DF7Cu; }
        if (ctx->pc != 0x26DF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishTournament__Fv_0x196c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DF7Cu; }
        if (ctx->pc != 0x26DF7Cu) { return; }
    }
    ctx->pc = 0x26DF7Cu;
label_26df7c:
    // 0x26df7c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26DF7Cu;
    {
        const bool branch_taken_0x26df7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26df7c) {
            ctx->pc = 0x26DF8Cu;
            goto label_26df8c;
        }
    }
    ctx->pc = 0x26DF84u;
    // 0x26df84: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26DF84u;
    {
        const bool branch_taken_0x26df84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DF84u;
            // 0x26df88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df84) {
            ctx->pc = 0x26DFACu;
            goto label_26dfac;
        }
    }
    ctx->pc = 0x26DF8Cu;
label_26df8c:
    // 0x26df8c: 0x84450004  lh          $a1, 0x4($v0)
    ctx->pc = 0x26df8cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26df90: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26DF90u;
    SET_GPR_U32(ctx, 31, 0x26DF98u);
    ctx->pc = 0x26DF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DF90u;
            // 0x26df94: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DF98u; }
        if (ctx->pc != 0x26DF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DF98u; }
        if (ctx->pc != 0x26DF98u) { return; }
    }
    ctx->pc = 0x26DF98u;
label_26df98:
    // 0x26df98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26DF98u;
    {
        const bool branch_taken_0x26df98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26df98) {
            ctx->pc = 0x26DFA8u;
            goto label_26dfa8;
        }
    }
    ctx->pc = 0x26DFA0u;
label_26dfa0:
    // 0x26dfa0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26DFA0u;
    {
        const bool branch_taken_0x26dfa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dfa0) {
            ctx->pc = 0x26DFACu;
            goto label_26dfac;
        }
    }
    ctx->pc = 0x26DFA8u;
label_26dfa8:
    // 0x26dfa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26dfac:
    // 0x26dfac: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x26dfacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_26dfb0:
    // 0x26dfb0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x26dfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26dfb4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x26dfb4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26dfb8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x26dfb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26dfbc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x26dfbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26dfc0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x26dfc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26dfc4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x26dfc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26dfc8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x26dfc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26dfcc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26dfccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26dfd0: 0x3e00008  jr          $ra
    ctx->pc = 0x26DFD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26DFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DFD0u;
            // 0x26dfd4: 0x27bd0300  addiu       $sp, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26DFD8u;
}
