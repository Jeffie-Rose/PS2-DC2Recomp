#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_ACTIVE_LIGHT__FP12RS_STACKDATAi
// Address: 0x2651f0 - 0x265258
void ps2__SET_ACTIVE_LIGHT__FP12RS_STACKDATAi_0x2651f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_ACTIVE_LIGHT__FP12RS_STACKDATAi_0x2651f0");
#endif

    switch (ctx->pc) {
        case 0x265200u: goto label_265200;
        case 0x265214u: goto label_265214;
        default: break;
    }

    ctx->pc = 0x2651f0u;

    // 0x2651f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2651f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2651f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2651f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2651f8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2651F8u;
    SET_GPR_U32(ctx, 31, 0x265200u);
    ctx->pc = 0x2651FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2651F8u;
            // 0x2651fc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265200u; }
        if (ctx->pc != 0x265200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265200u; }
        if (ctx->pc != 0x265200u) { return; }
    }
    ctx->pc = 0x265200u;
label_265200:
    // 0x265200: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x265200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x265204: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x265204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265208: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x265208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26520c: 0xc0a1214  jal         func_284850
    ctx->pc = 0x26520Cu;
    SET_GPR_U32(ctx, 31, 0x265214u);
    ctx->pc = 0x265210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26520Cu;
            // 0x265210: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284850u;
    if (runtime->hasFunction(0x284850u)) {
        auto targetFn = runtime->lookupFunction(0x284850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265214u; }
        if (ctx->pc != 0x265214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveMap__6CSceneFPP4CMapi_0x284850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265214u; }
        if (ctx->pc != 0x265214u) { return; }
    }
    ctx->pc = 0x265214u;
label_265214:
    // 0x265214: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x265214u;
    {
        const bool branch_taken_0x265214 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x265218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265214u;
            // 0x265218: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265214) {
            ctx->pc = 0x265224u;
            goto label_265224;
        }
    }
    ctx->pc = 0x26521Cu;
    // 0x26521c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26521Cu;
    {
        const bool branch_taken_0x26521c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26521Cu;
            // 0x265220: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26521c) {
            ctx->pc = 0x26524Cu;
            goto label_26524c;
        }
    }
    ctx->pc = 0x265224u;
label_265224:
    // 0x265224: 0x6000008  bltz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x265224u;
    {
        const bool branch_taken_0x265224 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x265228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265224u;
            // 0x265228: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265224) {
            ctx->pc = 0x265248u;
            goto label_265248;
        }
    }
    ctx->pc = 0x26522Cu;
    // 0x26522c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x26522cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265230: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x265230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x265234: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x265234u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x265238: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x265238u;
    {
        const bool branch_taken_0x265238 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x265238) {
            ctx->pc = 0x265244u;
            goto label_265244;
        }
    }
    ctx->pc = 0x265240u;
    // 0x265240: 0xac700098  sw          $s0, 0x98($v1)
    ctx->pc = 0x265240u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 152), GPR_U32(ctx, 16));
label_265244:
    // 0x265244: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x265244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_265248:
    // 0x265248: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x265248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26524c:
    // 0x26524c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26524cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265250: 0x3e00008  jr          $ra
    ctx->pc = 0x265250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265250u;
            // 0x265254: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x265258u;
}
