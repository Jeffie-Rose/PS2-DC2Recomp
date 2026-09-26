#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: deci2Putchar
// Address: 0x1119b8 - 0x111a68
void deci2Putchar_0x1119b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("deci2Putchar_0x1119b8");
#endif

    switch (ctx->pc) {
        case 0x1119f8u: goto label_1119f8;
        default: break;
    }

    ctx->pc = 0x1119b8u;

    // 0x1119b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1119b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1119bc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1119bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1119c0: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x1119c0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x1119c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1119c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1119c8: 0x8e250e88  lw          $a1, 0xE88($s1)
    ctx->pc = 0x1119c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3720)));
    // 0x1119cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1119ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1119d0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1119d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1119d4: 0x28a2007e  slti        $v0, $a1, 0x7E
    ctx->pc = 0x1119d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)126) ? 1 : 0);
    // 0x1119d8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1119D8u;
    {
        const bool branch_taken_0x1119d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1119DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1119D8u;
            // 0x1119dc: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1119d8) {
            ctx->pc = 0x111A00u;
            goto label_111a00;
        }
    }
    ctx->pc = 0x1119E0u;
    // 0x1119e0: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x1119e0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x1119e4: 0xae200e88  sw          $zero, 0xE88($s1)
    ctx->pc = 0x1119e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3720), GPR_U32(ctx, 0));
    // 0x1119e8: 0x26429a40  addiu       $v0, $s2, -0x65C0
    ctx->pc = 0x1119e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941248));
    // 0x1119ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1119ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1119f0: 0xc04450e  jal         func_111438
    ctx->pc = 0x1119F0u;
    SET_GPR_U32(ctx, 31, 0x1119F8u);
    ctx->pc = 0x1119F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1119F0u;
            // 0x1119f4: 0xa040007f  sb          $zero, 0x7F($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 127), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111438u;
    if (runtime->hasFunction(0x111438u)) {
        auto targetFn = runtime->lookupFunction(0x111438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1119F8u; }
        if (ctx->pc != 0x1119F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kputs_0x111438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1119F8u; }
        if (ctx->pc != 0x1119F8u) { return; }
    }
    ctx->pc = 0x1119F8u;
label_1119f8:
    // 0x1119f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1119F8u;
    {
        const bool branch_taken_0x1119f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1119FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1119F8u;
            // 0x1119fc: 0x8e250e88  lw          $a1, 0xE88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1119f8) {
            ctx->pc = 0x111A04u;
            goto label_111a04;
        }
    }
    ctx->pc = 0x111A00u;
label_111a00:
    // 0x111a00: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x111a00u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
label_111a04:
    // 0x111a04: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x111a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x111a08: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x111A08u;
    {
        const bool branch_taken_0x111a08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x111A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111A08u;
            // 0x111a0c: 0x26429a40  addiu       $v0, $s2, -0x65C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a08) {
            ctx->pc = 0x111A40u;
            goto label_111a40;
        }
    }
    ctx->pc = 0x111A10u;
    // 0x111a10: 0x26449a40  addiu       $a0, $s2, -0x65C0
    ctx->pc = 0x111a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941248));
    // 0x111a14: 0xae200e88  sw          $zero, 0xE88($s1)
    ctx->pc = 0x111a14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3720), GPR_U32(ctx, 0));
    // 0x111a18: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x111a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x111a1c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x111a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x111a20: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x111a20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x111a24: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x111a24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111a28: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x111a28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111a2c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x111a2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111a30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x111a30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111a34: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x111a34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x111a38: 0x804450e  j           func_111438
    ctx->pc = 0x111A38u;
    ctx->pc = 0x111A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111A38u;
            // 0x111a3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111438u;
    if (runtime->hasFunction(0x111438u)) {
        auto targetFn = runtime->lookupFunction(0x111438u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kputs_0x111438(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x111A40u;
label_111a40:
    // 0x111a40: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x111a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x111a44: 0xae230e88  sw          $v1, 0xE88($s1)
    ctx->pc = 0x111a44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3720), GPR_U32(ctx, 3));
    // 0x111a48: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x111a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x111a4c: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x111a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x111a50: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x111a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x111a54: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x111a54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111a58: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x111a58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111a5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x111a5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111a60: 0x3e00008  jr          $ra
    ctx->pc = 0x111A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111A60u;
            // 0x111a64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x111A68u;
}
