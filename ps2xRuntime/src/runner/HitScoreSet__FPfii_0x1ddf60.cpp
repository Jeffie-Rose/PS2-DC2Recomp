#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: HitScoreSet__FPfii
// Address: 0x1ddf60 - 0x1de080
void HitScoreSet__FPfii_0x1ddf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HitScoreSet__FPfii_0x1ddf60");
#endif

    switch (ctx->pc) {
        case 0x1ddfe0u: goto label_1ddfe0;
        case 0x1de01cu: goto label_1de01c;
        case 0x1de058u: goto label_1de058;
        default: break;
    }

    ctx->pc = 0x1ddf60u;

    // 0x1ddf60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ddf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ddf64: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x1ddf64u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
    // 0x1ddf68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ddf68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ddf6c: 0x3c070035  lui         $a3, 0x35
    ctx->pc = 0x1ddf6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
    // 0x1ddf70: 0x8f898ad0  lw          $t1, -0x7530($gp)
    ctx->pc = 0x1ddf70u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x1ddf74: 0x2508d160  addiu       $t0, $t0, -0x2EA0
    ctx->pc = 0x1ddf74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294955360));
    // 0x1ddf78: 0x83838e68  lb          $v1, -0x7198($gp)
    ctx->pc = 0x1ddf78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938216)));
    // 0x1ddf7c: 0x24e7d180  addiu       $a3, $a3, -0x2E80
    ctx->pc = 0x1ddf7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955392));
    // 0x1ddf80: 0x95100  sll         $t2, $t1, 4
    ctx->pc = 0x1ddf80u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x1ddf84: 0x10a4821  addu        $t1, $t0, $t2
    ctx->pc = 0x1ddf84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x1ddf88: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DDF88u;
    {
        const bool branch_taken_0x1ddf88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDF88u;
            // 0x1ddf8c: 0xea5021  addu        $t2, $a3, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddf88) {
            ctx->pc = 0x1DDF9Cu;
            goto label_1ddf9c;
        }
    }
    ctx->pc = 0x1DDF90u;
    // 0x1ddf90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ddf90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ddf94: 0xaf808e64  sw          $zero, -0x719C($gp)
    ctx->pc = 0x1ddf94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938212), GPR_U32(ctx, 0));
    // 0x1ddf98: 0xa3838e68  sb          $v1, -0x7198($gp)
    ctx->pc = 0x1ddf98u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938216), (uint8_t)GPR_U32(ctx, 3));
label_1ddf9c:
    // 0x1ddf9c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ddf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ddfa0: 0x10a30020  beq         $a1, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1DDFA0u;
    {
        const bool branch_taken_0x1ddfa0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DDFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDFA0u;
            // 0x1ddfa4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddfa0) {
            ctx->pc = 0x1DE024u;
            goto label_1de024;
        }
    }
    ctx->pc = 0x1DDFA8u;
    // 0x1ddfa8: 0x10a3000f  beq         $a1, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1DDFA8u;
    {
        const bool branch_taken_0x1ddfa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ddfa8) {
            ctx->pc = 0x1DDFE8u;
            goto label_1ddfe8;
        }
    }
    ctx->pc = 0x1DDFB0u;
    // 0x1ddfb0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DDFB0u;
    {
        const bool branch_taken_0x1ddfb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDFB0u;
            // 0x1ddfb4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddfb0) {
            ctx->pc = 0x1DDFC0u;
            goto label_1ddfc0;
        }
    }
    ctx->pc = 0x1DDFB8u;
    // 0x1ddfb8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1DDFB8u;
    {
        const bool branch_taken_0x1ddfb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDFB8u;
            // 0x1ddfbc: 0x8f848e64  lw          $a0, -0x719C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddfb8) {
            ctx->pc = 0x1DE05Cu;
            goto label_1de05c;
        }
    }
    ctx->pc = 0x1DDFC0u;
label_1ddfc0:
    // 0x1ddfc0: 0x3c0201ea  lui         $v0, 0x1EA
    ctx->pc = 0x1ddfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
    // 0x1ddfc4: 0x8f848e64  lw          $a0, -0x719C($gp)
    ctx->pc = 0x1ddfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938212)));
    // 0x1ddfc8: 0x2442fae0  addiu       $v0, $v0, -0x520
    ctx->pc = 0x1ddfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965984));
    // 0x1ddfcc: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1ddfccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1ddfd0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ddfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ddfd4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ddfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ddfd8: 0xc072a68  jal         func_1CA9A0
    ctx->pc = 0x1DDFD8u;
    SET_GPR_U32(ctx, 31, 0x1DDFE0u);
    ctx->pc = 0x1DDFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDFD8u;
            // 0x1ddfdc: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA9A0u;
    if (runtime->hasFunction(0x1CA9A0u)) {
        auto targetFn = runtime->lookupFunction(0x1CA9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDFE0u; }
        if (ctx->pc != 0x1DDFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__12CDamageScoreFPfi_0x1ca9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDFE0u; }
        if (ctx->pc != 0x1DDFE0u) { return; }
    }
    ctx->pc = 0x1DDFE0u;
label_1ddfe0:
    // 0x1ddfe0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1DDFE0u;
    {
        const bool branch_taken_0x1ddfe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddfe0) {
            ctx->pc = 0x1DE058u;
            goto label_1de058;
        }
    }
    ctx->pc = 0x1DDFE8u;
label_1ddfe8:
    // 0x1ddfe8: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x1ddfe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1ddfec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ddfecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddff0: 0x8d270004  lw          $a3, 0x4($t1)
    ctx->pc = 0x1ddff0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1ddff4: 0x3c0201ea  lui         $v0, 0x1EA
    ctx->pc = 0x1ddff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
    // 0x1ddff8: 0x8d280008  lw          $t0, 0x8($t1)
    ctx->pc = 0x1ddff8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1ddffc: 0x2442fae0  addiu       $v0, $v0, -0x520
    ctx->pc = 0x1ddffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965984));
    // 0x1de000: 0x8f848e64  lw          $a0, -0x719C($gp)
    ctx->pc = 0x1de000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938212)));
    // 0x1de004: 0x8d29000c  lw          $t1, 0xC($t1)
    ctx->pc = 0x1de004u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x1de008: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1de008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1de00c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1de00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1de010: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1de010u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1de014: 0xc072a94  jal         func_1CAA50
    ctx->pc = 0x1DE014u;
    SET_GPR_U32(ctx, 31, 0x1DE01Cu);
    ctx->pc = 0x1DE018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE014u;
            // 0x1de018: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAA50u;
    if (runtime->hasFunction(0x1CAA50u)) {
        auto targetFn = runtime->lookupFunction(0x1CAA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE01Cu; }
        if (ctx->pc != 0x1DE01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSprite__12CDamageScoreFPfiiii_0x1caa50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE01Cu; }
        if (ctx->pc != 0x1DE01Cu) { return; }
    }
    ctx->pc = 0x1DE01Cu;
label_1de01c:
    // 0x1de01c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1DE01Cu;
    {
        const bool branch_taken_0x1de01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de01c) {
            ctx->pc = 0x1DE058u;
            goto label_1de058;
        }
    }
    ctx->pc = 0x1DE024u;
label_1de024:
    // 0x1de024: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1de024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de028: 0x3c0201ea  lui         $v0, 0x1EA
    ctx->pc = 0x1de028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
    // 0x1de02c: 0x8f848e64  lw          $a0, -0x719C($gp)
    ctx->pc = 0x1de02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938212)));
    // 0x1de030: 0x2442fae0  addiu       $v0, $v0, -0x520
    ctx->pc = 0x1de030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965984));
    // 0x1de034: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x1de034u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1de038: 0x8d470004  lw          $a3, 0x4($t2)
    ctx->pc = 0x1de038u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x1de03c: 0x8d480008  lw          $t0, 0x8($t2)
    ctx->pc = 0x1de03cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x1de040: 0x8d49000c  lw          $t1, 0xC($t2)
    ctx->pc = 0x1de040u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x1de044: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1de044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1de048: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1de048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1de04c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1de04cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1de050: 0xc072a94  jal         func_1CAA50
    ctx->pc = 0x1DE050u;
    SET_GPR_U32(ctx, 31, 0x1DE058u);
    ctx->pc = 0x1DE054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE050u;
            // 0x1de054: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAA50u;
    if (runtime->hasFunction(0x1CAA50u)) {
        auto targetFn = runtime->lookupFunction(0x1CAA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE058u; }
        if (ctx->pc != 0x1DE058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSprite__12CDamageScoreFPfiiii_0x1caa50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE058u; }
        if (ctx->pc != 0x1DE058u) { return; }
    }
    ctx->pc = 0x1DE058u;
label_1de058:
    // 0x1de058: 0x8f848e64  lw          $a0, -0x719C($gp)
    ctx->pc = 0x1de058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938212)));
label_1de05c:
    // 0x1de05c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1de05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1de060: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE060u;
    {
        const bool branch_taken_0x1de060 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1DE064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE060u;
            // 0x1de064: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de060) {
            ctx->pc = 0x1DE070u;
            goto label_1de070;
        }
    }
    ctx->pc = 0x1DE068u;
    // 0x1de068: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DE068u;
    {
        const bool branch_taken_0x1de068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE068u;
            // 0x1de06c: 0xaf808e64  sw          $zero, -0x719C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de068) {
            ctx->pc = 0x1DE074u;
            goto label_1de074;
        }
    }
    ctx->pc = 0x1DE070u;
label_1de070:
    // 0x1de070: 0xaf838e64  sw          $v1, -0x719C($gp)
    ctx->pc = 0x1de070u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938212), GPR_U32(ctx, 3));
label_1de074:
    // 0x1de074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de078: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE078u;
            // 0x1de07c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DE080u;
}
