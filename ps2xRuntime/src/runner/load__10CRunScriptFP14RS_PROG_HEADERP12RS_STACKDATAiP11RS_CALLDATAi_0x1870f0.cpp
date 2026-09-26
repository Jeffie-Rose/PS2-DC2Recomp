#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: load__10CRunScriptFP14RS_PROG_HEADERP12RS_STACKDATAiP11RS_CALLDATAi
// Address: 0x1870f0 - 0x1871c8
void load__10CRunScriptFP14RS_PROG_HEADERP12RS_STACKDATAiP11RS_CALLDATAi_0x1870f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("load__10CRunScriptFP14RS_PROG_HEADERP12RS_STACKDATAiP11RS_CALLDATAi_0x1870f0");
#endif

    switch (ctx->pc) {
        case 0x18715cu: goto label_18715c;
        case 0x1871b8u: goto label_1871b8;
        default: break;
    }

    ctx->pc = 0x1870f0u;

    // 0x1870f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1870f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1870f4: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x1870f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1870f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1870f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1870fc: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1870fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x187100: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x187100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x187104: 0x750c0  sll         $t2, $a3, 3
    ctx->pc = 0x187104u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x187108: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x187108u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x18710c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18710cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x187110: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x187110u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x187114: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x187114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187118: 0xac880024  sw          $t0, 0x24($a0)
    ctx->pc = 0x187118u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 8));
    // 0x18711c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x18711cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x187120: 0xac890020  sw          $t1, 0x20($a0)
    ctx->pc = 0x187120u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 9));
    // 0x187124: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x187124u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x187128: 0xea1021  addu        $v0, $a3, $t2
    ctx->pc = 0x187128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x18712c: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x18712cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x187130: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x187130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x187134: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187138: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x187138u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x18713c: 0xac850044  sw          $a1, 0x44($a0)
    ctx->pc = 0x18713cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 5));
    // 0x187140: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x187140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x187144: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x187144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x187148: 0xac820048  sw          $v0, 0x48($a0)
    ctx->pc = 0x187148u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
    // 0x18714c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x18714cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x187150: 0x8c840044  lw          $a0, 0x44($a0)
    ctx->pc = 0x187150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x187154: 0xc04a4dc  jal         func_129370
    ctx->pc = 0x187154u;
    SET_GPR_U32(ctx, 31, 0x18715Cu);
    ctx->pc = 0x187158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187154u;
            // 0x187158: 0x24a54120  addiu       $a1, $a1, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18715Cu; }
        if (ctx->pc != 0x18715Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18715Cu; }
        if (ctx->pc != 0x18715Cu) { return; }
    }
    ctx->pc = 0x18715Cu;
label_18715c:
    // 0x18715c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x18715Cu;
    {
        const bool branch_taken_0x18715c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18715c) {
            ctx->pc = 0x1871B8u;
            goto label_1871b8;
        }
    }
    ctx->pc = 0x187164u;
    // 0x187164: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x187164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x187168: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x187168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18716c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x18716cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x187170: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x187170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x187174: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x187174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x187178: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x187178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x18717c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x18717cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x187180: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x187180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x187184: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x187184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x187188: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18718c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x18718cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x187190: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x187190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x187194: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x187194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x187198: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x187198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x18719c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18719cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1871a0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1871a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1871a4: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1871a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1871a8: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1871a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1871ac: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1871acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1871b0: 0xc049c86  jal         func_127218
    ctx->pc = 0x1871B0u;
    SET_GPR_U32(ctx, 31, 0x1871B8u);
    ctx->pc = 0x1871B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1871B0u;
            // 0x1871b4: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1871B8u; }
        if (ctx->pc != 0x1871B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1871B8u; }
        if (ctx->pc != 0x1871B8u) { return; }
    }
    ctx->pc = 0x1871B8u;
label_1871b8:
    // 0x1871b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1871b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1871bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1871bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1871c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1871C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1871C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1871C0u;
            // 0x1871c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1871C8u;
}
