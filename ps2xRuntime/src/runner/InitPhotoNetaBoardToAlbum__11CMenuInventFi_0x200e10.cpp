#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitPhotoNetaBoardToAlbum__11CMenuInventFi
// Address: 0x200e10 - 0x200eb8
void InitPhotoNetaBoardToAlbum__11CMenuInventFi_0x200e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitPhotoNetaBoardToAlbum__11CMenuInventFi_0x200e10");
#endif

    switch (ctx->pc) {
        case 0x200e30u: goto label_200e30;
        case 0x200e5cu: goto label_200e5c;
        default: break;
    }

    ctx->pc = 0x200e10u;

    // 0x200e10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x200e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x200e14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x200e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x200e18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x200e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x200e1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x200e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x200e20: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x200e20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200e24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x200e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x200e28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x200e28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200e2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x200e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200e30:
    // 0x200e30: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x200E30u;
    {
        const bool branch_taken_0x200e30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x200E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200E30u;
            // 0x200e34: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200e30) {
            ctx->pc = 0x200E40u;
            goto label_200e40;
        }
    }
    ctx->pc = 0x200E38u;
    // 0x200e38: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x200e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x200e3c: 0xa0640508  sb          $a0, 0x508($v1)
    ctx->pc = 0x200e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1288), (uint8_t)GPR_U32(ctx, 4));
label_200e40:
    // 0x200e40: 0x8f8490d8  lw          $a0, -0x6F28($gp)
    ctx->pc = 0x200e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938840)));
    // 0x200e44: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x200E44u;
    {
        const bool branch_taken_0x200e44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x200E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200E44u;
            // 0x200e48: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200e44) {
            ctx->pc = 0x200E8Cu;
            goto label_200e8c;
        }
    }
    ctx->pc = 0x200E4Cu;
    // 0x200e4c: 0x1623000f  bne         $s1, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x200E4Cu;
    {
        const bool branch_taken_0x200e4c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x200E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200E4Cu;
            // 0x200e50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200e4c) {
            ctx->pc = 0x200E8Cu;
            goto label_200e8c;
        }
    }
    ctx->pc = 0x200E54u;
    // 0x200e54: 0xc07fa10  jal         func_1FE840
    ctx->pc = 0x200E54u;
    SET_GPR_U32(ctx, 31, 0x200E5Cu);
    ctx->pc = 0x1FE840u;
    if (runtime->hasFunction(0x1FE840u)) {
        auto targetFn = runtime->lookupFunction(0x1FE840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200E5Cu; }
        if (ctx->pc != 0x200E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAlbumPhotoInfo__13CDC2AlbumDataFi_0x1fe840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200E5Cu; }
        if (ctx->pc != 0x200E5Cu) { return; }
    }
    ctx->pc = 0x200E5Cu;
label_200e5c:
    // 0x200e5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x200E5Cu;
    {
        const bool branch_taken_0x200e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200E5Cu;
            // 0x200e60: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200e5c) {
            ctx->pc = 0x200E6Cu;
            goto label_200e6c;
        }
    }
    ctx->pc = 0x200E64u;
    // 0x200e64: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x200e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x200e68: 0xa0640508  sb          $a0, 0x508($v1)
    ctx->pc = 0x200e68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1288), (uint8_t)GPR_U32(ctx, 4));
label_200e6c:
    // 0x200e6c: 0x0  nop
    ctx->pc = 0x200e6cu;
    // NOP
    // 0x200e70: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x200E70u;
    {
        const bool branch_taken_0x200e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200e70) {
            ctx->pc = 0x200E8Cu;
            goto label_200e8c;
        }
    }
    ctx->pc = 0x200E78u;
    // 0x200e78: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x200e78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x200e7c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x200E7Cu;
    {
        const bool branch_taken_0x200e7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x200E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200E7Cu;
            // 0x200e80: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200e7c) {
            ctx->pc = 0x200E8Cu;
            goto label_200e8c;
        }
    }
    ctx->pc = 0x200E84u;
    // 0x200e84: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x200e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x200e88: 0xa0640508  sb          $a0, 0x508($v1)
    ctx->pc = 0x200e88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1288), (uint8_t)GPR_U32(ctx, 4));
label_200e8c:
    // 0x200e8c: 0x0  nop
    ctx->pc = 0x200e8cu;
    // NOP
    // 0x200e90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x200e90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x200e94: 0x2a030032  slti        $v1, $s0, 0x32
    ctx->pc = 0x200e94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x200e98: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x200E98u;
    {
        const bool branch_taken_0x200e98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x200e98) {
            ctx->pc = 0x200E30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_200e30;
        }
    }
    ctx->pc = 0x200EA0u;
    // 0x200ea0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x200ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x200ea4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x200ea4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200ea8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x200ea8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200eac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x200eacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x200EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200EB0u;
            // 0x200eb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x200EB8u;
}
