#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: emapPOLYN__FP9SPI_STACKi
// Address: 0x2a55e0 - 0x2a5664
void emapPOLYN__FP9SPI_STACKi_0x2a55e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emapPOLYN__FP9SPI_STACKi_0x2a55e0");
#endif

    switch (ctx->pc) {
        case 0x2a560cu: goto label_2a560c;
        case 0x2a5628u: goto label_2a5628;
        case 0x2a5644u: goto label_2a5644;
        default: break;
    }

    ctx->pc = 0x2a55e0u;

    // 0x2a55e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a55e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a55e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a55e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a55e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a55e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a55ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a55ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a55f0: 0x8f829a64  lw          $v0, -0x659C($gp)
    ctx->pc = 0x2a55f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941284)));
    // 0x2a55f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A55F4u;
    {
        const bool branch_taken_0x2a55f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A55F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A55F4u;
            // 0x2a55f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a55f4) {
            ctx->pc = 0x2A5604u;
            goto label_2a5604;
        }
    }
    ctx->pc = 0x2A55FCu;
    // 0x2a55fc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2A55FCu;
    {
        const bool branch_taken_0x2a55fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A55FCu;
            // 0x2a5600: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a55fc) {
            ctx->pc = 0x2A5650u;
            goto label_2a5650;
        }
    }
    ctx->pc = 0x2A5604u;
label_2a5604:
    // 0x2a5604: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2A5604u;
    SET_GPR_U32(ctx, 31, 0x2A560Cu);
    ctx->pc = 0x2A5608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5604u;
            // 0x2a5608: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A560Cu; }
        if (ctx->pc != 0x2A560Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A560Cu; }
        if (ctx->pc != 0x2A560Cu) { return; }
    }
    ctx->pc = 0x2A560Cu;
label_2a560c:
    // 0x2a560c: 0x8f849a64  lw          $a0, -0x659C($gp)
    ctx->pc = 0x2a560cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941284)));
    // 0x2a5610: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x2a5610u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a5614: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A5614u;
    {
        const bool branch_taken_0x2a5614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5614u;
            // 0x2a5618: 0xac820030  sw          $v0, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5614) {
            ctx->pc = 0x2A5630u;
            goto label_2a5630;
        }
    }
    ctx->pc = 0x2A561Cu;
    // 0x2a561c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a561cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5620: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2A5620u;
    SET_GPR_U32(ctx, 31, 0x2A5628u);
    ctx->pc = 0x2A5624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5620u;
            // 0x2a5624: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5628u; }
        if (ctx->pc != 0x2A5628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5628u; }
        if (ctx->pc != 0x2A5628u) { return; }
    }
    ctx->pc = 0x2A5628u;
label_2a5628:
    // 0x2a5628: 0x8f839a64  lw          $v1, -0x659C($gp)
    ctx->pc = 0x2a5628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941284)));
    // 0x2a562c: 0xac620034  sw          $v0, 0x34($v1)
    ctx->pc = 0x2a562cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
label_2a5630:
    // 0x2a5630: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x2a5630u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2a5634: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A5634u;
    {
        const bool branch_taken_0x2a5634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5634u;
            // 0x2a5638: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5634) {
            ctx->pc = 0x2A5650u;
            goto label_2a5650;
        }
    }
    ctx->pc = 0x2A563Cu;
    // 0x2a563c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2A563Cu;
    SET_GPR_U32(ctx, 31, 0x2A5644u);
    ctx->pc = 0x2A5640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A563Cu;
            // 0x2a5640: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5644u; }
        if (ctx->pc != 0x2A5644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5644u; }
        if (ctx->pc != 0x2A5644u) { return; }
    }
    ctx->pc = 0x2A5644u;
label_2a5644:
    // 0x2a5644: 0x8f839a64  lw          $v1, -0x659C($gp)
    ctx->pc = 0x2a5644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941284)));
    // 0x2a5648: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x2a5648u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
    // 0x2a564c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a564cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a5650:
    // 0x2a5650: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a5650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a5654: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a5654u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5658: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a5658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a565c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A565Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A565Cu;
            // 0x2a5660: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A5664u;
}
