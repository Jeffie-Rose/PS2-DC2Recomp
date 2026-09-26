#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __swrite
// Address: 0x1289a8 - 0x128a28
void ps2___swrite_0x1289a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___swrite_0x1289a8");
#endif

    switch (ctx->pc) {
        case 0x1289e8u: goto label_1289e8;
        case 0x128a08u: goto label_128a08;
        default: break;
    }

    ctx->pc = 0x1289a8u;

    // 0x1289a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1289a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1289ac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1289acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1289b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1289b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1289b4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1289b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1289b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1289b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1289bc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1289bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1289c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1289c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1289c4: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x1289c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1289c8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1289c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1289cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1289CCu;
    {
        const bool branch_taken_0x1289cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1289D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1289CCu;
            // 0x1289d0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1289cc) {
            ctx->pc = 0x1289E8u;
            goto label_1289e8;
        }
    }
    ctx->pc = 0x1289D4u;
    // 0x1289d4: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x1289d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1289d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1289d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1289dc: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x1289dcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1289e0: 0xc0498bc  jal         func_1262F0
    ctx->pc = 0x1289E0u;
    SET_GPR_U32(ctx, 31, 0x1289E8u);
    ctx->pc = 0x1289E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1289E0u;
            // 0x1289e4: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1262F0u;
    if (runtime->hasFunction(0x1262F0u)) {
        auto targetFn = runtime->lookupFunction(0x1262F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1289E8u; }
        if (ctx->pc != 0x1289E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _lseek_r_0x1262f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1289E8u; }
        if (ctx->pc != 0x1289E8u) { return; }
    }
    ctx->pc = 0x1289E8u;
label_1289e8:
    // 0x1289e8: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x1289e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1289ec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1289ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1289f0: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x1289f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1289f4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1289f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1289f8: 0x3042efff  andi        $v0, $v0, 0xEFFF
    ctx->pc = 0x1289f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
    // 0x1289fc: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x1289fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x128a00: 0xc04b0c2  jal         func_12C308
    ctx->pc = 0x128A00u;
    SET_GPR_U32(ctx, 31, 0x128A08u);
    ctx->pc = 0x128A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128A00u;
            // 0x128a04: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C308u;
    if (runtime->hasFunction(0x12C308u)) {
        auto targetFn = runtime->lookupFunction(0x12C308u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128A08u; }
        if (ctx->pc != 0x128A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _write_r_0x12c308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128A08u; }
        if (ctx->pc != 0x128A08u) { return; }
    }
    ctx->pc = 0x128A08u;
label_128a08:
    // 0x128a08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x128a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128a0c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x128a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x128a10: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x128a10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x128a14: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x128a14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128a18: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x128a18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128a1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x128a1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128a20: 0x3e00008  jr          $ra
    ctx->pc = 0x128A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128A20u;
            // 0x128a24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x128A28u;
}
