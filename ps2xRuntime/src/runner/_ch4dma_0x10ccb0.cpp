#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ch4dma
// Address: 0x10ccb0 - 0x10cdb4
void _ch4dma_0x10ccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ch4dma_0x10ccb0");
#endif

    switch (ctx->pc) {
        case 0x10ccfcu: goto label_10ccfc;
        case 0x10cd2cu: goto label_10cd2c;
        case 0x10cd64u: goto label_10cd64;
        case 0x10cd98u: goto label_10cd98;
        default: break;
    }

    ctx->pc = 0x10ccb0u;

    // 0x10ccb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10ccb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10ccb4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10ccb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10ccb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ccb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ccbc: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x10ccbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x10ccc0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10ccc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10ccc4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x10ccc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10ccc8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10ccc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10cccc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10ccccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ccd0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10ccd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10ccd4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10ccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10ccd8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10CCD8u;
    {
        const bool branch_taken_0x10ccd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10CCDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CCD8u;
            // 0x10ccdc: 0x3411ffff  ori         $s1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ccd8) {
            ctx->pc = 0x10CCE8u;
            goto label_10cce8;
        }
    }
    ctx->pc = 0x10CCE0u;
    // 0x10cce0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x10CCE0u;
    {
        const bool branch_taken_0x10cce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CCE0u;
            // 0x10cce4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cce0) {
            ctx->pc = 0x10CDA0u;
            goto label_10cda0;
        }
    }
    ctx->pc = 0x10CCE8u;
label_10cce8:
    // 0x10cce8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x10cce8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10ccec: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x10CCECu;
    {
        const bool branch_taken_0x10ccec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ccec) {
            ctx->pc = 0x10CD5Cu;
            goto label_10cd5c;
        }
    }
    ctx->pc = 0x10CCF4u;
    // 0x10ccf4: 0xc0462f8  jal         func_118BE0
    ctx->pc = 0x10CCF4u;
    SET_GPR_U32(ctx, 31, 0x10CCFCu);
    ctx->pc = 0x118BE0u;
    if (runtime->hasFunction(0x118BE0u)) {
        auto targetFn = runtime->lookupFunction(0x118BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CCFCu; }
        if (ctx->pc != 0x10CCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x118be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CCFCu; }
        if (ctx->pc != 0x10CCFCu) { return; }
    }
    ctx->pc = 0x10CCFCu;
label_10ccfc:
    // 0x10ccfc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x10ccfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10cd00: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10cd00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10cd04: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x10cd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x10cd08: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10cd08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10cd0c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x10cd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x10cd10: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x10cd10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x10cd14: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x10cd14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x10cd18: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10cd18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10cd1c: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x10cd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x10cd20: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x10cd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x10cd24: 0xc04630a  jal         func_118C28
    ctx->pc = 0x10CD24u;
    SET_GPR_U32(ctx, 31, 0x10CD2Cu);
    ctx->pc = 0x10CD28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10CD24u;
            // 0x10cd28: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118C28u;
    if (runtime->hasFunction(0x118C28u)) {
        auto targetFn = runtime->lookupFunction(0x118C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CD2Cu; }
        if (ctx->pc != 0x10CD2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x118c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CD2Cu; }
        if (ctx->pc != 0x10CD2Cu) { return; }
    }
    ctx->pc = 0x10CD2Cu;
label_10cd2c:
    // 0x10cd2c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x10cd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10cd30: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x10cd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x10cd34: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x10cd34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10cd38: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x10cd38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x10cd3c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x10cd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x10cd40: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10cd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10cd44: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10cd44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10cd48: 0xb12823  subu        $a1, $a1, $s1
    ctx->pc = 0x10cd48u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x10cd4c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x10cd4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x10cd50: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x10cd50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x10cd54: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x10CD54u;
    {
        const bool branch_taken_0x10cd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CD54u;
            // 0x10cd58: 0xae040004  sw          $a0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cd54) {
            ctx->pc = 0x10CD9Cu;
            goto label_10cd9c;
        }
    }
    ctx->pc = 0x10CD5Cu;
label_10cd5c:
    // 0x10cd5c: 0xc0462f8  jal         func_118BE0
    ctx->pc = 0x10CD5Cu;
    SET_GPR_U32(ctx, 31, 0x10CD64u);
    ctx->pc = 0x118BE0u;
    if (runtime->hasFunction(0x118BE0u)) {
        auto targetFn = runtime->lookupFunction(0x118BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CD64u; }
        if (ctx->pc != 0x10CD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x118be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CD64u; }
        if (ctx->pc != 0x10CD64u) { return; }
    }
    ctx->pc = 0x10CD64u;
label_10cd64:
    // 0x10cd64: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x10cd64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10cd68: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10cd6c: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x10cd6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x10cd70: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10cd70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10cd74: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x10cd74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x10cd78: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x10cd78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x10cd7c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10cd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10cd80: 0x24050101  addiu       $a1, $zero, 0x101
    ctx->pc = 0x10cd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x10cd84: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x10cd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10cd88: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x10cd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x10cd8c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10cd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x10cd90: 0xc04630a  jal         func_118C28
    ctx->pc = 0x10CD90u;
    SET_GPR_U32(ctx, 31, 0x10CD98u);
    ctx->pc = 0x10CD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10CD90u;
            // 0x10cd94: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118C28u;
    if (runtime->hasFunction(0x118C28u)) {
        auto targetFn = runtime->lookupFunction(0x118C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CD98u; }
        if (ctx->pc != 0x10CD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x118c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CD98u; }
        if (ctx->pc != 0x10CD98u) { return; }
    }
    ctx->pc = 0x10CD98u;
label_10cd98:
    // 0x10cd98: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x10cd98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_10cd9c:
    // 0x10cd9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10cd9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10cda0:
    // 0x10cda0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10cda0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10cda4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10cda4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10cda8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10cda8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cdac: 0x3e00008  jr          $ra
    ctx->pc = 0x10CDACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CDACu;
            // 0x10cdb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CDB4u;
}
