#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _mprec_log10
// Address: 0x128298 - 0x128304
void _mprec_log10_0x128298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_mprec_log10_0x128298");
#endif

    switch (ctx->pc) {
        case 0x1282d8u: goto label_1282d8;
        case 0x1282e8u: goto label_1282e8;
        default: break;
    }

    ctx->pc = 0x128298u;

    // 0x128298: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x128298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12829c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12829cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1282a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1282a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1282a4: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x1282a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1282a8: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x1282a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x1282ac: 0x2a020018  slti        $v0, $s0, 0x18
    ctx->pc = 0x1282acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1282b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1282B0u;
    {
        const bool branch_taken_0x1282b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1282B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1282B0u;
            // 0x1282b4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1282b0) {
            ctx->pc = 0x1282D0u;
            goto label_1282d0;
        }
    }
    ctx->pc = 0x1282B8u;
    // 0x1282b8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1282b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1282bc: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1282bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1282c0: 0x244220c8  addiu       $v0, $v0, 0x20C8
    ctx->pc = 0x1282c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8392));
    // 0x1282c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1282c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1282c8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1282C8u;
    {
        const bool branch_taken_0x1282c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1282CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1282C8u;
            // 0x1282cc: 0xdc620000  ld          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1282c8) {
            ctx->pc = 0x1282F4u;
            goto label_1282f4;
        }
    }
    ctx->pc = 0x1282D0u;
label_1282d0:
    // 0x1282d0: 0x1a000008  blez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1282D0u;
    {
        const bool branch_taken_0x1282d0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1282D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1282D0u;
            // 0x1282d4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1282d0) {
            ctx->pc = 0x1282F4u;
            goto label_1282f4;
        }
    }
    ctx->pc = 0x1282D8u;
label_1282d8:
    // 0x1282d8: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x1282d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x1282dc: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1282dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1282e0: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x1282E0u;
    SET_GPR_U32(ctx, 31, 0x1282E8u);
    ctx->pc = 0x1282E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1282E0u;
            // 0x1282e4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1282E8u; }
        if (ctx->pc != 0x1282E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1282E8u; }
        if (ctx->pc != 0x1282E8u) { return; }
    }
    ctx->pc = 0x1282E8u;
label_1282e8:
    // 0x1282e8: 0x1e00fffb  bgtz        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1282E8u;
    {
        const bool branch_taken_0x1282e8 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x1282ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1282E8u;
            // 0x1282ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1282e8) {
            ctx->pc = 0x1282D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1282d8;
        }
    }
    ctx->pc = 0x1282F0u;
    // 0x1282f0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1282f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1282f4:
    // 0x1282f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1282f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1282f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1282f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1282fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1282FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1282FCu;
            // 0x128300: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x128304u;
}
