#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AttachFuncData__12CMenuKeyFuncFv
// Address: 0x23bd60 - 0x23be08
void AttachFuncData__12CMenuKeyFuncFv_0x23bd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AttachFuncData__12CMenuKeyFuncFv_0x23bd60");
#endif

    switch (ctx->pc) {
        case 0x23bd80u: goto label_23bd80;
        case 0x23bd98u: goto label_23bd98;
        case 0x23bdacu: goto label_23bdac;
        case 0x23bdc0u: goto label_23bdc0;
        case 0x23bde0u: goto label_23bde0;
        case 0x23bdf4u: goto label_23bdf4;
        default: break;
    }

    ctx->pc = 0x23bd60u;

    // 0x23bd60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23bd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23bd64: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x23bd64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x23bd68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23bd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23bd6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23bd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23bd70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23bd70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bd74: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x23bd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x23bd78: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x23BD78u;
    SET_GPR_U32(ctx, 31, 0x23BD80u);
    ctx->pc = 0x23BD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BD78u;
            // 0x23bd7c: 0x24a5abe8  addiu       $a1, $a1, -0x5418 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BD80u; }
        if (ctx->pc != 0x23BD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BD80u; }
        if (ctx->pc != 0x23BD80u) { return; }
    }
    ctx->pc = 0x23BD80u;
label_23bd80:
    // 0x23bd80: 0xae020138  sw          $v0, 0x138($s0)
    ctx->pc = 0x23bd80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
    // 0x23bd84: 0x8e040138  lw          $a0, 0x138($s0)
    ctx->pc = 0x23bd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x23bd88: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23BD88u;
    {
        const bool branch_taken_0x23bd88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BD88u;
            // 0x23bd8c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd88) {
            ctx->pc = 0x23BDD0u;
            goto label_23bdd0;
        }
    }
    ctx->pc = 0x23BD90u;
    // 0x23bd90: 0xc089664  jal         func_225990
    ctx->pc = 0x23BD90u;
    SET_GPR_U32(ctx, 31, 0x23BD98u);
    ctx->pc = 0x23BD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BD90u;
            // 0x23bd94: 0x24a5abf0  addiu       $a1, $a1, -0x5410 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BD98u; }
        if (ctx->pc != 0x23BD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BD98u; }
        if (ctx->pc != 0x23BD98u) { return; }
    }
    ctx->pc = 0x23BD98u;
label_23bd98:
    // 0x23bd98: 0xae020144  sw          $v0, 0x144($s0)
    ctx->pc = 0x23bd98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 2));
    // 0x23bd9c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x23bd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x23bda0: 0x8e040138  lw          $a0, 0x138($s0)
    ctx->pc = 0x23bda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x23bda4: 0xc089664  jal         func_225990
    ctx->pc = 0x23BDA4u;
    SET_GPR_U32(ctx, 31, 0x23BDACu);
    ctx->pc = 0x23BDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BDA4u;
            // 0x23bda8: 0x24a5abf8  addiu       $a1, $a1, -0x5408 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BDACu; }
        if (ctx->pc != 0x23BDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BDACu; }
        if (ctx->pc != 0x23BDACu) { return; }
    }
    ctx->pc = 0x23BDACu;
label_23bdac:
    // 0x23bdac: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x23bdacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    // 0x23bdb0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x23bdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x23bdb4: 0x8e040138  lw          $a0, 0x138($s0)
    ctx->pc = 0x23bdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x23bdb8: 0xc089664  jal         func_225990
    ctx->pc = 0x23BDB8u;
    SET_GPR_U32(ctx, 31, 0x23BDC0u);
    ctx->pc = 0x23BDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BDB8u;
            // 0x23bdbc: 0x24a5ac08  addiu       $a1, $a1, -0x53F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BDC0u; }
        if (ctx->pc != 0x23BDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BDC0u; }
        if (ctx->pc != 0x23BDC0u) { return; }
    }
    ctx->pc = 0x23BDC0u;
label_23bdc0:
    // 0x23bdc0: 0xae02014c  sw          $v0, 0x14C($s0)
    ctx->pc = 0x23bdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
    // 0x23bdc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23bdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23bdc8: 0x8e02014c  lw          $v0, 0x14C($s0)
    ctx->pc = 0x23bdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x23bdcc: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x23bdccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
label_23bdd0:
    // 0x23bdd0: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x23bdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x23bdd4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x23bdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x23bdd8: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x23BDD8u;
    SET_GPR_U32(ctx, 31, 0x23BDE0u);
    ctx->pc = 0x23BDDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BDD8u;
            // 0x23bddc: 0x24a5ac18  addiu       $a1, $a1, -0x53E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BDE0u; }
        if (ctx->pc != 0x23BDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BDE0u; }
        if (ctx->pc != 0x23BDE0u) { return; }
    }
    ctx->pc = 0x23BDE0u;
label_23bde0:
    // 0x23bde0: 0xae02013c  sw          $v0, 0x13C($s0)
    ctx->pc = 0x23bde0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 2));
    // 0x23bde4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x23bde4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x23bde8: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x23bde8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x23bdec: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x23BDECu;
    SET_GPR_U32(ctx, 31, 0x23BDF4u);
    ctx->pc = 0x23BDF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BDECu;
            // 0x23bdf0: 0x24a5ac28  addiu       $a1, $a1, -0x53D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BDF4u; }
        if (ctx->pc != 0x23BDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BDF4u; }
        if (ctx->pc != 0x23BDF4u) { return; }
    }
    ctx->pc = 0x23BDF4u;
label_23bdf4:
    // 0x23bdf4: 0xae020140  sw          $v0, 0x140($s0)
    ctx->pc = 0x23bdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 2));
    // 0x23bdf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23bdf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bdfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23bdfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23be00: 0x3e00008  jr          $ra
    ctx->pc = 0x23BE00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BE00u;
            // 0x23be04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23BE08u;
}
