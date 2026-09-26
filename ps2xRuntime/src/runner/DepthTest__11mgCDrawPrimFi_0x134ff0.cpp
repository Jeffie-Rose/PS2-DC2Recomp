#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DepthTest__11mgCDrawPrimFi
// Address: 0x134ff0 - 0x135090
void DepthTest__11mgCDrawPrimFi_0x134ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DepthTest__11mgCDrawPrimFi_0x134ff0");
#endif

    ctx->pc = 0x134ff0u;

    // 0x134ff0: 0x90890022  lbu         $t1, 0x22($a0)
    ctx->pc = 0x134ff0u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x134ff4: 0x2407fffe  addiu       $a3, $zero, -0x2
    ctx->pc = 0x134ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x134ff8: 0x64080001  daddiu      $t0, $zero, 0x1
    ctx->pc = 0x134ff8u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x134ffc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x134ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x135000: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x135000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x135004: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x135004u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x135008: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x135008u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x13500c: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x13500cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x135010: 0x10a60017  beq         $a1, $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x135010u;
    {
        const bool branch_taken_0x135010 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x135014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135010u;
            // 0x135014: 0xa0870022  sb          $a3, 0x22($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 34), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135010) {
            ctx->pc = 0x135070u;
            goto label_135070;
        }
    }
    ctx->pc = 0x135018u;
    // 0x135018: 0x10aa000e  beq         $a1, $t2, . + 4 + (0xE << 2)
    ctx->pc = 0x135018u;
    {
        const bool branch_taken_0x135018 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 10));
        ctx->pc = 0x13501Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135018u;
            // 0x13501c: 0x30c40003  andi        $a0, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x135018) {
            ctx->pc = 0x135054u;
            goto label_135054;
        }
    }
    ctx->pc = 0x135020u;
    // 0x135020: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x135020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x135024: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x135024u;
    {
        const bool branch_taken_0x135024 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x135024) {
            ctx->pc = 0x135034u;
            goto label_135034;
        }
    }
    ctx->pc = 0x13502Cu;
    // 0x13502c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x13502Cu;
    {
        const bool branch_taken_0x13502c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13502c) {
            ctx->pc = 0x135088u;
            goto label_135088;
        }
    }
    ctx->pc = 0x135034u;
label_135034:
    // 0x135034: 0x90660002  lbu         $a2, 0x2($v1)
    ctx->pc = 0x135034u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x135038: 0x31440003  andi        $a0, $t2, 0x3
    ctx->pc = 0x135038u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x13503c: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x13503cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x135040: 0x2404fff9  addiu       $a0, $zero, -0x7
    ctx->pc = 0x135040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x135044: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x135044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x135048: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x135048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x13504c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x13504Cu;
    {
        const bool branch_taken_0x13504c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13504Cu;
            // 0x135050: 0xa0640002  sb          $a0, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13504c) {
            ctx->pc = 0x135088u;
            goto label_135088;
        }
    }
    ctx->pc = 0x135054u;
label_135054:
    // 0x135054: 0x90660002  lbu         $a2, 0x2($v1)
    ctx->pc = 0x135054u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x135058: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x135058u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x13505c: 0x2404fff9  addiu       $a0, $zero, -0x7
    ctx->pc = 0x13505cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x135060: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x135060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x135064: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x135064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x135068: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x135068u;
    {
        const bool branch_taken_0x135068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13506Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135068u;
            // 0x13506c: 0xa0640002  sb          $a0, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135068) {
            ctx->pc = 0x135088u;
            goto label_135088;
        }
    }
    ctx->pc = 0x135070u;
label_135070:
    // 0x135070: 0x90660002  lbu         $a2, 0x2($v1)
    ctx->pc = 0x135070u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x135074: 0x2404fff9  addiu       $a0, $zero, -0x7
    ctx->pc = 0x135074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x135078: 0x64050006  daddiu      $a1, $zero, 0x6
    ctx->pc = 0x135078u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
    // 0x13507c: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x13507cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x135080: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x135080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x135084: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x135084u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_135088:
    // 0x135088: 0x3e00008  jr          $ra
    ctx->pc = 0x135088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x135090u;
}
