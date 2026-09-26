#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateOcclusion__4CMapFPA4_f
// Address: 0x15cfd0 - 0x15d078
void CreateOcclusion__4CMapFPA4_f_0x15cfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateOcclusion__4CMapFPA4_f_0x15cfd0");
#endif

    ctx->pc = 0x15cfd0u;

    // 0x15cfd0: 0x8c870670  lw          $a3, 0x670($a0)
    ctx->pc = 0x15cfd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1648)));
    // 0x15cfd4: 0x28e10008  slti        $at, $a3, 0x8
    ctx->pc = 0x15cfd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x15cfd8: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x15CFD8u;
    {
        const bool branch_taken_0x15cfd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CFD8u;
            // 0x15cfdc: 0x71840  sll         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cfd8) {
            ctx->pc = 0x15D070u;
            goto label_15d070;
        }
    }
    ctx->pc = 0x15CFE0u;
    // 0x15cfe0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15cfe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15cfe4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x15cfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x15cfe8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x15cfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x15cfec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15cfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15cff0: 0xac660680  sw          $a2, 0x680($v1)
    ctx->pc = 0x15cff0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1664), GPR_U32(ctx, 6));
    // 0x15cff4: 0x8c860670  lw          $a2, 0x670($a0)
    ctx->pc = 0x15cff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1648)));
    // 0x15cff8: 0x78a70000  lq          $a3, 0x0($a1)
    ctx->pc = 0x15cff8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15cffc: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x15cffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x15d000: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x15d000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x15d004: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x15d004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x15d008: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15d008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15d00c: 0x7c670690  sq          $a3, 0x690($v1)
    ctx->pc = 0x15d00cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 1680), GPR_VEC(ctx, 7));
    // 0x15d010: 0x8c860670  lw          $a2, 0x670($a0)
    ctx->pc = 0x15d010u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1648)));
    // 0x15d014: 0x78a70010  lq          $a3, 0x10($a1)
    ctx->pc = 0x15d014u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15d018: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x15d018u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x15d01c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x15d01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x15d020: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x15d020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x15d024: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15d024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15d028: 0x7c6706a0  sq          $a3, 0x6A0($v1)
    ctx->pc = 0x15d028u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 1696), GPR_VEC(ctx, 7));
    // 0x15d02c: 0x8c860670  lw          $a2, 0x670($a0)
    ctx->pc = 0x15d02cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1648)));
    // 0x15d030: 0x78a70020  lq          $a3, 0x20($a1)
    ctx->pc = 0x15d030u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x15d034: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x15d034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x15d038: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x15d038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x15d03c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x15d03cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x15d040: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15d040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15d044: 0x7c6706b0  sq          $a3, 0x6B0($v1)
    ctx->pc = 0x15d044u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 1712), GPR_VEC(ctx, 7));
    // 0x15d048: 0x78a60030  lq          $a2, 0x30($a1)
    ctx->pc = 0x15d048u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x15d04c: 0x8c850670  lw          $a1, 0x670($a0)
    ctx->pc = 0x15d04cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1648)));
    // 0x15d050: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x15d050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x15d054: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15d054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15d058: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x15d058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x15d05c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15d05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15d060: 0x7c6606c0  sq          $a2, 0x6C0($v1)
    ctx->pc = 0x15d060u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 1728), GPR_VEC(ctx, 6));
    // 0x15d064: 0x8c830670  lw          $v1, 0x670($a0)
    ctx->pc = 0x15d064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1648)));
    // 0x15d068: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15d068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15d06c: 0xac830670  sw          $v1, 0x670($a0)
    ctx->pc = 0x15d06cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1648), GPR_U32(ctx, 3));
label_15d070:
    // 0x15d070: 0x3e00008  jr          $ra
    ctx->pc = 0x15D070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15D078u;
}
