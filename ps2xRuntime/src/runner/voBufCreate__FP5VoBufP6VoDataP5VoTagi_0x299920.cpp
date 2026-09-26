#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: voBufCreate__FP5VoBufP6VoDataP5VoTagi
// Address: 0x299920 - 0x299a08
void voBufCreate__FP5VoBufP6VoDataP5VoTagi_0x299920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("voBufCreate__FP5VoBufP6VoDataP5VoTagi_0x299920");
#endif

    switch (ctx->pc) {
        case 0x299954u: goto label_299954;
        case 0x2999dcu: goto label_2999dc;
        default: break;
    }

    ctx->pc = 0x299920u;

    // 0x299920: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x299920u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x299924: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x299924u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x299928: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x299928u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x29992c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x29992cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299930: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x299930u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x299934: 0xac870014  sw          $a3, 0x14($a0)
    ctx->pc = 0x299934u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
    // 0x299938: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x299938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x29993c: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x29993Cu;
    {
        const bool branch_taken_0x29993c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x299940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29993Cu;
            // 0x299940: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29993c) {
            ctx->pc = 0x2999FCu;
            goto label_2999fc;
        }
    }
    ctx->pc = 0x299944u;
    // 0x299944: 0x28e10009  slti        $at, $a3, 0x9
    ctx->pc = 0x299944u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x299948: 0x1420001e  bnez        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x299948u;
    {
        const bool branch_taken_0x299948 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x29994Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299948u;
            // 0x29994c: 0x24e8fff8  addiu       $t0, $a3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299948) {
            ctx->pc = 0x2999C4u;
            goto label_2999c4;
        }
    }
    ctx->pc = 0x299950u;
    // 0x299950: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x299950u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_299954:
    // 0x299954: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x299954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x299958: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x299958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x29995c: 0x68282a  slt         $a1, $v1, $t0
    ctx->pc = 0x29995cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x299960: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x299960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x299964: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x299964u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x299968: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x299968u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29996c: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x29996cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x299970: 0xacc00048  sw          $zero, 0x48($a2)
    ctx->pc = 0x299970u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 0));
    // 0x299974: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x299974u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x299978: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x299978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x29997c: 0xacc00090  sw          $zero, 0x90($a2)
    ctx->pc = 0x29997cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 0));
    // 0x299980: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x299980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x299984: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x299984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x299988: 0xacc000d8  sw          $zero, 0xD8($a2)
    ctx->pc = 0x299988u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 216), GPR_U32(ctx, 0));
    // 0x29998c: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x29998cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x299990: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x299990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x299994: 0xacc00120  sw          $zero, 0x120($a2)
    ctx->pc = 0x299994u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 288), GPR_U32(ctx, 0));
    // 0x299998: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x299998u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29999c: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x29999cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2999a0: 0xacc00168  sw          $zero, 0x168($a2)
    ctx->pc = 0x2999a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 360), GPR_U32(ctx, 0));
    // 0x2999a4: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x2999a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2999a8: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x2999a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2999ac: 0xacc001b0  sw          $zero, 0x1B0($a2)
    ctx->pc = 0x2999acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 432), GPR_U32(ctx, 0));
    // 0x2999b0: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x2999b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2999b4: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x2999b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2999b8: 0xacc001f8  sw          $zero, 0x1F8($a2)
    ctx->pc = 0x2999b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 504), GPR_U32(ctx, 0));
    // 0x2999bc: 0x14a0ffe5  bnez        $a1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2999BCu;
    {
        const bool branch_taken_0x2999bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2999C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2999BCu;
            // 0x2999c0: 0x25290240  addiu       $t1, $t1, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2999bc) {
            ctx->pc = 0x299954u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_299954;
        }
    }
    ctx->pc = 0x2999C4u;
label_2999c4:
    // 0x2999c4: 0x0  nop
    ctx->pc = 0x2999c4u;
    // NOP
    // 0x2999c8: 0x67082a  slt         $at, $v1, $a3
    ctx->pc = 0x2999c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2999cc: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2999CCu;
    {
        const bool branch_taken_0x2999cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2999D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2999CCu;
            // 0x2999d0: 0x328c0  sll         $a1, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2999cc) {
            ctx->pc = 0x2999FCu;
            goto label_2999fc;
        }
    }
    ctx->pc = 0x2999D4u;
    // 0x2999d4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2999d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2999d8: 0x540c0  sll         $t0, $a1, 3
    ctx->pc = 0x2999d8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2999dc:
    // 0x2999dc: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x2999dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2999e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2999e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2999e4: 0x67282a  slt         $a1, $v1, $a3
    ctx->pc = 0x2999e4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2999e8: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x2999e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2999ec: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2999ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2999f0: 0x25080048  addiu       $t0, $t0, 0x48
    ctx->pc = 0x2999f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 72));
    // 0x2999f4: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2999F4u;
    {
        const bool branch_taken_0x2999f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2999f4) {
            ctx->pc = 0x2999DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2999dc;
        }
    }
    ctx->pc = 0x2999FCu;
label_2999fc:
    // 0x2999fc: 0x0  nop
    ctx->pc = 0x2999fcu;
    // NOP
    // 0x299a00: 0x3e00008  jr          $ra
    ctx->pc = 0x299A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x299A08u;
}
