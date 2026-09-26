#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMapID__6CSceneFPc
// Address: 0x283cc0 - 0x283d5c
void GetMapID__6CSceneFPc_0x283cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMapID__6CSceneFPc_0x283cc0");
#endif

    switch (ctx->pc) {
        case 0x283cf0u: goto label_283cf0;
        case 0x283cf8u: goto label_283cf8;
        case 0x283d1cu: goto label_283d1c;
        default: break;
    }

    ctx->pc = 0x283cc0u;

    // 0x283cc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x283cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x283cc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x283cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x283cc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x283cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x283ccc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x283cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x283cd0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x283cd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283cd4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x283cd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283cd8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x283CD8u;
    {
        const bool branch_taken_0x283cd8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x283CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283CD8u;
            // 0x283cdc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283cd8) {
            ctx->pc = 0x283CE8u;
            goto label_283ce8;
        }
    }
    ctx->pc = 0x283CE0u;
    // 0x283ce0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x283CE0u;
    {
        const bool branch_taken_0x283ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283CE0u;
            // 0x283ce4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ce0) {
            ctx->pc = 0x283D44u;
            goto label_283d44;
        }
    }
    ctx->pc = 0x283CE8u;
label_283ce8:
    // 0x283ce8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x283CE8u;
    {
        const bool branch_taken_0x283ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283CE8u;
            // 0x283cec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ce8) {
            ctx->pc = 0x283D30u;
            goto label_283d30;
        }
    }
    ctx->pc = 0x283CF0u;
label_283cf0:
    // 0x283cf0: 0xc0a0ce0  jal         func_283380
    ctx->pc = 0x283CF0u;
    SET_GPR_U32(ctx, 31, 0x283CF8u);
    ctx->pc = 0x283CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283CF0u;
            // 0x283cf4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283380u;
    if (runtime->hasFunction(0x283380u)) {
        auto targetFn = runtime->lookupFunction(0x283380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283CF8u; }
        if (ctx->pc != 0x283CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneMap__6CSceneFi_0x283380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283CF8u; }
        if (ctx->pc != 0x283CF8u) { return; }
    }
    ctx->pc = 0x283CF8u;
label_283cf8:
    // 0x283cf8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x283CF8u;
    {
        const bool branch_taken_0x283cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283cf8) {
            ctx->pc = 0x283D2Cu;
            goto label_283d2c;
        }
    }
    ctx->pc = 0x283D00u;
    // 0x283d00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x283d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283d04: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x283d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
    // 0x283d08: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x283d08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x283d0c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x283D0Cu;
    {
        const bool branch_taken_0x283d0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x283D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283D0Cu;
            // 0x283d10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283d0c) {
            ctx->pc = 0x283D2Cu;
            goto label_283d2c;
        }
    }
    ctx->pc = 0x283D14u;
    // 0x283d14: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x283D14u;
    SET_GPR_U32(ctx, 31, 0x283D1Cu);
    ctx->pc = 0x283D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283D14u;
            // 0x283d18: 0x24450008  addiu       $a1, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283D1Cu; }
        if (ctx->pc != 0x283D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283D1Cu; }
        if (ctx->pc != 0x283D1Cu) { return; }
    }
    ctx->pc = 0x283D1Cu;
label_283d1c:
    // 0x283d1c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x283D1Cu;
    {
        const bool branch_taken_0x283d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283D1Cu;
            // 0x283d20: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283d1c) {
            ctx->pc = 0x283D2Cu;
            goto label_283d2c;
        }
    }
    ctx->pc = 0x283D24u;
    // 0x283d24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x283D24u;
    {
        const bool branch_taken_0x283d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283D24u;
            // 0x283d28: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283d24) {
            ctx->pc = 0x283D48u;
            goto label_283d48;
        }
    }
    ctx->pc = 0x283D2Cu;
label_283d2c:
    // 0x283d2c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x283d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_283d30:
    // 0x283d30: 0x8e4227e0  lw          $v0, 0x27E0($s2)
    ctx->pc = 0x283d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10208)));
    // 0x283d34: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x283d34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x283d38: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x283D38u;
    {
        const bool branch_taken_0x283d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283D38u;
            // 0x283d3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283d38) {
            ctx->pc = 0x283CF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_283cf0;
        }
    }
    ctx->pc = 0x283D40u;
    // 0x283d40: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x283d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_283d44:
    // 0x283d44: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x283d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_283d48:
    // 0x283d48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x283d48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283d4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x283d4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283d50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x283d50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283d54: 0x3e00008  jr          $ra
    ctx->pc = 0x283D54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283D54u;
            // 0x283d58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x283D5Cu;
}
