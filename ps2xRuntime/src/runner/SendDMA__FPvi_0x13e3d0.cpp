#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SendDMA__FPvi
// Address: 0x13e3d0 - 0x13e4a0
void SendDMA__FPvi_0x13e3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SendDMA__FPvi_0x13e3d0");
#endif

    switch (ctx->pc) {
        case 0x13e3fcu: goto label_13e3fc;
        case 0x13e434u: goto label_13e434;
        default: break;
    }

    ctx->pc = 0x13e3d0u;

    // 0x13e3d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13e3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13e3d4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x13e3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x13e3d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13e3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13e3dc: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x13e3dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x13e3e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13e3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13e3e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13e3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13e3e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13e3e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e3ec: 0x8f828750  lw          $v0, -0x78B0($gp)
    ctx->pc = 0x13e3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936400)));
    // 0x13e3f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13e3f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e3f4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x13E3F4u;
    {
        const bool branch_taken_0x13e3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E3F4u;
            // 0x13e3f8: 0x2238824  and         $s1, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e3f4) {
            ctx->pc = 0x13E424u;
            goto label_13e424;
        }
    }
    ctx->pc = 0x13E3FCu;
label_13e3fc:
    // 0x13e3fc: 0x0  nop
    ctx->pc = 0x13e3fcu;
    // NOP
    // 0x13e400: 0x0  nop
    ctx->pc = 0x13e400u;
    // NOP
    // 0x13e404: 0x0  nop
    ctx->pc = 0x13e404u;
    // NOP
    // 0x13e408: 0x0  nop
    ctx->pc = 0x13e408u;
    // NOP
    // 0x13e40c: 0x0  nop
    ctx->pc = 0x13e40cu;
    // NOP
    // 0x13e410: 0x0  nop
    ctx->pc = 0x13e410u;
    // NOP
    // 0x13e414: 0x4100fff9  bc0f        . + 4 + (-0x7 << 2)
    ctx->pc = 0x13E414u;
    {
        const bool branch_taken_0x13e414 = (false);
        if (branch_taken_0x13e414) {
            ctx->pc = 0x13E3FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13e3fc;
        }
    }
    ctx->pc = 0x13E41Cu;
    // 0x13e41c: 0x0  nop
    ctx->pc = 0x13e41cu;
    // NOP
    // 0x13e420: 0xaf808750  sw          $zero, -0x78B0($gp)
    ctx->pc = 0x13e420u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936400), GPR_U32(ctx, 0));
label_13e424:
    // 0x13e424: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x13e424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x13e428: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x13e428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x13e42c: 0xc04f8ec  jal         func_13E3B0
    ctx->pc = 0x13E42Cu;
    SET_GPR_U32(ctx, 31, 0x13E434u);
    ctx->pc = 0x13E430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13E42Cu;
            // 0x13e430: 0xac22e010  sw          $v0, -0x1FF0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294959120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E3B0u;
    if (runtime->hasFunction(0x13E3B0u)) {
        auto targetFn = runtime->lookupFunction(0x13E3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E434u; }
        if (ctx->pc != 0x13E434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScrPad__Fv_0x13e3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E434u; }
        if (ctx->pc != 0x13E434u) { return; }
    }
    ctx->pc = 0x13E434u;
label_13e434:
    // 0x13e434: 0x8f858770  lw          $a1, -0x7890($gp)
    ctx->pc = 0x13e434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936432)));
    // 0x13e438: 0x2313c  dsll32      $a2, $v0, 4
    ctx->pc = 0x13e438u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 4));
    // 0x13e43c: 0x6313e  dsrl32      $a2, $a2, 4
    ctx->pc = 0x13e43cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 4));
    // 0x13e440: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x13e440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x13e444: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x13e444u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x13e448: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13e448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e44c: 0xaca60080  sw          $a2, 0x80($a1)
    ctx->pc = 0x13e44cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 6));
    // 0x13e450: 0x8f858770  lw          $a1, -0x7890($gp)
    ctx->pc = 0x13e450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936432)));
    // 0x13e454: 0xacb10010  sw          $s1, 0x10($a1)
    ctx->pc = 0x13e454u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 17));
    // 0x13e458: 0x8f858770  lw          $a1, -0x7890($gp)
    ctx->pc = 0x13e458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936432)));
    // 0x13e45c: 0xacb00020  sw          $s0, 0x20($a1)
    ctx->pc = 0x13e45cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 16));
    // 0x13e460: 0x8f868770  lw          $a2, -0x7890($gp)
    ctx->pc = 0x13e460u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936432)));
    // 0x13e464: 0x90c50001  lbu         $a1, 0x1($a2)
    ctx->pc = 0x13e464u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x13e468: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x13e468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x13e46c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x13e46cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x13e470: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x13e470u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x13e474: 0x8f838754  lw          $v1, -0x78AC($gp)
    ctx->pc = 0x13e474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936404)));
    // 0x13e478: 0xaf878750  sw          $a3, -0x78B0($gp)
    ctx->pc = 0x13e478u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936400), GPR_U32(ctx, 7));
    // 0x13e47c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x13e47cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13e480: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x13e480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x13e484: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x13e484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13e488: 0xaf838754  sw          $v1, -0x78AC($gp)
    ctx->pc = 0x13e488u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936404), GPR_U32(ctx, 3));
    // 0x13e48c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13e48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13e490: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13e490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e494: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13e494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e498: 0x3e00008  jr          $ra
    ctx->pc = 0x13E498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E498u;
            // 0x13e49c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13E4A0u;
}
