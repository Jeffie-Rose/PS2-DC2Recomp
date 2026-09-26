#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GEOSTONE_SET_REFERENCE__FP12RS_STACKDATAi
// Address: 0x278eb0 - 0x278f48
void ps2__GEOSTONE_SET_REFERENCE__FP12RS_STACKDATAi_0x278eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GEOSTONE_SET_REFERENCE__FP12RS_STACKDATAi_0x278eb0");
#endif

    switch (ctx->pc) {
        case 0x278ec4u: goto label_278ec4;
        case 0x278ed0u: goto label_278ed0;
        case 0x278edcu: goto label_278edc;
        case 0x278f08u: goto label_278f08;
        case 0x278f34u: goto label_278f34;
        default: break;
    }

    ctx->pc = 0x278eb0u;

    // 0x278eb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x278eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x278eb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x278eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x278eb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x278eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x278ebc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x278EBCu;
    SET_GPR_U32(ctx, 31, 0x278EC4u);
    ctx->pc = 0x278EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278EBCu;
            // 0x278ec0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278EC4u; }
        if (ctx->pc != 0x278EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278EC4u; }
        if (ctx->pc != 0x278EC4u) { return; }
    }
    ctx->pc = 0x278EC4u;
label_278ec4:
    // 0x278ec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278ec8: 0xc097e48  jal         func_25F920
    ctx->pc = 0x278EC8u;
    SET_GPR_U32(ctx, 31, 0x278ED0u);
    ctx->pc = 0x278ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278EC8u;
            // 0x278ecc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278ED0u; }
        if (ctx->pc != 0x278ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278ED0u; }
        if (ctx->pc != 0x278ED0u) { return; }
    }
    ctx->pc = 0x278ED0u;
label_278ed0:
    // 0x278ed0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x278ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278ed4: 0xc09ac74  jal         func_26B1D0
    ctx->pc = 0x278ED4u;
    SET_GPR_U32(ctx, 31, 0x278EDCu);
    ctx->pc = 0x278ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278ED4u;
            // 0x278ed8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B1D0u;
    if (runtime->hasFunction(0x26B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278EDCu; }
        if (ctx->pc != 0x278EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChara__Fi_0x26b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278EDCu; }
        if (ctx->pc != 0x278EDCu) { return; }
    }
    ctx->pc = 0x278EDCu;
label_278edc:
    // 0x278edc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x278EDCu;
    {
        const bool branch_taken_0x278edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x278edc) {
            ctx->pc = 0x278EECu;
            goto label_278eec;
        }
    }
    ctx->pc = 0x278EE4u;
    // 0x278ee4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x278EE4u;
    {
        const bool branch_taken_0x278ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278EE4u;
            // 0x278ee8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278ee4) {
            ctx->pc = 0x278F38u;
            goto label_278f38;
        }
    }
    ctx->pc = 0x278EECu;
label_278eec:
    // 0x278eec: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x278eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x278ef0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x278EF0u;
    {
        const bool branch_taken_0x278ef0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x278EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278EF0u;
            // 0x278ef4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278ef0) {
            ctx->pc = 0x278F00u;
            goto label_278f00;
        }
    }
    ctx->pc = 0x278EF8u;
    // 0x278ef8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x278EF8u;
    {
        const bool branch_taken_0x278ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278EF8u;
            // 0x278efc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278ef8) {
            ctx->pc = 0x278F38u;
            goto label_278f38;
        }
    }
    ctx->pc = 0x278F00u;
label_278f00:
    // 0x278f00: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x278F00u;
    SET_GPR_U32(ctx, 31, 0x278F08u);
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278F08u; }
        if (ctx->pc != 0x278F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278F08u; }
        if (ctx->pc != 0x278F08u) { return; }
    }
    ctx->pc = 0x278F08u;
label_278f08:
    // 0x278f08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x278F08u;
    {
        const bool branch_taken_0x278f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x278F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278F08u;
            // 0x278f0c: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278f08) {
            ctx->pc = 0x278F18u;
            goto label_278f18;
        }
    }
    ctx->pc = 0x278F10u;
    // 0x278f10: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x278F10u;
    {
        const bool branch_taken_0x278f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278F10u;
            // 0x278f14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278f10) {
            ctx->pc = 0x278F38u;
            goto label_278f38;
        }
    }
    ctx->pc = 0x278F18u;
label_278f18:
    // 0x278f18: 0x8c245230  lw          $a0, 0x5230($at)
    ctx->pc = 0x278f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21040)));
    // 0x278f1c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x278F1Cu;
    {
        const bool branch_taken_0x278f1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x278F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278F1Cu;
            // 0x278f20: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278f1c) {
            ctx->pc = 0x278F2Cu;
            goto label_278f2c;
        }
    }
    ctx->pc = 0x278F24u;
    // 0x278f24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x278F24u;
    {
        const bool branch_taken_0x278f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278F24u;
            // 0x278f28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278f24) {
            ctx->pc = 0x278F38u;
            goto label_278f38;
        }
    }
    ctx->pc = 0x278F2Cu;
label_278f2c:
    // 0x278f2c: 0xc04db0c  jal         func_136C30
    ctx->pc = 0x278F2Cu;
    SET_GPR_U32(ctx, 31, 0x278F34u);
    ctx->pc = 0x136C30u;
    if (runtime->hasFunction(0x136C30u)) {
        auto targetFn = runtime->lookupFunction(0x136C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278F34u; }
        if (ctx->pc != 0x278F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetReference__8mgCFrameFP8mgCFrame_0x136c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278F34u; }
        if (ctx->pc != 0x278F34u) { return; }
    }
    ctx->pc = 0x278F34u;
label_278f34:
    // 0x278f34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x278f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_278f38:
    // 0x278f38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x278f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278f3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x278f3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278f40: 0x3e00008  jr          $ra
    ctx->pc = 0x278F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278F40u;
            // 0x278f44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x278F48u;
}
