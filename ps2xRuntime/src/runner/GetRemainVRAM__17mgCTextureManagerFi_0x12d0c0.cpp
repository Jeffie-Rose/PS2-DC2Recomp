#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetRemainVRAM__17mgCTextureManagerFi
// Address: 0x12d0c0 - 0x12d140
void GetRemainVRAM__17mgCTextureManagerFi_0x12d0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRemainVRAM__17mgCTextureManagerFi_0x12d0c0");
#endif

    switch (ctx->pc) {
        case 0x12d100u: goto label_12d100;
        default: break;
    }

    ctx->pc = 0x12d0c0u;

    // 0x12d0c0: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D0C0u;
    {
        const bool branch_taken_0x12d0c0 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x12d0c0) {
            ctx->pc = 0x12D0D8u;
            goto label_12d0d8;
        }
    }
    ctx->pc = 0x12D0C8u;
    // 0x12d0c8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x12d0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12d0cc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x12d0ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12d0d0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D0D0u;
    {
        const bool branch_taken_0x12d0d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d0d0) {
            ctx->pc = 0x12D0E4u;
            goto label_12d0e4;
        }
    }
    ctx->pc = 0x12D0D8u;
label_12d0d8:
    // 0x12d0d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12d0d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d0dc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x12D0DCu;
    {
        const bool branch_taken_0x12d0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d0dc) {
            ctx->pc = 0x12D138u;
            goto label_12d138;
        }
    }
    ctx->pc = 0x12D0E4u;
label_12d0e4:
    // 0x12d0e4: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x12d0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x12d0e8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x12d0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12d0ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12d0f0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x12d0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12d0f4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x12d0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12d0f8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12D0F8u;
    {
        const bool branch_taken_0x12d0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d0f8) {
            ctx->pc = 0x12D128u;
            goto label_12d128;
        }
    }
    ctx->pc = 0x12D100u;
label_12d100:
    // 0x12d100: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x12d100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x12d104: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x12d104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x12d108: 0x84620006  lh          $v0, 0x6($v1)
    ctx->pc = 0x12d108u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x12d10c: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x12d10cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x12d110: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x12D110u;
    {
        const bool branch_taken_0x12d110 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d110) {
            ctx->pc = 0x12D11Cu;
            goto label_12d11c;
        }
    }
    ctx->pc = 0x12D118u;
    // 0x12d118: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x12d118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_12d11c:
    // 0x12d11c: 0x0  nop
    ctx->pc = 0x12d11cu;
    // NOP
    // 0x12d120: 0x8c630068  lw          $v1, 0x68($v1)
    ctx->pc = 0x12d120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x12d124: 0x0  nop
    ctx->pc = 0x12d124u;
    // NOP
label_12d128:
    // 0x12d128: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x12D128u;
    {
        const bool branch_taken_0x12d128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d128) {
            ctx->pc = 0x12D100u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12d100;
        }
    }
    ctx->pc = 0x12D130u;
    // 0x12d130: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x12d130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12d134: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x12d134u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_12d138:
    // 0x12d138: 0x3e00008  jr          $ra
    ctx->pc = 0x12D138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12D140u;
}
