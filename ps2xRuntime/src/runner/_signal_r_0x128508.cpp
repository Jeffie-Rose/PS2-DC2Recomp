#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _signal_r
// Address: 0x128508 - 0x128594
void _signal_r_0x128508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_signal_r_0x128508");
#endif

    switch (ctx->pc) {
        case 0x128558u: goto label_128558;
        default: break;
    }

    ctx->pc = 0x128508u;

    // 0x128508: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x128508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12850c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x12850cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x128510: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x128510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x128514: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x128514u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128518: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x128518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12851c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x12851cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128520: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x128520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x128524: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x128524u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x128528: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x128528u;
    {
        const bool branch_taken_0x128528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12852Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128528u;
            // 0x12852c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128528) {
            ctx->pc = 0x128544u;
            goto label_128544;
        }
    }
    ctx->pc = 0x128530u;
    // 0x128530: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x128530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x128534: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x128534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x128538: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x128538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x12853c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x12853Cu;
    {
        const bool branch_taken_0x12853c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12853Cu;
            // 0x128540: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12853c) {
            ctx->pc = 0x12857Cu;
            goto label_12857c;
        }
    }
    ctx->pc = 0x128544u;
label_128544:
    // 0x128544: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x128544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x128548: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x128548u;
    {
        const bool branch_taken_0x128548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12854Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128548u;
            // 0x12854c: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128548) {
            ctx->pc = 0x128570u;
            goto label_128570;
        }
    }
    ctx->pc = 0x128550u;
    // 0x128550: 0xc04a126  jal         func_128498
    ctx->pc = 0x128550u;
    SET_GPR_U32(ctx, 31, 0x128558u);
    ctx->pc = 0x128554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128550u;
            // 0x128554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128498u;
    if (runtime->hasFunction(0x128498u)) {
        auto targetFn = runtime->lookupFunction(0x128498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128558u; }
        if (ctx->pc != 0x128558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _init_signal_r_0x128498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128558u; }
        if (ctx->pc != 0x128558u) { return; }
    }
    ctx->pc = 0x128558u;
label_128558:
    // 0x128558: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x128558u;
    {
        const bool branch_taken_0x128558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128558) {
            ctx->pc = 0x12855Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128558u;
            // 0x12855c: 0x8e0201d4  lw          $v0, 0x1D4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12856Cu;
            goto label_12856c;
        }
    }
    ctx->pc = 0x128560u;
    // 0x128560: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x128560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x128564: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x128564u;
    {
        const bool branch_taken_0x128564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128564u;
            // 0x128568: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128564) {
            ctx->pc = 0x12857Cu;
            goto label_12857c;
        }
    }
    ctx->pc = 0x12856Cu;
label_12856c:
    // 0x12856c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x12856cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_128570:
    // 0x128570: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x128570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x128574: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x128574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128578: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x128578u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
label_12857c:
    // 0x12857c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12857cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128580: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x128580u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128584: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x128584u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128588: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x128588u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12858c: 0x3e00008  jr          $ra
    ctx->pc = 0x12858Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12858Cu;
            // 0x128590: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x128594u;
}
