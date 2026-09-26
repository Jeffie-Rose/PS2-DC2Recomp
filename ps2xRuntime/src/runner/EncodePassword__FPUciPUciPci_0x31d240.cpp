#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EncodePassword__FPUciPUciPci
// Address: 0x31d240 - 0x31d340
void EncodePassword__FPUciPUciPci_0x31d240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EncodePassword__FPUciPUciPci_0x31d240");
#endif

    switch (ctx->pc) {
        case 0x31d2fcu: goto label_31d2fc;
        case 0x31d310u: goto label_31d310;
        default: break;
    }

    ctx->pc = 0x31d240u;

    // 0x31d240: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x31d240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x31d244: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31d244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31d248: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31d248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31d24c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x31d24cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x31d250: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x31d250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x31d254: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x31d254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x31d258: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x31d258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x31d25c: 0xafa80060  sw          $t0, 0x60($sp)
    ctx->pc = 0x31d25cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 8));
    // 0x31d260: 0xafa90070  sw          $t1, 0x70($sp)
    ctx->pc = 0x31d260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 9));
    // 0x31d264: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x31d264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31d268: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x31d268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x31d26c: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x31d26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x31d270: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31D270u;
    {
        const bool branch_taken_0x31d270 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x31d270) {
            ctx->pc = 0x31D284u;
            goto label_31d284;
        }
    }
    ctx->pc = 0x31D278u;
    // 0x31d278: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x31D278u;
    {
        const bool branch_taken_0x31d278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d278) {
            ctx->pc = 0x31D284u;
            goto label_31d284;
        }
    }
    ctx->pc = 0x31D280u;
    // 0x31d280: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x31d280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_31d284:
    // 0x31d284: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31D284u;
    {
        const bool branch_taken_0x31d284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d284) {
            ctx->pc = 0x31D298u;
            goto label_31d298;
        }
    }
    ctx->pc = 0x31D28Cu;
    // 0x31d28c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31d28cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d290: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x31D290u;
    {
        const bool branch_taken_0x31d290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d290) {
            ctx->pc = 0x31D32Cu;
            goto label_31d32c;
        }
    }
    ctx->pc = 0x31D298u;
label_31d298:
    // 0x31d298: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x31d298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31d29c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x31d29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31d2a0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x31d2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x31d2a4: 0x418c3  sra         $v1, $a0, 3
    ctx->pc = 0x31d2a4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
    // 0x31d2a8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D2A8u;
    {
        const bool branch_taken_0x31d2a8 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x31d2a8) {
            ctx->pc = 0x31D2B8u;
            goto label_31d2b8;
        }
    }
    ctx->pc = 0x31D2B0u;
    // 0x31d2b0: 0x24820007  addiu       $v0, $a0, 0x7
    ctx->pc = 0x31d2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x31d2b4: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x31d2b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_31d2b8:
    // 0x31d2b8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x31d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31d2bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31d2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31d2c0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x31d2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x31d2c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31d2c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31d2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31d2cc: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x31d2ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31d2d0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x31D2D0u;
    {
        const bool branch_taken_0x31d2d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d2d0) {
            ctx->pc = 0x31D2E4u;
            goto label_31d2e4;
        }
    }
    ctx->pc = 0x31D2D8u;
    // 0x31d2d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31d2d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d2dc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x31D2DCu;
    {
        const bool branch_taken_0x31d2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d2dc) {
            ctx->pc = 0x31D32Cu;
            goto label_31d32c;
        }
    }
    ctx->pc = 0x31D2E4u;
label_31d2e4:
    // 0x31d2e4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x31d2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31d2e8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x31d2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31d2ec: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x31d2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31d2f0: 0x8fa70050  lw          $a3, 0x50($sp)
    ctx->pc = 0x31d2f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31d2f4: 0xc0c73ac  jal         func_31CEB0
    ctx->pc = 0x31D2F4u;
    SET_GPR_U32(ctx, 31, 0x31D2FCu);
    ctx->pc = 0x31CEB0u;
    if (runtime->hasFunction(0x31CEB0u)) {
        auto targetFn = runtime->lookupFunction(0x31CEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D2FCu; }
        if (ctx->pc != 0x31D2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EncodeBinData__FPUciPUci_0x31ceb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D2FCu; }
        if (ctx->pc != 0x31D2FCu) { return; }
    }
    ctx->pc = 0x31D2FCu;
label_31d2fc:
    // 0x31d2fc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x31d2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31d300: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x31d300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31d304: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x31d304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31d308: 0xc0c72d8  jal         func_31CB60
    ctx->pc = 0x31D308u;
    SET_GPR_U32(ctx, 31, 0x31D310u);
    ctx->pc = 0x31CB60u;
    if (runtime->hasFunction(0x31CB60u)) {
        auto targetFn = runtime->lookupFunction(0x31CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D310u; }
        if (ctx->pc != 0x31D310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertBinToTxt__FPUciPc_0x31cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D310u; }
        if (ctx->pc != 0x31D310u) { return; }
    }
    ctx->pc = 0x31D310u;
label_31d310:
    // 0x31d310: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31d310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d314: 0x1e000004  bgtz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31D314u;
    {
        const bool branch_taken_0x31d314 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x31d314) {
            ctx->pc = 0x31D328u;
            goto label_31d328;
        }
    }
    ctx->pc = 0x31D31Cu;
    // 0x31d31c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31d31cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d320: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31D320u;
    {
        const bool branch_taken_0x31d320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d320) {
            ctx->pc = 0x31D32Cu;
            goto label_31d32c;
        }
    }
    ctx->pc = 0x31D328u;
label_31d328:
    // 0x31d328: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31d328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31d32c:
    // 0x31d32c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31d32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31d330: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31d330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31d334: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x31d334u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31d338: 0x3e00008  jr          $ra
    ctx->pc = 0x31D338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31D340u;
}
