#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetNearAreaPiyori__11CMonsterManFf
// Address: 0x1dd410 - 0x1dd4a0
void SetNearAreaPiyori__11CMonsterManFf_0x1dd410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetNearAreaPiyori__11CMonsterManFf_0x1dd410");
#endif

    switch (ctx->pc) {
        case 0x1dd424u: goto label_1dd424;
        default: break;
    }

    ctx->pc = 0x1dd410u;

    // 0x1dd410: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dd410u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd414: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1dd414u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd418: 0x24060578  addiu       $a2, $zero, 0x578
    ctx->pc = 0x1dd418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1400));
    // 0x1dd41c: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x1dd41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1dd420: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1dd420u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dd424:
    // 0x1dd424: 0x8a1821  addu        $v1, $a0, $t2
    ctx->pc = 0x1dd424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1dd428: 0x8c680484  lw          $t0, 0x484($v1)
    ctx->pc = 0x1dd428u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1156)));
    // 0x1dd42c: 0x11000015  beqz        $t0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DD42Cu;
    {
        const bool branch_taken_0x1dd42c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd42c) {
            ctx->pc = 0x1DD484u;
            goto label_1dd484;
        }
    }
    ctx->pc = 0x1DD434u;
    // 0x1dd434: 0x8503068a  lh          $v1, 0x68A($t0)
    ctx->pc = 0x1dd434u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 1674)));
    // 0x1dd438: 0x14670012  bne         $v1, $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DD438u;
    {
        const bool branch_taken_0x1dd438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x1dd438) {
            ctx->pc = 0x1DD484u;
            goto label_1dd484;
        }
    }
    ctx->pc = 0x1DD440u;
    // 0x1dd440: 0xc50012f4  lwc1        $f0, 0x12F4($t0)
    ctx->pc = 0x1dd440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd444: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x1dd444u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd448: 0x0  nop
    ctx->pc = 0x1dd448u;
    // NOP
    // 0x1dd44c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1DD44Cu;
    {
        const bool branch_taken_0x1dd44c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dd44c) {
            ctx->pc = 0x1DD484u;
            goto label_1dd484;
        }
    }
    ctx->pc = 0x1DD454u;
    // 0x1dd454: 0x85030730  lh          $v1, 0x730($t0)
    ctx->pc = 0x1dd454u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 1840)));
    // 0x1dd458: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1DD458u;
    {
        const bool branch_taken_0x1dd458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd458) {
            ctx->pc = 0x1DD484u;
            goto label_1dd484;
        }
    }
    ctx->pc = 0x1DD460u;
    // 0x1dd460: 0x8d030be8  lw          $v1, 0xBE8($t0)
    ctx->pc = 0x1dd460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 3048)));
    // 0x1dd464: 0x1c600007  bgtz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DD464u;
    {
        const bool branch_taken_0x1dd464 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1dd464) {
            ctx->pc = 0x1DD484u;
            goto label_1dd484;
        }
    }
    ctx->pc = 0x1DD46Cu;
    // 0x1dd46c: 0x8d031348  lw          $v1, 0x1348($t0)
    ctx->pc = 0x1dd46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4936)));
    // 0x1dd470: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x1dd470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1dd474: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD474u;
    {
        const bool branch_taken_0x1dd474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd474) {
            ctx->pc = 0x1DD484u;
            goto label_1dd484;
        }
    }
    ctx->pc = 0x1DD47Cu;
    // 0x1dd47c: 0xa5061158  sh          $a2, 0x1158($t0)
    ctx->pc = 0x1dd47cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4440), (uint16_t)GPR_U32(ctx, 6));
    // 0x1dd480: 0xa505133a  sh          $a1, 0x133A($t0)
    ctx->pc = 0x1dd480u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4922), (uint16_t)GPR_U32(ctx, 5));
label_1dd484:
    // 0x1dd484: 0x0  nop
    ctx->pc = 0x1dd484u;
    // NOP
    // 0x1dd488: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1dd488u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1dd48c: 0x29230018  slti        $v1, $t1, 0x18
    ctx->pc = 0x1dd48cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1dd490: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1DD490u;
    {
        const bool branch_taken_0x1dd490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD490u;
            // 0x1dd494: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd490) {
            ctx->pc = 0x1DD424u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dd424;
        }
    }
    ctx->pc = 0x1DD498u;
    // 0x1dd498: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD4A0u;
}
