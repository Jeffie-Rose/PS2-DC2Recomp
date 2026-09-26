#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NextLoop__Fi13INIT_LOOP_ARG
// Address: 0x190900 - 0x190998
void NextLoop__Fi13INIT_LOOP_ARG_0x190900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NextLoop__Fi13INIT_LOOP_ARG_0x190900");
#endif

    switch (ctx->pc) {
        case 0x19090cu: goto label_19090c;
        case 0x19094cu: goto label_19094c;
        default: break;
    }

    ctx->pc = 0x190900u;

    // 0x190900: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x190900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x190904: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x190904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x190908: 0x27a80000  addiu       $t0, $sp, 0x0
    ctx->pc = 0x190908u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
label_19090c:
    // 0x19090c: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x19090cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190910: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x190910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x190914: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x190914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x190918: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x190918u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x19091c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x19091cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x190920: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x190920u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x190924: 0x1ce0fff9  bgtz        $a3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x190924u;
    {
        const bool branch_taken_0x190924 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x190928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190924u;
            // 0x190928: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190924) {
            ctx->pc = 0x19090Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19090c;
        }
    }
    ctx->pc = 0x19092Cu;
    // 0x19092c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19092cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190930: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x190930u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x190934: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x190934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
    // 0x190938: 0xaf848ae0  sw          $a0, -0x7520($gp)
    ctx->pc = 0x190938u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937312), GPR_U32(ctx, 4));
    // 0x19093c: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x19093cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x190940: 0x24c68194  addiu       $a2, $a2, -0x7E6C
    ctx->pc = 0x190940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934932));
    // 0x190944: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x190944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x190948: 0xac238190  sw          $v1, -0x7E70($at)
    ctx->pc = 0x190948u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294934928), GPR_U32(ctx, 3));
label_19094c:
    // 0x19094c: 0x80e40000  lb          $a0, 0x0($a3)
    ctx->pc = 0x19094cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x190950: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x190950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x190954: 0x80e30001  lb          $v1, 0x1($a3)
    ctx->pc = 0x190954u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x190958: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x190958u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x19095c: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x19095cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x190960: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x190960u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x190964: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x190964u;
    {
        const bool branch_taken_0x190964 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x190968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190964u;
            // 0x190968: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190964) {
            ctx->pc = 0x19094Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19094c;
        }
    }
    ctx->pc = 0x19096Cu;
    // 0x19096c: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x19096cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x190970: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x190970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
    // 0x190974: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x190974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x190978: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x190978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x19097c: 0xac2581d4  sw          $a1, -0x7E2C($at)
    ctx->pc = 0x19097cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294934996), GPR_U32(ctx, 5));
    // 0x190980: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x190980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
    // 0x190984: 0xac2481d8  sw          $a0, -0x7E28($at)
    ctx->pc = 0x190984u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935000), GPR_U32(ctx, 4));
    // 0x190988: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x190988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
    // 0x19098c: 0xac2381dc  sw          $v1, -0x7E24($at)
    ctx->pc = 0x19098cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294935004), GPR_U32(ctx, 3));
    // 0x190990: 0x3e00008  jr          $ra
    ctx->pc = 0x190990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190990u;
            // 0x190994: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190998u;
}
