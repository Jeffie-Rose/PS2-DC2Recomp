#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Analog__11CPadControlFi
// Address: 0x2ed520 - 0x2ed550
void Analog__11CPadControlFi_0x2ed520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Analog__11CPadControlFi_0x2ed520");
#endif

    ctx->pc = 0x2ed520u;

    // 0x2ed520: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED520u;
    {
        const bool branch_taken_0x2ed520 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2ED524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED520u;
            // 0x2ed524: 0x28a20020  slti        $v0, $a1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed520) {
            ctx->pc = 0x2ED530u;
            goto label_2ed530;
        }
    }
    ctx->pc = 0x2ED528u;
    // 0x2ed528: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED528u;
    {
        const bool branch_taken_0x2ed528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED528u;
            // 0x2ed52c: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed528) {
            ctx->pc = 0x2ED53Cu;
            goto label_2ed53c;
        }
    }
    ctx->pc = 0x2ED530u;
label_2ed530:
    // 0x2ed530: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ed530u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed534: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED534u;
    {
        const bool branch_taken_0x2ed534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed534) {
            ctx->pc = 0x2ED548u;
            goto label_2ed548;
        }
    }
    ctx->pc = 0x2ED53Cu;
label_2ed53c:
    // 0x2ed53c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ed53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ed540: 0xc4400410  lwc1        $f0, 0x410($v0)
    ctx->pc = 0x2ed540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed544: 0x0  nop
    ctx->pc = 0x2ed544u;
    // NOP
label_2ed548:
    // 0x2ed548: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ED550u;
}
